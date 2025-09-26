    iVar7 = func_0x00bd3e10(iVar6,&stack0x00000018,unaff_retaddr);
    if (iVar7 < 1) goto LAB_00d43181;
    iVar7 = func_0x00bd3c80(iVar6,iStack00000004,&stack0x00000000);
    if (iVar7 < 1) goto LAB_00d43181;
    iStack00000004 = iStack00000004 + unaff_retaddr;
    ppuVar9 = ppuVar9 + 1;
    iStack00000008 = iStack00000008 + unaff_retaddr;
  } while ((int)ppuVar9 < 0x10c6888);
  func_0x00bd45b0(iVar6);
  func_0x00401320(&stack0x00000018,0x40);
  *piVar5 = iStack00000008;
LAB_00d431c6:
  FUN_008ab370();
  return;
}



undefined4 FUN_00d43280(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  iVar1 = param_3;
  if (*(int *)(param_3 + 0x24c) != 0) {
    return 1;
  }
  iVar2 = func_0x00d09c70(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x71c),&param_3,
                          &stack0x00000000,0,0,&param_1,0);
  if (iVar2 == 0) {
    func_0x00d06de0(iVar1,0x50);
    return 0;
  }
  func_0x00d032c0(*(undefined4 *)(iVar1 + 0x254));
  *(int *)(iVar1 + 0x254) = param_3;
  func_0x00d03350(*(undefined4 *)(iVar1 + 600));
  *(undefined4 *)(iVar1 + 600) = unaff_retaddr;
  *(undefined4 *)(iVar1 + 0x264) = param_1;
  iVar2 = func_0x00bc4320(unaff_retaddr);
  if (iVar2 < 1) {
    return 0;
  }
  iVar3 = func_0x00bc2520(param_3);
  iVar4 = FUN_00bc39e0(param_3);
  iVar2 = (iVar3 + iVar2 + iVar4) * 2;
  FUN_00bbc6c0(*(undefined4 *)(iVar1 + 0x250),*(undefined4 *)(iVar1 + 0x24c),"ssl\\s3_enc.c",0xd7);
  *(undefined4 *)(iVar1 + 0x250) = 0;
  *(undefined4 *)(iVar1 + 0x24c) = 0;
  iVar3 = FUN_00bbc4f0(iVar2,"ssl\\s3_enc.c",199);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_enc.c",200,"ssl3_setup_key_block");
    func_0x00d06d50(iVar1,0x50,0x8000f,0);
    return 0;
  }
  *(int *)(iVar1 + 0x24c) = iVar2;
  *(int *)(iVar1 + 0x250) = iVar3;
  uVar5 = func_0x00d42cc0(iVar1,iVar3,iVar2);
  return uVar5;
}



bool FUN_00d433e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = func_0x00d002a0(*(int *)(param_1 + 0x10));
    return 0 < iVar1;
  }
  iVar1 = func_0x00cfefa0(*(undefined4 *)(param_1 + 0xc),0x62,0,param_2);
  return 0 < iVar1;
}



bool FUN_00d43420(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = func_0x00d002a0(*(int *)(param_1 + 0x10));
    return 0 < iVar1;
  }
  iVar1 = func_0x00cfefa0(*(undefined4 *)(param_1 + 0xc),0x66,0,param_2);
  return 0 < iVar1;
}



bool FUN_00d43460(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = func_0x00d002a0(*(int *)(param_1 + 0x10));
    return 0 < iVar1;
  }
  iVar1 = func_0x00cfefa0(*(undefined4 *)(param_1 + 0xc),0x5c,0,param_2);
  return 0 < iVar1;
}



bool FUN_00d434a0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 1;
  if ((*param_1 & 2) != 0) {
    iVar2 = func_0x00bbbfe0(param_2,"+automatic");
    if (iVar2 == 0) {
      return true;
    }
    iVar2 = func_0x00bbbfe0(param_2,"automatic");
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((*param_1 & 1) != 0) {
    pbVar5 = &DAT_01060b80;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d43504:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_00d43509;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d43504;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_00d43509:
    if (uVar4 == 0) {
      return true;
    }
  }
  iVar2 = func_0x008ab0c6(param_2,0x3a);
  if (iVar2 != 0) {
    return false;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar6 = func_0x00d002a0(*(int *)(param_1 + 0x10),0x5c,0,param_2);
    }
    return 0 < iVar6;
  }
  iVar6 = func_0x00cfefa0(*(int *)(param_1 + 0xc),0x5c,0,param_2);
  return 0 < iVar6;
}



bool FUN_00d43570(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = func_0x00cffeb0(*(int *)(param_1 + 0xc),param_2);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = func_0x00d00f80(*(int *)(param_1 + 0x10),param_2);
  }
  return 0 < iVar1;
}



bool FUN_00d435b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = func_0x00d09430(*(int *)(param_1 + 0xc),param_2);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = func_0x00d09470(*(int *)(param_1 + 0x10),param_2);
  }
  return 0 < iVar1;
}



void FUN_00d435f0(int param_1,undefined4 param_2)

{
  *(undefined ***)(param_1 + 0x4c) = &PTR_DAT_010c6968;
  *(undefined4 *)(param_1 + 0x50) = 9;
  func_0x00bf1420(param_2,0x2c,1,FUN_00d44520,param_1);
  return;
}



void FUN_00d43620(int param_1,undefined4 param_2)

{
  func_0x00d442b0(param_1,param_2,*(undefined4 *)(param_1 + 0x44));
  return;
}



void FUN_00d43640(int param_1,undefined4 param_2)

{
  func_0x00d442b0(param_1,param_2,*(undefined4 *)(param_1 + 0x48));
  return;
}



undefined4 FUN_00d43660(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffd;
  }
  *(undefined ***)(param_1 + 0x4c) = &PTR_s_SessionTicket_010c6a80;
  *(undefined4 *)(param_1 + 0x50) = 0x1a;
  uVar1 = func_0x00bf1420(param_2,0x2c,1,FUN_00d44520,param_1);
  return uVar1;
}



undefined4 FUN_00d436a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffd;
  }
  *(undefined ***)(param_1 + 0x4c) = &PTR_DAT_010c6cf0;
  *(undefined4 *)(param_1 + 0x50) = 6;
  uVar1 = func_0x00bf1420(param_2,0x2c,1,FUN_00d44520,param_1);
  return uVar1;
}



bool FUN_00d436e0(byte *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  iVar5 = 1;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar5 = func_0x00d4cdd0(*(int *)(param_1 + 0xc),param_2);
    piVar4 = *(int **)(*(int *)(param_1 + 0xc) + 0xd8);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    piVar4 = piVar1;
    if ((*piVar1 != 0) &&
       ((*piVar1 != 1 || (piVar4 = (int *)piVar1[8], (int *)piVar1[8] == (int *)0x0)))) {
      return false;
    }
    iVar5 = func_0x00d4d690(piVar1,param_2);
    piVar4 = (int *)piVar4[0x1ab];
  }
  if (((0 < iVar5) && (piVar4 != (int *)0x0)) && ((*param_1 & 0x40) != 0)) {
    iVar2 = (*piVar4 - piVar4[5]) / 0x14;
    FUN_00bbc580(*(undefined4 *)(param_1 + iVar2 * 4 + 0x18),"ssl\\ssl_conf.c",0x1c8);
    iVar3 = func_0x00bbbc70(param_2,"ssl\\ssl_conf.c",0x1c9);
    *(int *)(param_1 + iVar2 * 4 + 0x18) = iVar3;
    if (iVar3 == 0) {
      iVar5 = 0;
    }
  }
  return 0 < iVar5;
}



uint FUN_00d437b0(byte *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if ((*param_1 & 0x20) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = func_0x00d4cba0(*(int *)(param_1 + 0xc),param_2,1);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = func_0x00d4d3e0(*(int *)(param_1 + 0x10),param_2,1);
  }
  return (uint)(0 < iVar1);
}



bool FUN_00d43800(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = func_0x00d4cfa0(*(int *)(param_1 + 0xc),param_2);
  }
  return 0 < iVar1;
}



undefined4 FUN_00d43830(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 != 0) {
      if (*piVar1 != 1) {
        return 0;
      }
      piVar1 = (int *)piVar1[8];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
    }
    iVar3 = piVar1[0x1ab];
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xd8);
  }
  iVar2 = *(int *)(iVar3 + 0x3c);
  if (iVar2 == 0) {
    iVar2 = func_0x00bd9660();
    *(int *)(iVar3 + 0x3c) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((param_2 != 0) && (iVar3 = func_0x00e93ee0(iVar2,param_2), iVar3 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00d438a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  uVar7 = 0;
  uVar5 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    piVar6 = piVar1;
    if (*piVar1 != 0) {
      if (*piVar1 != 1) {
        return 0;
      }
      piVar6 = (int *)piVar1[8];
      if ((int *)piVar1[8] == (int *)0x0) {
        return 0;
      }
    }
    puVar2 = (undefined4 *)piVar1[1];
    iVar4 = piVar6[0x1ab];
    if (puVar2 == (undefined4 *)0x0) goto LAB_00d438ec;
  }
  else {
    iVar4 = puVar2[0x36];
  }
  uVar7 = *puVar2;
  uVar5 = puVar2[0xa1];
LAB_00d438ec:
  iVar3 = *(int *)(iVar4 + 0x3c);
  if (iVar3 == 0) {
    iVar3 = func_0x00bd9660();
    *(int *)(iVar4 + 0x3c) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if ((param_2 != 0) && (iVar4 = func_0x00e93e90(iVar3,param_2,uVar7,uVar5), iVar4 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00d43930(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  uVar7 = 0;
  uVar5 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    piVar6 = piVar1;
    if (*piVar1 != 0) {
      if (*piVar1 != 1) {
        return 0;
      }
      piVar6 = (int *)piVar1[8];
      if ((int *)piVar1[8] == (int *)0x0) {
        return 0;
      }
    }
    puVar2 = (undefined4 *)piVar1[1];
    iVar4 = piVar6[0x1ab];
    if (puVar2 == (undefined4 *)0x0) goto LAB_00d4397c;
  }
  else {
    iVar4 = puVar2[0x36];
  }
  uVar7 = *puVar2;
  uVar5 = puVar2[0xa1];
LAB_00d4397c:
  iVar3 = *(int *)(iVar4 + 0x3c);
  if (iVar3 == 0) {
    iVar3 = func_0x00bd9660();
    *(int *)(iVar4 + 0x3c) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if ((param_2 != 0) && (iVar4 = func_0x00e93f20(iVar3,param_2,uVar7,uVar5), iVar4 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00d439c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 != 0) {
      if (*piVar1 != 1) {
        return 0;
      }
      piVar1 = (int *)piVar1[8];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
    }
    iVar3 = piVar1[0x1ab];
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xd8);
  }
  iVar2 = *(int *)(iVar3 + 0x40);
  if (iVar2 == 0) {
    iVar2 = func_0x00bd9660();
    *(int *)(iVar3 + 0x40) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((param_2 != 0) && (iVar3 = func_0x00e93ee0(iVar2,param_2), iVar3 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00d43a30(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  uVar7 = 0;
  uVar5 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    piVar6 = piVar1;
    if (*piVar1 != 0) {
      if (*piVar1 != 1) {
        return 0;
      }
      piVar6 = (int *)piVar1[8];
      if ((int *)piVar1[8] == (int *)0x0) {
        return 0;
      }
    }
    puVar2 = (undefined4 *)piVar1[1];
    iVar4 = piVar6[0x1ab];
    if (puVar2 == (undefined4 *)0x0) goto LAB_00d43a7c;
  }
  else {
    iVar4 = puVar2[0x36];
  }
  uVar7 = *puVar2;
  uVar5 = puVar2[0xa1];
LAB_00d43a7c:
  iVar3 = *(int *)(iVar4 + 0x40);
  if (iVar3 == 0) {
    iVar3 = func_0x00bd9660();
    *(int *)(iVar4 + 0x40) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if ((param_2 != 0) && (iVar4 = func_0x00e93e90(iVar3,param_2,uVar7,uVar5), iVar4 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00d43ac0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  uVar7 = 0;
  uVar5 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    piVar6 = piVar1;
    if (*piVar1 != 0) {
      if (*piVar1 != 1) {
        return 0;
      }
      piVar6 = (int *)piVar1[8];
      if ((int *)piVar1[8] == (int *)0x0) {
        return 0;
      }
    }
    puVar2 = (undefined4 *)piVar1[1];
    iVar4 = piVar6[0x1ab];
    if (puVar2 == (undefined4 *)0x0) goto LAB_00d43b0c;
  }
  else {
    iVar4 = puVar2[0x36];
  }
  uVar7 = *puVar2;
  uVar5 = puVar2[0xa1];
LAB_00d43b0c:
  iVar3 = *(int *)(iVar4 + 0x40);
  if (iVar3 == 0) {
    iVar3 = func_0x00bd9660();
    *(int *)(iVar4 + 0x40) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if ((param_2 != 0) && (iVar4 = func_0x00e93f20(iVar3,param_2,uVar7,uVar5), iVar4 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00d43b50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 == 0) {
    iVar4 = func_0x00bd1790();
    *(int *)(param_1 + 0x54) = iVar4;
  }
  if (iVar4 == 0) {
    return 0;
  }
  uVar1 = func_0x00bbe4d0(FUN_00d06110,FUN_00d06020,FUN_00ba7390,FUN_00ba7370,FUN_00ba7380,
                          FUN_00ba7370);
  iVar2 = func_0x00bbe5c0(uVar1);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\ssl_cert.c",0x36c,"SSL_add_file_cert_subjects_to_stack");
    func_0x00bc5160(0x14,0x8000f,0);
    func_0x00bbe2e0(0);
    return 0;
  }
  iVar3 = func_0x00bd1830(iVar4);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      uVar1 = func_0x00bd1a80(iVar4,iVar5);
      func_0x00bbe360(iVar2,uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  uVar1 = func_0x00d049e0(iVar4,param_2,iVar2);
  func_0x00bbe2e0(iVar2);
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00d04778)

void FUN_00d43b80(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  DWORD DVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined4 in_stack_00000444;
  char *in_stack_00000448;
  
  iVar7 = *(int *)(param_1 + 0x54);
  if (iVar7 == 0) {
    iVar7 = func_0x00bd1790();
    *(int *)(param_1 + 0x54) = iVar7;
  }
  if (iVar7 == 0) {
    return;
  }
  func_0x00e87f70();
  uVar2 = func_0x00bbe4d0(FUN_00d06110,FUN_00d06020,FUN_00ba7390,FUN_00ba7370,FUN_00ba7380,
                          FUN_00ba7370);
  iVar7 = func_0x00bbe5c0(uVar2);
  if (iVar7 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\ssl_cert.c",0x392,"SSL_add_dir_cert_subjects_to_stack");
    func_0x00bc5160(0x14,0x8000f,0);
  }
  else {
    iVar3 = func_0x00bd1830(in_stack_00000444);
    iVar10 = 0;
    if (0 < iVar3) {
      do {
        uVar2 = func_0x00bd1a80(in_stack_00000444,iVar10);
        func_0x00bbe360(iVar7,uVar2);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar3);
    }
    pcVar4 = (char *)func_0x00c98c60(&stack0x00000000,in_stack_00000448);
    while (pcVar4 != (char *)0x0) {
      pcVar8 = in_stack_00000448;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar9 = pcVar4;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if ((char *)0x400 <
          pcVar8 + (int)(pcVar9 + ((2 - (int)(pcVar4 + 1)) - (int)(in_stack_00000448 + 1)))) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\ssl_cert.c",0x3ae,"SSL_add_dir_cert_subjects_to_stack");
        func_0x00bc5160(0x14,0x10e,0);
        goto LAB_00d04771;
      }
      iVar3 = func_0x00bbc9d0(&stack0x0000003c,0x400,"%s/%s",in_stack_00000448,pcVar4);
      iVar10 = func_0x00e87aa8(&stack0x0000003c,&param_3);
      if (((iVar10 != 0) || ((param_4._2_4_ & 0xf000) != 0x4000)) &&
         ((0x3fe < iVar3 - 1U ||
          (iVar3 = func_0x00d049e0(in_stack_00000444,&stack0x0000003c,iVar7), iVar3 == 0))))
      goto LAB_00d04771;
      pcVar4 = (char *)func_0x00c98c60(&stack0x00000000,in_stack_00000448);
    }
    piVar5 = (int *)func_0x008aaf8a();
    if (*piVar5 != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\ssl_cert.c",0x3c2,"SSL_add_dir_cert_subjects_to_stack");
      pcVar4 = "calling OPENSSL_dir_read(%s)";
      DVar6 = GetLastError();
      func_0x00bc5160(2,DVar6,pcVar4,in_stack_00000448);
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\ssl_cert.c",0x3c4,"SSL_add_dir_cert_subjects_to_stack");
      func_0x00bc5160(0x14,0x80002,0);
    }
  }
LAB_00d04771:
  func_0x00bbe2e0(iVar7);
  FUN_008ab370();
  return;
}



undefined4 FUN_00d43bb0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 == 0) {
    iVar3 = func_0x00bd1790();
    *(int *)(param_1 + 0x54) = iVar3;
  }
  if (iVar3 == 0) {
    return 0;
  }
  uVar1 = func_0x00bd19c0(iVar3,FUN_00d06130);
  uVar2 = func_0x00d04b10(iVar3,param_2,1);
  func_0x00bd19c0(iVar3,uVar1);
  return uVar2;
}



bool FUN_00d43be0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar1 = param_1;
  iVar6 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  param_1 = 0;
  if (iVar3 == 0) {
    puVar7 = *(undefined4 **)(iVar1 + 0xc);
  }
  else {
    puVar7 = *(undefined4 **)(iVar3 + 4);
  }
  if ((*(int *)(iVar1 + 0xc) == 0) && (iVar3 == 0)) {
    return true;
  }
  uVar2 = func_0x00bac1d0();
  iVar3 = func_0x00baaee0(uVar2);
  if (iVar3 != 0) {
    iVar4 = func_0x00baa730(iVar3,0x6c,3,param_2);
    if (0 < iVar4) {
      iVar4 = func_0x00c026a0(&param_1,&DAT_0106b198,0,&DAT_010579a8,4,*puVar7,puVar7[0xa1]);
      if (iVar4 != 0) {
        FUN_00bcaeb0();
        do {
          iVar5 = func_0x00c265a0(iVar4,iVar3);
          if ((iVar5 != 0) || (param_1 != 0)) break;
          iVar5 = func_0x00baa730(iVar3,2,0,0);
        } while (iVar5 == 0);
        func_0x00c01b70(iVar4);
        if (param_1 == 0) {
          FUN_00bcacf0();
        }
        else {
          func_0x00bcad80();
          if (*(int *)(iVar1 + 0xc) != 0) {
            iVar6 = func_0x00cffdb0(*(int *)(iVar1 + 0xc),param_1);
            if (0 < iVar6) {
              param_1 = 0;
            }
          }
          if (*(int *)(iVar1 + 0x10) != 0) {
            iVar6 = func_0x00d00bc0(*(int *)(iVar1 + 0x10),param_1);
            if (0 < iVar6) {
              param_1 = 0;
            }
          }
        }
      }
    }
  }
  func_0x00bd5d50(param_1);
  func_0x00baa8e0(iVar3);
  return 0 < iVar6;
}



undefined4
FUN_00d43d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  uVar4 = 0;
  param_1 = 0;
  param_2 = 0;
  iVar1 = func_0x00bbbc70(param_5,"ssl\\ssl_conf.c",0x299);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined1 *)func_0x00e87d34(iVar1,&DAT_0113feb4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    if (puVar2[1] == '\0') {
      FUN_00bbc580(iVar1,"ssl\\ssl_conf.c",0x2a0);
      return 0;
    }
    iVar3 = func_0x00bbc160(puVar2 + 1,&param_2,0,&stack0x00000000);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = func_0x00bbc160(iVar1,&param_2,0,&param_1);
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (puVar2 == (undefined1 *)0x0) {
    uVar5 = param_1;
  }
  FUN_00bbc580(iVar1,"ssl\\ssl_conf.c",0x2aa);
  iVar1 = param_4;
  if (*(int *)(param_4 + 0xc) != 0) {
    uVar4 = func_0x00cffe30(*(int *)(param_4 + 0xc),param_1,uVar5);
  }
  if (*(int *)(iVar1 + 0x10) != 0) {
    uVar4 = func_0x00d00f10(*(int *)(iVar1 + 0x10),param_1,uVar5);
  }
  return uVar4;
}



undefined4 FUN_00d43e30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x008aafde(param_2);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar2 = func_0x00cfff80(*(int *)(param_1 + 0xc),iVar1);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = func_0x00d01080(*(int *)(param_1 + 0x10),iVar1);
      return uVar2;
    }
  }
  return uVar2;
}



undefined4 FUN_00d44520(undefined4 param_1,byte *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  
  func_0x00e87f70();
  uVar8 = 1;
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (param_3 != -1) {
    if (*param_2 == 0x2b) {
      uVar8 = 1;
    }
    else {
      if (*param_2 != 0x2d) goto LAB_00d44569;
      uVar8 = 0;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
LAB_00d44569:
  uVar5 = 0;
  puVar6 = (undefined4 *)param_4[0x13];
  if (param_4[0x14] != 0) {
    do {
      if ((puVar6[2] & *param_4 & 0xc) != 0) {
        if (param_3 == -1) {
          pbVar4 = (byte *)*puVar6;
          pbVar2 = param_2;
          do {
            bVar1 = *pbVar4;
            bVar7 = bVar1 < *pbVar2;
            if (bVar1 != *pbVar2) {
LAB_00d445b0:
              uVar3 = -(uint)bVar7 | 1;
              goto LAB_00d445c8;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar7 = bVar1 < pbVar2[1];
            if (bVar1 != pbVar2[1]) goto LAB_00d445b0;
            pbVar4 = pbVar4 + 2;
            pbVar2 = pbVar2 + 2;
          } while (bVar1 != 0);
          uVar3 = 0;
        }
        else {
          if (puVar6[1] != param_3) goto LAB_00d445cc;
          uVar3 = func_0x00bbc0f0(*puVar6,param_2,param_3);
        }
LAB_00d445c8:
        if (uVar3 == 0) {
          func_0x00d44480(param_4,puVar6[2],puVar6[4],puVar6[5],uVar8);
          return 1;
        }
      }
LAB_00d445cc:
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 6;
    } while (uVar5 < param_4[0x14]);
  }
  return 0;
}



undefined4 FUN_00d446a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x344) == 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0x10,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb0a0(param_2,2);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfb180(param_2,*(undefined4 *)(param_1 + 0x344),
                                *(undefined4 *)(param_1 + 0x348),1);
        if (iVar1 != 0) {
          iVar1 = func_0x00bfa920(param_2);
          if (iVar1 != 0) {
            iVar1 = func_0x00bfa920(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x607,"tls_construct_stoc_alpn");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d44760(undefined1 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1;
  pcVar1 = (char *)((int)param_1 + 0x885);
  if ((*(char *)((int)param_1 + 0x885) == '\x02') &&
     ((iVar3 = func_0x00d1e880(param_1), iVar3 != 0 || (*(int *)((int)param_1 + 0x8b4) == 2)))) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x7c3,"tls_construct_stoc_client_cert_type");
    func_0x00d06d50(param_1,0x2b,0x6e,0);
    return 0;
  }
  param_1 = (undefined1 *)((int)param_1 + 0x885);
  if (*(char *)(iVar2 + 0x884) == '\0') {
    *pcVar1 = '\0';
    return 2;
  }
  iVar3 = func_0x00d1e880(iVar2);
  if ((((iVar3 != 0) || (*(int *)(iVar2 + 0x8b4) == 2)) && (*pcVar1 == '\x01')) &&
     (*(int *)(iVar2 + 0xeb8) != 0)) {
    iVar3 = func_0x00bfae30(param_2,0x13,0,2);
    if (((iVar3 != 0) && (iVar3 = func_0x00bfb0a0(param_2,2), iVar3 != 0)) &&
       ((iVar3 = func_0x00bfae30(param_2,*(undefined1 *)(iVar2 + 0x884),0,1), iVar3 != 0 &&
        (iVar3 = func_0x00bfa920(param_2), iVar3 != 0)))) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x7dd,"tls_construct_stoc_client_cert_type");
    func_0x00d06d50(iVar2,0x50,0xc0103,0);
    return 0;
  }
  *(undefined1 *)(iVar2 + 0x884) = 0;
  *param_1 = 0;
  return 2;
}



undefined4
FUN_00d448c0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            int param_7,undefined4 param_8,int param_9,int param_10,int param_11,int param_12,
            undefined4 param_13,undefined4 param_14,uint param_15,undefined4 param_16)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int unaff_retaddr;
  undefined4 uVar6;
  
  func_0x00e87f70();
  uVar6 = param_16;
  uVar2 = param_15;
  param_5 = 0;
  puVar1 = *(undefined4 **)(param_15 + 4);
  if ((*(uint *)(param_15 + 0xb4) & 0x800) == 0) {
    return 2;
  }
  if (puVar1[0x24] == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x700,"tls_construct_stoc_cookie");
    func_0x00d06d50(uVar2,0x50,0x11f,0);
    return 0;
  }
  iVar3 = func_0x00bfae30(param_16,0x2c,0,2);
  if ((((((iVar3 != 0) && (iVar3 = func_0x00bfb0a0(uVar6,2), iVar3 != 0)) &&
        (iVar3 = func_0x00bfb0a0(uVar6,2), iVar3 != 0)) &&
       (((iVar3 = func_0x00bfab20(uVar6,&param_10), iVar3 != 0 &&
         (iVar3 = func_0x00bfaf10(uVar6,0x1076,&param_4), iVar3 != 0)) &&
        ((iVar3 = func_0x00bfae30(uVar6,1,0,2), iVar3 != 0 &&
         ((iVar3 = func_0x00bfae30(uVar6,0x304,0,2), iVar3 != 0 &&
          (iVar3 = func_0x00bfae30(uVar6,*(undefined2 *)(uVar2 + 0x35a),0,2), iVar3 != 0)))))))) &&
      (iVar3 = (**(code **)(*(int *)(uVar2 + 0xc) + 0x60))
                         (*(undefined4 *)(uVar2 + 0x234),uVar6,&param_13), iVar3 != 0)) &&
     (iVar3 = func_0x00bfae30(uVar6,*(int *)(uVar2 + 0x35c) == 0,0,1), iVar3 != 0)) {
    uVar5 = func_0x008aaff6(0);
    iVar3 = func_0x00bfae30(uVar6,uVar5,8);
    if (((iVar3 != 0) && (iVar3 = func_0x00bfb0a0(uVar6,2), iVar3 != 0)) &&
       (iVar3 = func_0x00bfaf10(uVar6,0x40,&stack0x00000000), iVar3 != 0)) {
      iVar3 = func_0x00d42750(uVar2,0);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = func_0x00d034c0(uVar2,unaff_retaddr,0x40,&param_6);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = func_0x00bfa8b0(uVar6,param_6,&param_7);
      if (((iVar3 != 0) && (unaff_retaddr == param_7)) &&
         ((iVar3 = func_0x00bfa920(uVar6), iVar3 != 0 &&
          ((iVar3 = func_0x00bfb0a0(uVar6,1), iVar3 != 0 &&
           (iVar3 = func_0x00bfaf10(uVar6,0x1000,&param_1), iVar3 != 0)))))) {
        iVar3 = (*(code *)puVar1[0x24])(uVar2,param_1,&param_8);
        if (iVar3 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x72e,"tls_construct_stoc_cookie");
          func_0x00d06d50(uVar2,0x50,400,0);
          return 0;
        }
        iVar3 = func_0x00bfa8b0(uVar6,param_8,&param_9);
        if ((((iVar3 == 0) || (param_1 != param_9)) || (iVar3 = func_0x00bfa920(uVar6), iVar3 == 0))
           || ((iVar3 = func_0x00bfab20(uVar6,&param_15), iVar3 == 0 ||
               (iVar3 = func_0x00bfaf10(uVar6,0x20,&param_3), iVar3 == 0)))) {
          FUN_00bc4f50();
          uVar6 = 0x737;
          goto LAB_00d44d94;
        }
        param_15 = param_15 - param_10;
        param_2 = 0x20;
        if (0x1056 < param_15) {
          FUN_00bc4f50();
          uVar6 = 0x73e;
          goto LAB_00d44d94;
        }
        iVar3 = func_0x00bd46b0();
        param_12 = func_0x00bd6c10(*puVar1,&DAT_010532a4,puVar1[0xa1],
                                   *(int *)(uVar2 + 0x8a0) + 0x1b8,0x20);
        if ((iVar3 == 0) || (param_12 == 0)) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x749,"tls_construct_stoc_cookie");
          uVar6 = 0x80006;
        }
        else {
          iVar4 = func_0x00c0c5e0(iVar3,0,"SHA2-256",*puVar1,puVar1[0xa1],param_12,0);
          if ((iVar4 < 1) ||
             (iVar4 = func_0x00c0c0b0(iVar3,param_3,&param_2,param_4,param_15), iVar4 < 1)) {
            FUN_00bc4f50();
            uVar6 = 0x751;
          }
          else if (param_15 + param_2 < 0x1077) {
            iVar4 = func_0x00bfa8b0(uVar6,param_2,&param_11);
            if ((((iVar4 != 0) && (param_3 == param_11)) && (param_4 == param_3 - param_15)) &&
               ((iVar4 = func_0x00bfa920(uVar6), iVar4 != 0 &&
                (iVar4 = func_0x00bfa920(uVar6), iVar4 != 0)))) {
              param_5 = 1;
              goto LAB_00d44d45;
            }
            FUN_00bc4f50();
            uVar6 = 0x75f;
          }
          else {
            FUN_00bc4f50();
            uVar6 = 0x756;
          }
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar6,"tls_construct_stoc_cookie");
          uVar6 = 0xc0103;
        }
        func_0x00d06d50(uVar2,0x50,uVar6,0);
LAB_00d44d45:
        func_0x00bd45b0(iVar3);
        func_0x00bd5d50(param_12);
        return param_5;
      }
      FUN_00bc4f50();
      uVar6 = 0x727;
      goto LAB_00d44d94;
    }
  }
  FUN_00bc4f50();
  uVar6 = 0x713;
LAB_00d44d94:
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar6,"tls_construct_stoc_cookie");
  func_0x00d06d50(uVar2,0x50,0xc0103,0);
  return 0;
}



void FUN_00d44dc0(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  func_0x00e87f70();
  uVar1 = *(uint *)(*(int *)(in_stack_0000002c + 0x234) + 0xc) & 0xffff;
  if ((uVar1 == 0x80) || (uVar1 == 0x81)) {
    uVar1 = func_0x00d00790(in_stack_0000002c);
    if ((uVar1 & 0x80000000) != 0) {
      iVar2 = func_0x00bfad90(in_stack_00000030,&stack0x00000000,0x24);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x782,"tls_construct_stoc_cryptopro_bug");
        func_0x00d06d50(in_stack_0000002c,0x50,0xc0103,0);
        FUN_008ab370();
        return;
      }
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00d44ee0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0x2000) {
    if (*(int *)(param_1 + 0xe84) == 0) {
      return 2;
    }
    iVar1 = func_0x00bfae30(param_2,0x2a,0,2);
    if (((iVar1 != 0) && (iVar1 = func_0x00bfb0a0(param_2,2), iVar1 != 0)) &&
       ((iVar1 = func_0x00bfae30(param_2,*(undefined4 *)(param_1 + 0xe84),0,4), iVar1 != 0 &&
        (iVar1 = func_0x00bfa920(param_2), iVar1 != 0)))) {
      return 1;
    }
    FUN_00bc4f50();
    uVar2 = 0x795;
  }
  else {
    if (*(int *)(param_1 + 0x854) != 2) {
      return 2;
    }
    iVar1 = func_0x00bfae30(param_2,0x2a,0,2);
    if (((iVar1 != 0) && (iVar1 = func_0x00bfb0a0(param_2,2), iVar1 != 0)) &&
       (iVar1 = func_0x00bfa920(param_2), iVar1 != 0)) {
      return 1;
    }
    FUN_00bc4f50();
    uVar2 = 0x7a2;
  }
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar2,"tls_construct_stoc_early_data");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d44fd0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  iVar1 = param_2;
  if ((((*(byte *)(*(int *)(param_2 + 0x234) + 0x10) & 4) != 0) ||
      ((*(byte *)(*(int *)(param_2 + 0x234) + 0x14) & 8) != 0)) && (*(int *)(param_2 + 0x814) != 0))
  {
    func_0x00d150e0(param_2,&stack0x00000000,&param_2);
    uVar2 = param_3;
    iVar3 = func_0x00bfae30(param_3,0xb,0,2);
    if (iVar3 != 0) {
      iVar3 = func_0x00bfb0a0(uVar2,2);
      if (iVar3 != 0) {
        iVar3 = func_0x00bfb180(uVar2,unaff_retaddr,param_2,1);
        if (iVar3 != 0) {
          iVar3 = func_0x00bfa920(uVar2);
          if (iVar3 != 0) {
            return 1;
          }
        }
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x55e,"tls_construct_stoc_ec_pt_formats");
    func_0x00d06d50(iVar1,0x50,0xc0103,0);
    return 0;
  }
  return 2;
}



undefined4 FUN_00d450a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xb4) & 0x200) == 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0x17,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfae30(param_2,0,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x64b,"tls_construct_stoc_ems");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d45120(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x850) != 0) {
    if ((((*(int *)(*(int *)(param_1 + 0x234) + 0x1c) != 0x40) &&
         (iVar1 = *(int *)(*(int *)(param_1 + 0x234) + 0x18), iVar1 != 4)) && (iVar1 != 0x400)) &&
       (((iVar1 != 0x40000 && (iVar1 != 0x400000)) && (iVar1 != 0x800000)))) {
      iVar1 = func_0x00bfae30(param_2,0x16,0,2);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfae30(param_2,0,0,2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x63b,"tls_construct_stoc_etm");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x850) = 0;
  }
  return 2;
}



undefined4 FUN_00d451e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  undefined4 uVar5;
  
  func_0x00e87f70();
  uVar5 = param_4;
  iVar1 = param_3;
  iVar2 = *(int *)(param_3 + 0x35c);
  if (*(int *)(param_3 + 0x6f4) == 1) {
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = func_0x00bfae30(param_4,0x33,0,2);
    if ((((iVar2 != 0) && (iVar2 = func_0x00bfb0a0(uVar5,2), iVar2 != 0)) &&
        (iVar2 = func_0x00bfae30(uVar5,*(undefined2 *)(iVar1 + 0x35a),0,2), iVar2 != 0)) &&
       (iVar2 = func_0x00bfa920(uVar5), iVar2 != 0)) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x679,"tls_construct_stoc_key_share");
    func_0x00d06d50(iVar1,0x50,0xc0103,0);
    return 0;
  }
  if (iVar2 == 0) {
    if ((*(int *)(param_3 + 0x36c) != 0) && (iVar2 = func_0x00d1bf80(param_3,0,0), iVar2 != 0)) {
      return 2;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x683,"tls_construct_stoc_key_share");
    func_0x00d06d50(iVar1,0x50,0xc0103,0);
    return 0;
  }
  if ((*(int *)(param_3 + 0x36c) != 0) && ((*(byte *)(param_3 + 0x84c) & 2) == 0)) {
    return 2;
  }
  iVar3 = func_0x00bfae30(param_4,0x33,0,2);
  if (((iVar3 == 0) || (iVar3 = func_0x00bfb0a0(uVar5,2), iVar3 == 0)) ||
     (iVar3 = func_0x00bfae30(uVar5,*(undefined2 *)(iVar1 + 0x35a),0,2), iVar3 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x696,"tls_construct_stoc_key_share");
    func_0x00d06d50(iVar1,0x50,0xc0103,0);
    return 0;
  }
  iVar3 = func_0x00d15430(*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 0x35a));
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x69c,"tls_construct_stoc_key_share");
    func_0x00d06d50(iVar1,0x50,0xc0103,0);
    return 0;
  }
  if (*(char *)(iVar3 + 0x24) == '\0') {
    iVar3 = func_0x00d27d80(iVar1,iVar2);
    if (iVar3 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x6a4,"tls_construct_stoc_key_share");
      func_0x00d06d50(iVar1,0x50,0x80014,0);
      return 0;
    }
    iVar4 = func_0x00bd5f00(iVar3,&stack0x00000000);
    if (iVar4 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x6ab,"tls_construct_stoc_key_share");
      func_0x00d06d50(iVar1,0x50,0x80010,0);
      func_0x00bd5d50(iVar3);
      return 0;
    }
    iVar4 = func_0x00bfb180(uVar5,unaff_retaddr,iVar4,2);
    if ((iVar4 == 0) || (iVar4 = func_0x00bfa920(uVar5), iVar4 == 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x6b2,"tls_construct_stoc_key_share");
      func_0x00d06d50(iVar1,0x50,0xc0103,0);
      func_0x00bd5d50(iVar3);
      FUN_00bbc580(unaff_retaddr,"ssl\\statem\\extensions_srvr.c",0x6b4);
      return 0;
    }
    FUN_00bbc580(unaff_retaddr,"ssl\\statem\\extensions_srvr.c",0x6b7);
    *(int *)(iVar1 + 0x238) = iVar3;
    iVar2 = func_0x00d27620(iVar1,iVar3,iVar2,1);
LAB_00d4557c:
    if (iVar2 != 0) {
      *(undefined1 *)(iVar1 + 0x359) = 1;
      return 1;
    }
  }
  else {
    param_3 = 0;
    param_1 = 0;
    iVar2 = func_0x00d27810(iVar1,iVar2,&param_3,&param_1,0);
    if (iVar2 == 0) {
      return 0;
    }
    if (param_1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x6d2,"tls_construct_stoc_key_share");
      func_0x00d06d50(iVar1,0x50,0xc0103,0);
      uVar5 = 0x6d3;
    }
    else {
      iVar2 = func_0x00bfb180(uVar5,param_3,param_1,2);
      if ((iVar2 != 0) && (iVar2 = func_0x00bfa920(uVar5), iVar2 != 0)) {
        FUN_00bbc580(param_3,"ssl\\statem\\extensions_srvr.c",0x6dd);
        iVar2 = func_0x00d27fb0(iVar1,*(undefined4 *)(iVar1 + 0x274),*(undefined4 *)(iVar1 + 0x278))
        ;
        goto LAB_00d4557c;
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x6d9,"tls_construct_stoc_key_share");
      func_0x00d06d50(iVar1,0x50,0xc0103,0);
      uVar5 = 0x6da;
    }
    FUN_00bbc580(param_3,"ssl\\statem\\extensions_srvr.c",uVar5);
  }
  return 0;
}



undefined4 FUN_00d45610(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (3 < (byte)(*(char *)(*(int *)(param_1 + 0x71c) + 0x300) - 1U)) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,1,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfae30(param_2,*(undefined1 *)(*(int *)(param_1 + 0x71c) + 0x300),0,1);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfa920(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x544,"tls_construct_stoc_maxfragmentlen");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d456c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  iVar2 = param_2;
  iVar3 = *(int *)(param_2 + 0x340);
  *(undefined4 *)(param_2 + 0x340) = 0;
  if ((iVar3 != 0) && (pcVar1 = *(code **)(*(int *)(param_2 + 4) + 0x1a8), pcVar1 != (code *)0x0)) {
    iVar3 = (*pcVar1)(param_2,&stack0x00000000,&param_2,
                      *(undefined4 *)(*(int *)(param_2 + 4) + 0x1ac));
    if (iVar3 == 0) {
      iVar3 = func_0x00bfae30(param_3,0x3374,0,2);
      if (iVar3 != 0) {
        iVar3 = func_0x00bfb180(param_3,unaff_retaddr,param_2,2);
        if (iVar3 != 0) {
          *(undefined4 *)(iVar2 + 0x340) = 1;
          return 1;
        }
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x5ee,"tls_construct_stoc_next_proto_neg");
      func_0x00d06d50(iVar2,0x50,0xc0103,0);
      return 0;
    }
  }
  return 2;
}



undefined4 FUN_00d45790(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x36c) == 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0x29,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfae30(param_2,*(int *)(param_1 + 0x86c),*(int *)(param_1 + 0x86c) >> 0x1f,2)
      ;
      if (iVar1 != 0) {
        iVar1 = func_0x00bfa920(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x7b4,"tls_construct_stoc_psk");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d45830(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x33c) == 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0xff01,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb0a0(param_2,1);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfad90(param_2,param_1 + 0x2b4,*(undefined4 *)(param_1 + 0x2f4));
        if (iVar1 != 0) {
          iVar1 = func_0x00bfad90(param_2,param_1 + 0x2f8,*(undefined4 *)(param_1 + 0x338));
          if (iVar1 != 0) {
            iVar1 = func_0x00bfa920(param_2);
            if (iVar1 != 0) {
              iVar1 = func_0x00bfa920(param_2);
              if (iVar1 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x516,"tls_construct_stoc_renegotiate");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d45910(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x886) == '\0') {
    *(undefined1 *)(param_1 + 0x887) = 0;
    return 2;
  }
  if ((*(char *)(param_1 + 0x887) == '\x01') && (*(int *)(param_1 + 0xec0) != 0)) {
    iVar1 = func_0x00bfae30(param_2,0x14,0,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb0a0(param_2,2);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfae30(param_2,*(undefined1 *)(param_1 + 0x886),0,1);
        if (iVar1 != 0) {
          iVar1 = func_0x00bfa920(param_2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x82e,"tls_construct_stoc_server_cert_type");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  *(undefined2 *)(param_1 + 0x886) = 0;
  return 2;
}



undefined4 FUN_00d459e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x88c) == 1) &&
     ((*(int *)(param_1 + 0x36c) == 0 ||
      ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0 &&
        (iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1)) && (iVar1 != 0x10000)))))) {
    iVar1 = func_0x00bfae30(param_2,0,0,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfae30(param_2,0,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x52d,"tls_construct_stoc_server_name");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  return 2;
}



undefined4 FUN_00d45a80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x800) != 0) {
    iVar1 = func_0x00d16ec0(param_1);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfae30(param_2,0x23,0,2);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfae30(param_2,0,0,2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x5ac,"tls_construct_stoc_session_ticket");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x800) = 0;
  return 2;
}



undefined4 FUN_00d45b10(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_3 == 0x4000) || (*(int *)(param_1 + 0x7ec) == 0)) ||
     (((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0 &&
      (((iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1 && (iVar1 != 0x10000)) && (param_5 != 0)))
      ))) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,5,0,2);
  if ((iVar1 == 0) || (iVar1 = func_0x00bfb0a0(param_2,2), iVar1 == 0)) {
    FUN_00bc4f50();
    uVar2 = 0x5c4;
  }
  else {
    if ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1)) &&
       ((iVar1 != 0x10000 && (iVar1 = FUN_00d1e930(param_1,param_2), iVar1 == 0)))) {
      return 0;
    }
    iVar1 = func_0x00bfa920(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_00bc4f50();
    uVar2 = 0x5d2;
  }
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar2,"tls_construct_stoc_status_request");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4
FUN_00d45c10(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  func_0x00e87f70();
  uVar3 = param_5;
  bVar2 = true;
  if (*(short *)(param_5 + 0x35a) == 0) {
    return 2;
  }
  func_0x00d15350(param_5,&param_1,&param_5);
  if (param_5 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x574,"tls_construct_stoc_supported_groups");
    func_0x00d06d50(uVar3,0x50,0xc0103,0);
    return 0;
  }
  param_3 = func_0x00d01330(uVar3);
  uVar4 = param_6;
  uVar7 = 0;
  if (param_5 != 0) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar7 * 2);
      uVar6 = (uint)uVar1;
      param_2 = uVar6;
      iVar5 = func_0x00d16ef0(uVar3,uVar6,param_3,param_3,0,0);
      if ((iVar5 != 0) && (iVar5 = func_0x00d16e30(uVar3,uVar6,0x20004), iVar5 != 0)) {
        if (bVar2) {
          if (*(ushort *)(uVar3 + 0x35a) == uVar1) {
            return 2;
          }
          iVar5 = func_0x00bfae30(uVar4,10,0,2);
          if (((iVar5 == 0) || (iVar5 = func_0x00bfb0a0(uVar4,2), iVar5 == 0)) ||
             (iVar5 = func_0x00bfb0a0(uVar4,2), iVar5 == 0)) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x58c,
                            "tls_construct_stoc_supported_groups");
            func_0x00d06d50(uVar3,0x50,0xc0103,0);
            return 0;
          }
          bVar2 = false;
        }
        iVar5 = func_0x00bfae30(uVar4,param_2 & 0xffff,0,2);
        if (iVar5 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x593,
                          "tls_construct_stoc_supported_groups");
          func_0x00d06d50(uVar3,0x50,0xc0103,0);
          return 0;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_5);
  }
  iVar5 = func_0x00bfa920(uVar4);
  if ((iVar5 != 0) && (iVar5 = func_0x00bfa920(uVar4), iVar5 != 0)) {
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x59a,"tls_construct_stoc_supported_groups");
  func_0x00d06d50(uVar3,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d45e30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    iVar1 = func_0x00bfae30(param_2,0x2b,0,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb0a0(param_2,2);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfae30(param_2,*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x20) >> 0x1f,2)
        ;
        if (iVar1 != 0) {
          iVar1 = func_0x00bfa920(param_2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x65f,"tls_construct_stoc_supported_versions");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x657,"tls_construct_stoc_supported_versions");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d45f10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8a8) == 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0xe,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfae30(param_2,2,0,2);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfae30(param_2,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + 4),0,2);
        if (iVar1 != 0) {
          iVar1 = func_0x00bfae30(param_2,0,0,1);
          if (iVar1 != 0) {
            iVar1 = func_0x00bfa920(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x61c,"tls_construct_stoc_use_srtp");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d45fe0(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 uVar7;
  
  func_0x00e87f70();
  if ((*(int *)(in_stack_00000014 + 0x1a4) != 0) && (*(int *)(in_stack_00000014 + 0x228) != 0)) {
    return 1;
  }
  puVar2 = (undefined1 *)*in_stack_00000018;
  if (1 < (uint)in_stack_00000018[1]) {
    uVar5 = in_stack_00000018[1] - 2;
    pbVar6 = puVar2 + 2;
    uVar3 = (uint)CONCAT11(*puVar2,puVar2[1]);
    if (uVar3 <= uVar5) {
      if (uVar5 == uVar3) {
        *in_stack_00000018 = pbVar6 + uVar3;
        in_stack_00000018[1] = 0;
        if (1 < uVar3) {
          if (uVar3 != 0) {
            while( true ) {
              uVar5 = (uint)*pbVar6;
              if (uVar3 - 1 < uVar5) break;
              pbVar6 = pbVar6 + uVar5 + 1;
              uVar3 = (uVar3 - 1) - uVar5;
              if (uVar5 == 0) break;
              if (uVar3 == 0) {
                puVar1 = (undefined4 *)(in_stack_00000014 + 0x34c);
                FUN_00bbc580(*puVar1,"ssl\\statem\\extensions_srvr.c",0x1d2);
                *puVar1 = 0;
                *(undefined4 *)(in_stack_00000014 + 0x350) = 0;
                iVar4 = func_0x00d2ce30(&stack0x00000000,puVar1,
                                        (undefined4 *)(in_stack_00000014 + 0x350));
                if (iVar4 == 0) {
                  FUN_00bc4f50();
                  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x1d7,"tls_parse_ctos_alpn");
                  func_0x00d06d50(in_stack_00000014,0x50,0xc0103,0);
                  return 0;
                }
                return 1;
              }
            }
          }
          FUN_00bc4f50();
          uVar7 = 0x1cd;
          goto LAB_00d46124;
        }
      }
    }
  }
  FUN_00bc4f50();
  uVar7 = 0x1c4;
LAB_00d46124:
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar7,"tls_parse_ctos_alpn");
  func_0x00d06d50(in_stack_00000014,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d46150(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  if (*(int *)(param_3 + 0xeb8) == 0) {
    *(undefined2 *)(param_3 + 0x884) = 0;
    return 1;
  }
  if (param_4[1] != 0) {
    uVar3 = (uint)*(byte *)*param_4;
    uVar2 = param_4[1] - 1;
    pbVar4 = (byte *)*param_4 + 1;
    if (uVar3 <= uVar2) {
      if (uVar2 == uVar3) {
        *param_4 = pbVar4 + uVar3;
        param_4[1] = 0;
        if (uVar3 != 0) {
          uVar1 = func_0x00d44650(pbVar4,uVar3,*(undefined4 *)(param_3 + 0xeb8),
                                  *(undefined4 *)(param_3 + 0xebc),param_3 + 0x884);
          *(undefined1 *)(param_3 + 0x885) = uVar1;
          return 1;
        }
        *(undefined1 *)(param_3 + 0x885) = 2;
        FUN_00bc4f50();
        uVar5 = 0x809;
        goto LAB_00d46201;
      }
    }
  }
  *(undefined1 *)(param_3 + 0x885) = 2;
  FUN_00bc4f50();
  uVar5 = 0x804;
LAB_00d46201:
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar5,"tls_parse_ctos_client_cert_type");
  func_0x00d06d50(param_3,0x32,0x6e,0);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00d464b4)
// WARNING: Removing unreachable block (ram,0x00d464ca)
// WARNING: Removing unreachable block (ram,0x00d464fc)
// WARNING: Removing unreachable block (ram,0x00d46513)
// WARNING: Removing unreachable block (ram,0x00d46545)
// WARNING: Removing unreachable block (ram,0x00d46556)
// WARNING: Removing unreachable block (ram,0x00d46570)
// WARNING: Removing unreachable block (ram,0x00d4658a)
// WARNING: Removing unreachable block (ram,0x00d46595)
// WARNING: Removing unreachable block (ram,0x00d46637)
// WARNING: Removing unreachable block (ram,0x00d46651)
// WARNING: Removing unreachable block (ram,0x00d4665c)
// WARNING: Removing unreachable block (ram,0x00d4666e)
// WARNING: Removing unreachable block (ram,0x00d46670)
// WARNING: Removing unreachable block (ram,0x00d46678)
// WARNING: Removing unreachable block (ram,0x00d46682)
// WARNING: Removing unreachable block (ram,0x00d46684)
// WARNING: Removing unreachable block (ram,0x00d4668f)
// WARNING: Removing unreachable block (ram,0x00d466a7)
// WARNING: Removing unreachable block (ram,0x00d466d9)
// WARNING: Removing unreachable block (ram,0x00d466f9)
// WARNING: Removing unreachable block (ram,0x00d4672b)
// WARNING: Removing unreachable block (ram,0x00d46746)
// WARNING: Removing unreachable block (ram,0x00d4675d)
// WARNING: Removing unreachable block (ram,0x00d4677b)
// WARNING: Removing unreachable block (ram,0x00d46797)
// WARNING: Removing unreachable block (ram,0x00d467bb)
// WARNING: Removing unreachable block (ram,0x00d467de)
// WARNING: Removing unreachable block (ram,0x00d467f9)
// WARNING: Removing unreachable block (ram,0x00d46810)
// WARNING: Removing unreachable block (ram,0x00d4682b)
// WARNING: Removing unreachable block (ram,0x00d46842)
// WARNING: Removing unreachable block (ram,0x00d4685f)
// WARNING: Removing unreachable block (ram,0x00d46874)
// WARNING: Removing unreachable block (ram,0x00d4687f)
// WARNING: Removing unreachable block (ram,0x00d46896)
// WARNING: Removing unreachable block (ram,0x00d468a9)
// WARNING: Removing unreachable block (ram,0x00d468c6)
// WARNING: Removing unreachable block (ram,0x00d46913)
// WARNING: Removing unreachable block (ram,0x00d4692e)
// WARNING: Removing unreachable block (ram,0x00d46945)
// WARNING: Removing unreachable block (ram,0x00d46964)
// WARNING: Removing unreachable block (ram,0x00d46979)
// WARNING: Removing unreachable block (ram,0x00d4698e)
// WARNING: Removing unreachable block (ram,0x00d4699f)
// WARNING: Removing unreachable block (ram,0x00d469b5)
// WARNING: Removing unreachable block (ram,0x00d469c6)
// WARNING: Removing unreachable block (ram,0x00d469eb)
// WARNING: Removing unreachable block (ram,0x00d46a1d)
// WARNING: Removing unreachable block (ram,0x00d468d7)
// WARNING: Removing unreachable block (ram,0x00d46a56)
// WARNING: Removing unreachable block (ram,0x00d46a92)
// WARNING: Removing unreachable block (ram,0x00d46ace)
// WARNING: Removing unreachable block (ram,0x00d46b00)

void FUN_00d46230(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000028;
  int in_stack_0000002c;
  uint in_stack_00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  undefined4 in_stack_00000044;
  int in_stack_00001140;
  undefined4 in_stack_00001144;
  
  func_0x00e87f70();
  puVar1 = *(undefined4 **)(in_stack_00001140 + 4);
  if ((puVar1[0x25] != 0) && ((*(uint *)(in_stack_00001140 + 0xb4) & 0x800) != 0)) {
    iVar2 = func_0x00d2cd70(in_stack_00001144,&param_1);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x2ea,"tls_parse_ctos_cookie");
      func_0x00d06d50(in_stack_00001140,0x32,0x9f,0);
    }
    else {
      in_stack_0000002c = param_1;
      in_stack_00000040 = param_2;
      in_stack_00000038 = param_1;
      in_stack_0000003c = param_2;
      if ((param_2 < 0x20) || (in_stack_00000030 = param_2 - 0x20, param_2 < in_stack_00000030)) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x2f3,"tls_parse_ctos_cookie");
        func_0x00d06d50(in_stack_00001140,0x32,0x9f,0);
      }
      else {
        iVar2 = in_stack_00000030 + param_1;
        iVar3 = func_0x00bd46b0();
        iVar4 = func_0x00bd6c10(*puVar1,&DAT_010532a4,puVar1[0xa1],
                                *(int *)(in_stack_00001140 + 0x8a0) + 0x1b8,0x20);
        if ((iVar3 == 0) || (iVar4 == 0)) {
          func_0x00bd45b0(iVar3);
          func_0x00bd5d50(iVar4);
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x301,"tls_parse_ctos_cookie");
          func_0x00d06d50(in_stack_00001140,0x50,0x80006,0);
        }
        else {
          in_stack_00000028 = 0x20;
          iVar5 = func_0x00c0c5e0(iVar3,0,"SHA2-256",*puVar1,puVar1[0xa1],iVar4,0);
          if (((iVar5 < 1) ||
              (iVar5 = func_0x00c0c0b0(iVar3,&stack0x0000004c,&stack0x00000028,in_stack_0000002c,
                                       in_stack_00000030), iVar5 < 1)) ||
             (in_stack_00000028 != 0x20)) {
            func_0x00bd45b0(iVar3);
            func_0x00bd5d50(iVar4);
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x30d,"tls_parse_ctos_cookie");
            func_0x00d06d50(in_stack_00001140,0x50,0xc0103,0);
          }
          else {
            func_0x00bd45b0(iVar3);
            func_0x00bd5d50(iVar4);
            iVar3 = func_0x00401390(&stack0x0000004c,iVar2,0x20);
            if (iVar3 == 0) {
              iVar3 = func_0x00d170e0(&param_1,&stack0x00000000);
              if (iVar3 == 0) {
                FUN_00bc4f50();
                func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x31a,"tls_parse_ctos_cookie");
                func_0x00d06d50(in_stack_00001140,0x32,0x9f,0);
              }
              else if (iVar2 == 1) {
                iVar2 = func_0x00d170e0(&param_1,&stack0x00000000);
                if (iVar2 == 0) {
                  FUN_00bc4f50();
                  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x328,"tls_parse_ctos_cookie");
                  func_0x00d06d50(in_stack_00001140,0x32,0x9f,0);
                }
                else {
                  FUN_00bc4f50();
                  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x32d,"tls_parse_ctos_cookie");
                  func_0x00d06d50(in_stack_00001140,0x2f,0x74,0);
                }
              }
            }
            else {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x315,"tls_parse_ctos_cookie");
              func_0x00d06d50(in_stack_00001140,0x2f,0x134,0);
            }
          }
        }
      }
    }
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00d46be0(int param_1,int param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x3d8,"tls_parse_ctos_early_data");
    func_0x00d06d50(param_1,0x32,0x6e,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x6f4) != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x3dd,"tls_parse_ctos_early_data");
    func_0x00d06d50(param_1,0x2f,0x6e,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00d46c60(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  func_0x00e87f70();
  if (param_4[1] != 0) {
    uVar3 = (uint)*(byte *)*param_4;
    uVar1 = param_4[1] - 1;
    if (uVar3 <= uVar1) {
      if (uVar1 == uVar3) {
        *param_4 = (byte *)*param_4 + uVar3 + 1;
        param_4[1] = 0;
        if (uVar3 != 0) {
          if (*(int *)(param_3 + 0x36c) == 0) {
            iVar2 = func_0x00d2ce30(&stack0x00000000,param_3 + 0x814,param_3 + 0x810);
            if (iVar2 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0xff,"tls_parse_ctos_ec_pt_formats");
              func_0x00d06d50(param_3,0x50,0xc0103,0);
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0xf7,"tls_parse_ctos_ec_pt_formats");
  func_0x00d06d50(param_3,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d46d50(int param_1,int param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x3c7,"tls_parse_ctos_ems");
    func_0x00d06d50(param_1,0x32,0x6e,0);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x788) & 1) == 0) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x200;
  }
  return 1;
}



void FUN_00d46db0(int param_1)

{
  if ((*(uint *)(param_1 + 0x788) & 0x80000) == 0) {
    *(undefined4 *)(param_1 + 0x850) = 1;
  }
  return;
}



undefined4
FUN_00d46dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined1 *param_6,undefined4 param_7,undefined4 param_8,
            undefined1 *param_9,undefined4 *param_10)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  
  func_0x00e87f70();
  puVar5 = param_9;
  bVar4 = false;
  if ((*(int *)(param_9 + 0x36c) != 0) && ((param_9[0x84c] & 2) == 0)) {
    return 1;
  }
  if (*(int *)(param_9 + 0x35c) != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x26c,"tls_parse_ctos_key_share");
    func_0x00d06d50(puVar5,0x50,0xc0103,0);
    return 0;
  }
  param_6 = (undefined1 *)*param_10;
  if (1 < (uint)param_10[1]) {
    uVar7 = param_10[1] - 2;
    uVar10 = (uint)CONCAT11(*param_6,param_6[1]);
    puVar8 = param_6 + 2;
    if ((uVar10 <= uVar7) && (uVar7 == uVar10)) {
      *param_10 = puVar8 + uVar10;
      param_10[1] = 0;
      func_0x00d15350(param_9,&param_4,&param_3);
      iVar3 = *(int *)(puVar5 + 0x820);
      uVar11 = *(undefined4 *)(puVar5 + 0x824);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x280,"tls_parse_ctos_key_share");
        func_0x00d06d50(puVar5,0x6d,0xd1,0);
        return 0;
      }
      if (*(short *)(puVar5 + 0x35a) == 0) {
        if (uVar10 == 0) {
          return 1;
        }
      }
      else if (uVar10 == 0) {
        FUN_00bc4f50();
        uVar11 = 0x28a;
LAB_00d46efe:
        func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar11,"tls_parse_ctos_key_share");
        uVar11 = 0x6c;
LAB_00d46f0c:
        func_0x00d06d50(puVar5,0x2f,uVar11,0);
        return 0;
      }
      do {
        puVar9 = param_6;
        if (uVar10 < 2) {
LAB_00d470f7:
          param_6 = puVar9;
          FUN_00bc4f50();
          uVar11 = 0x292;
          goto LAB_00d47117;
        }
        uVar1 = *puVar8;
        uVar2 = puVar8[1];
        puVar9 = puVar8 + 2;
        uVar7 = (uint)CONCAT11(uVar1,uVar2);
        if (uVar10 - 2 < 2) goto LAB_00d470f7;
        param_6 = puVar8 + 4;
        param_5 = (uint)CONCAT11(*puVar9,puVar8[3]);
        if (uVar10 - 4 < param_5) goto LAB_00d470f7;
        uVar10 = (uVar10 - 4) - param_5;
        param_9 = param_6 + param_5;
        puVar9 = param_6;
        if (param_5 == 0) goto LAB_00d470f7;
        if (!bVar4) {
          if ((*(ushort *)(puVar5 + 0x35a) != 0) &&
             ((uVar7 != *(ushort *)(puVar5 + 0x35a) || (uVar10 != 0)))) {
            FUN_00bc4f50();
            uVar11 = 0x2a4;
            goto LAB_00d46efe;
          }
          iVar6 = func_0x00d17210(puVar5,uVar7,uVar11,iVar3,0);
          if (iVar6 == 0) {
            FUN_00bc4f50();
            uVar11 = 0x2aa;
            goto LAB_00d46efe;
          }
          iVar6 = func_0x00d17210(puVar5,uVar7,param_4,param_3,1);
          if (((iVar6 != 0) && (iVar6 = func_0x00d16e30(puVar5,uVar7,0x20004), iVar6 != 0)) &&
             (iVar6 = func_0x00d16ef0(puVar5,uVar7,0x304,0x304,0,0), iVar6 != 0)) {
            *(ushort *)(puVar5 + 0x35a) = CONCAT11(uVar1,uVar2);
            *(uint *)(*(int *)(puVar5 + 0x71c) + 0x2d4) = uVar7;
            iVar6 = func_0x00d27ca0(puVar5,uVar7);
            *(int *)(puVar5 + 0x35c) = iVar6;
            if (iVar6 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x2c1,"tls_parse_ctos_key_share");
              func_0x00d06d50(puVar5,0x50,0x13a,0);
              return 0;
            }
            iVar6 = func_0x00d14520(iVar6,param_6,param_5);
            if (iVar6 < 1) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x2c8,"tls_parse_ctos_key_share");
              uVar11 = 0x132;
              goto LAB_00d46f0c;
            }
            bVar4 = true;
          }
        }
        puVar8 = param_9;
        if (uVar10 == 0) {
          return 1;
        }
      } while( true );
    }
  }
  FUN_00bc4f50();
  uVar11 = 0x271;
LAB_00d47117:
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar11,"tls_parse_ctos_key_share");
  func_0x00d06d50(puVar5,0x32,0x9f,0);
  return 0;
}



undefined4 FUN_00d47140(int param_1,undefined4 *param_2)

{
  byte bVar1;
  
  if (param_2[1] != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0xb7,"tls_parse_ctos_maxfragmentlen");
    func_0x00d06d50(param_1,0x32,0x6e,0);
    return 0;
  }
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  param_2[1] = 0;
  if (bVar1 - 1 < 4) {
    if (*(char *)(*(int *)(param_1 + 0x71c) + 0x300) == -1) {
      *(byte *)(*(int *)(param_1 + 0x71c) + 0x300) = bVar1;
    }
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0xbe,"tls_parse_ctos_maxfragmentlen");
  func_0x00d06d50(param_1,0x2f,0xe8,0);
  return 0;
}



undefined4 FUN_00d471f0(int param_1)

{
  if ((*(int *)(param_1 + 0x1a4) == 0) || (*(int *)(param_1 + 0x228) == 0)) {
    *(undefined4 *)(param_1 + 0x340) = 1;
  }
  return 1;
}



undefined4 FUN_00d47220(int param_1,int param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x4f9,"tls_parse_ctos_post_handshake_auth");
    func_0x00d06d50(param_1,0x32,0x116,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x8b4) = 2;
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00d476d2)
// WARNING: Removing unreachable block (ram,0x00d4774b)
// WARNING: Removing unreachable block (ram,0x00d4760a)
// WARNING: Removing unreachable block (ram,0x00d47652)
// WARNING: Removing unreachable block (ram,0x00d476ac)
// WARNING: Removing unreachable block (ram,0x00d476be)

void FUN_00d47270(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iStack00000004;
  uint uStack00000014;
  undefined2 in_stack_0000001c;
  undefined1 *in_stack_00000020;
  int *in_stack_00000028;
  undefined4 in_stack_0000002c;
  byte *in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_00000244;
  int *in_stack_00000248;
  undefined4 uVar21;
  undefined4 uVar22;
  
  func_0x00e87f70();
  iVar11 = 0;
  in_stack_0000002c = 0;
  iStack00000004 = 0;
  in_stack_00000030 = *(byte **)(in_stack_00000244 + 4);
  iVar20 = 0;
  puVar16 = in_stack_00000020;
  if ((*(byte *)(in_stack_00000244 + 0x84c) & 3) == 0) goto LAB_00d47a5f;
  puVar16 = (undefined1 *)*in_stack_00000248;
  if (1 < (uint)in_stack_00000248[1]) {
    puVar18 = (undefined1 *)(in_stack_00000248[1] - 2);
    in_stack_00000020 = (undefined1 *)(uint)CONCAT11(*puVar16,puVar16[1]);
    puVar15 = puVar16 + 2;
    if (in_stack_00000020 <= puVar18) {
      uStack00000014 = 0;
      *in_stack_00000248 = (int)(puVar15 + (int)in_stack_00000020);
      in_stack_00000248[1] = (int)puVar18 - (int)in_stack_00000020;
      *(undefined4 *)(in_stack_00000244 + 0x800) = 0;
      in_stack_00000028 = in_stack_00000248;
      in_stack_00000038 = in_stack_00000244;
      if (in_stack_00000020 == (undefined1 *)0x0) goto LAB_00d47a5f;
      do {
        if (in_stack_00000020 < (undefined1 *)0x2) {
LAB_00d47ad8:
          in_stack_00000020 = puVar15;
          FUN_00bc4f50();
          uVar22 = 0x421;
          goto LAB_00d47af8;
        }
        puVar16 = puVar15 + 2;
        puVar18 = (undefined1 *)(uint)CONCAT11(*puVar15,puVar15[1]);
        if (in_stack_00000020 + -2 < puVar18) goto LAB_00d47ad8;
        uVar14 = (int)(in_stack_00000020 + -2) - (int)puVar18;
        puVar17 = puVar16 + (int)puVar18;
        if (uVar14 < 4) goto LAB_00d47ad8;
        in_stack_00000020 = (undefined1 *)(uVar14 - 4);
        uVar1 = puVar17[1];
        uVar2 = *puVar17;
        uVar3 = puVar17[2];
        puVar15 = puVar17 + 4;
        uVar4 = puVar17[3];
        if ((*(code **)(in_stack_00000244 + 0x770) != (code *)0x0) &&
           (iVar8 = (**(code **)(in_stack_00000244 + 0x770))
                              (in_stack_00000244,puVar16,puVar18,&stack0x00000000), iVar11 = iVar20,
           iVar8 == 0)) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x429,"tls_parse_ctos_psk");
          func_0x00d06d50(in_stack_00000244,0x50,0x6e,0);
          puVar16 = in_stack_00000020;
          goto LAB_00d47a5f;
        }
        if (iVar11 != 0) {
LAB_00d4775b:
          iVar11 = func_0x00d09000(iVar11,0);
          if (iVar11 == 0) {
            FUN_00bc4f50();
            uVar22 = 0x463;
          }
          else {
            FUN_00d07ed0(iVar20);
            memcpy((void *)(iVar11 + 0x270),(void *)(in_stack_00000244 + 0x6fc),
                   *(size_t *)(in_stack_00000244 + 0x6f8));
            in_stack_0000002c = 1;
            *(undefined4 *)(iVar11 + 0x26c) = *(undefined4 *)(in_stack_00000244 + 0x6f8);
            if (uStack00000014 == 0) {
              *(undefined4 *)(in_stack_00000244 + 0x858) = 1;
            }
            *(undefined4 *)(in_stack_00000244 + 0x800) = 1;
LAB_00d477cc:
            pbVar13 = in_stack_00000030;
            iStack00000004 =
                 func_0x00d0b670(in_stack_00000030,*(undefined4 *)(*(int *)(iVar11 + 0x2cc) + 0x34))
            ;
            iVar20 = iVar11;
            if (iStack00000004 != 0) {
              uVar22 = func_0x00d0b670(pbVar13,*(undefined4 *)
                                                (*(int *)(in_stack_00000244 + 0x234) + 0x34));
              uVar22 = FUN_00bc42b0(uVar22);
              iVar8 = func_0x00bc4360(iStack00000004,uVar22);
              if (iVar8 == 0) {
                FUN_00d07ed0(iVar11);
                iVar11 = 0;
                iVar20 = 0;
                *(undefined4 *)(in_stack_00000244 + 0x858) = 0;
                *(undefined4 *)(in_stack_00000244 + 0x800) = 0;
                goto LAB_00d475c6;
              }
              break;
            }
            FUN_00bc4f50();
            uVar22 = 0x4b9;
          }
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar22,"tls_parse_ctos_psk");
          uVar21 = 0xc0103;
          uVar22 = 0x50;
          goto LAB_00d47abf;
        }
        if ((*(int *)(in_stack_00000244 + 0x76c) != 0) && (puVar18 < (undefined1 *)0x101)) {
          FUN_00bbc580(0,
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\include\\internal/packet.h"
                       ,0x1e3);
          iVar11 = func_0x00bbbcd0(puVar16,puVar18,
                                   "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\include\\internal/packet.h"
                                   ,0x1e6);
          if (iVar11 == 0) {
            FUN_00bc4f50();
            uVar22 = 0x436;
          }
          else {
            uVar14 = (**(code **)(in_stack_00000244 + 0x76c))
                               (in_stack_00000244,iVar11,&stack0x0000003c,0x200);
            FUN_00bbc580(iVar11,"ssl\\statem\\extensions_srvr.c",0x43b);
            if (uVar14 < 0x201) {
              iVar11 = iVar20;
              if (uVar14 != 0) {
                in_stack_0000001c = 0x113;
                iVar20 = func_0x00d093f0(in_stack_00000244,&stack0x0000001c);
                if (iVar20 == 0) {
                  func_0x00401320(&stack0x0000003c,uVar14);
                  FUN_00bc4f50();
                  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x44a,"tls_parse_ctos_psk");
                  func_0x00d06d50(in_stack_00000244,0x50,0xc0103,0);
                  puVar16 = in_stack_00000020;
                  goto LAB_00d47a5f;
                }
                iVar11 = func_0x00d08260();
                if ((((iVar11 == 0) ||
                     (iVar8 = func_0x00cfffd0(iVar11,&stack0x0000003c,uVar14), iVar8 == 0)) ||
                    (iVar20 = func_0x00d08310(iVar11,iVar20), iVar20 == 0)) ||
                   (iVar20 = func_0x00d08330(iVar11,0x304), iVar20 == 0)) {
                  func_0x00401320(&stack0x0000003c,uVar14);
                  FUN_00bc4f50();
                  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x456,"tls_parse_ctos_psk");
                  func_0x00d06d50(in_stack_00000244,0x50,0xc0103,0);
                  FUN_00d07ed0(iVar11);
                  puVar16 = in_stack_00000020;
                  goto LAB_00d47a5f;
                }
                func_0x00401320(&stack0x0000003c,uVar14);
              }
              iVar20 = iVar11;
              if (iVar11 != 0) goto LAB_00d4775b;
              goto LAB_00d474d3;
            }
            FUN_00bc4f50();
            uVar22 = 0x43d;
          }
LAB_00d47913:
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar22,"tls_parse_ctos_psk");
          func_0x00d06d50(in_stack_00000244,0x50,0xc0103,0);
          puVar16 = in_stack_00000020;
          goto LAB_00d47a5f;
        }
LAB_00d474d3:
        if (((*(uint *)(in_stack_00000244 + 0x788) & 0x4000) == 0) &&
           ((*(int *)(in_stack_00000244 + 0xe84) == 0 ||
            ((*(uint *)(in_stack_00000244 + 0x788) & 0x1004000) != 0)))) {
          iVar8 = func_0x00d166c0(in_stack_00000244,puVar16,puVar18,0,0,&stack0x00000000);
          iVar11 = iVar20;
        }
        else {
          *(undefined4 *)(in_stack_00000244 + 0x800) = 1;
          if (puVar18 == (undefined1 *)0x0) {
            iVar8 = 3;
          }
          else if (puVar18 == (undefined1 *)0x20) {
            iVar11 = func_0x00d083f0(in_stack_00000244,puVar16,0x20);
            if (iVar11 == 0) {
              iVar8 = 4;
              iVar11 = iVar20;
            }
            else {
              iVar8 = 5;
              iVar20 = iVar11;
            }
          }
          else {
            iVar8 = 4;
          }
        }
        if (iVar8 == 3) {
          FUN_00bc4f50();
          uVar22 = 0x486;
          goto LAB_00d47af8;
        }
        if ((iVar8 == 0) || (iVar8 == 1)) {
          FUN_00bc4f50();
          uVar22 = 0x48c;
          goto LAB_00d47913;
        }
        if ((iVar8 != 2) && (iVar8 != 4)) {
          if ((*(int *)(in_stack_00000244 + 0xe84) == 0) ||
             (((*(uint *)(in_stack_00000244 + 0x788) & 0x1000000) != 0 ||
              (iVar8 = func_0x00d07e30(*(undefined4 *)(in_stack_00000244 + 0x8a0),iVar11),
              iVar11 = iVar20, iVar8 != 0)))) {
            uVar5 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4) * 1000000;
            if (uVar5 < (ulonglong)*(uint *)(iVar11 + 0x2f0) * 1000000) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (ulonglong)*(uint *)(iVar11 + 0x2f0) * -1000000;
            }
            uVar7 = *(ulonglong *)(iVar11 + 0x2b8);
            uVar6 = *(ulonglong *)(iVar11 + 0x2b8);
            uVar19 = FUN_00c44770();
            if (uVar19 < uVar7) {
              uVar19 = 0;
LAB_00d4766b:
              uVar6 = uVar19 + 1000000000;
            }
            else {
              uVar19 = uVar19 - uVar6;
              if (((int)(uVar19 >> 0x20) != -1) || (999999999 < ~(uint)uVar19)) goto LAB_00d4766b;
              uVar6 = 0xffffffffffffffff;
            }
            uVar14 = (uint)(uVar6 >> 0x20);
            iVar11 = iVar20;
            if ((uStack00000014 == 0) &&
               (((in_stack_00000244 = in_stack_00000038, uVar19 < *(ulonglong *)(iVar20 + 0x2b0) ||
                 (uVar19 <= *(ulonglong *)(iVar20 + 0x2b0))) && (uVar5 <= uVar6)))) {
              uVar9 = ~(uint)(uVar5 >> 0x20);
              if ((uVar9 < 3) && ((uVar9 < 2 || (~(uint)uVar5 < 0x540be400)))) {
                uVar5 = 0xffffffffffffffff;
              }
              else {
                uVar5 = uVar5 + 10000000000;
              }
              uVar9 = (uint)(uVar5 >> 0x20);
              if ((uVar14 < uVar9) ||
                 ((uVar14 <= uVar9 && (((uint)uVar6 < (uint)uVar5 || (uVar6 <= uVar5)))))) {
                *(undefined4 *)(in_stack_00000038 + 0x858) = 1;
              }
            }
            goto LAB_00d477cc;
          }
          FUN_00d07ed0(iVar20);
          iVar11 = 0;
          iVar20 = 0;
        }
LAB_00d475c6:
        uStack00000014 = uStack00000014 + 1;
      } while (in_stack_00000020 != (undefined1 *)0x0);
      puVar16 = in_stack_00000020;
      if (iVar11 == 0) goto LAB_00d47a5f;
      iVar11 = *in_stack_00000028;
      iVar8 = *(int *)(*(int *)(in_stack_00000244 + 0xa0) + 4);
      in_stack_00000020 = (undefined1 *)func_0x00bc4320(iStack00000004);
      if (0 < (int)in_stack_00000020) {
        iVar10 = func_0x00d1c990(in_stack_00000028,&stack0x00000030);
        if (iVar10 == 0) {
          FUN_00bc4f50();
          uVar22 = 0x4d2;
        }
        else {
          uVar14 = 0;
          iVar10 = in_stack_00000034;
          pbVar13 = in_stack_00000030;
          do {
            if (iVar10 == 0) {
LAB_00d47a78:
              FUN_00bc4f50();
              uVar22 = 0x4d8;
              goto LAB_00d479ac;
            }
            puVar16 = (undefined1 *)(uint)*pbVar13;
            pbVar12 = pbVar13 + 1;
            if ((undefined1 *)(iVar10 + -1) < puVar16) goto LAB_00d47a78;
            uVar14 = uVar14 + 1;
            pbVar13 = pbVar12 + (int)puVar16;
            iVar10 = (iVar10 + -1) - (int)puVar16;
          } while (uVar14 <= uStack00000014);
          if (puVar16 == in_stack_00000020) {
            iVar11 = func_0x00d2ad70(in_stack_00000244,iStack00000004,
                                     *(undefined4 *)(*(int *)(in_stack_00000244 + 0xa0) + 4),
                                     iVar11 - iVar8,pbVar12,0,iVar20,0,in_stack_0000002c);
            if (iVar11 == 1) {
              *(uint *)(in_stack_00000244 + 0x86c) = uStack00000014;
              FUN_00d07ed0(*(undefined4 *)(in_stack_00000244 + 0x71c));
              *(int *)(in_stack_00000244 + 0x71c) = iVar20;
              puVar16 = in_stack_00000020;
              goto LAB_00d47a5f;
            }
            goto LAB_00d47ac8;
          }
          FUN_00bc4f50();
          uVar22 = 0x4de;
        }
LAB_00d479ac:
        func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar22,"tls_parse_ctos_psk");
        uVar21 = 0x6e;
        uVar22 = 0x32;
LAB_00d47abf:
        func_0x00d06d50(in_stack_00000244,uVar22,uVar21,0);
      }
LAB_00d47ac8:
      FUN_00d07ed0(iVar20);
      puVar16 = in_stack_00000020;
      goto LAB_00d47a5f;
    }
  }
  in_stack_00000020 = puVar16;
  FUN_00bc4f50();
  uVar22 = 0x415;
LAB_00d47af8:
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar22,"tls_parse_ctos_psk");
  func_0x00d06d50(in_stack_00000244,0x32,0x6e,0);
  puVar16 = in_stack_00000020;
LAB_00d47a5f:
  in_stack_00000020 = puVar16;
  FUN_008ab370();
  return;
}



undefined4 FUN_00d47b20(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  func_0x00e87f70();
  if (param_4[1] != 0) {
    uVar4 = (uint)*(byte *)*param_4;
    uVar2 = param_4[1] - 1;
    pbVar3 = (byte *)*param_4 + 1;
    if ((uVar4 <= uVar2) && (uVar2 == uVar4)) {
      *param_4 = pbVar3 + uVar4;
      param_4[1] = 0;
      if (uVar4 != 0) {
        while (uVar4 != 0) {
          bVar1 = *pbVar3;
          uVar4 = uVar4 - 1;
          pbVar3 = pbVar3 + 1;
          if (bVar1 == 1) {
            *(uint *)(param_3 + 0x84c) = *(uint *)(param_3 + 0x84c) | 2;
          }
          else if ((bVar1 == 0) && ((*(uint *)(param_3 + 0x788) & 0x400) != 0)) {
            *(uint *)(param_3 + 0x84c) = *(uint *)(param_3 + 0x84c) | 1;
          }
        }
        if (((*(byte *)(param_3 + 0x84c) & 1) != 0) && ((*(uint *)(param_3 + 0x78c) & 8) != 0)) {
          *(undefined4 *)(param_3 + 0x84c) = 1;
        }
        return 1;
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x23a,"tls_parse_ctos_psk_kex_modes");
  func_0x00d06d50(param_3,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d47c00(int param_1,int *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (param_2[1] == 0) {
LAB_00d47ceb:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x34,"tls_parse_ctos_renegotiate");
    func_0x00d06d50(param_1,0x32,0x150,0);
    return 0;
  }
  uVar4 = (uint)*(byte *)*param_2;
  uVar1 = param_2[1] - 1;
  *param_2 = *param_2 + 1;
  param_2[1] = uVar1;
  if (uVar1 < uVar4) goto LAB_00d47ceb;
  pbVar3 = (byte *)*param_2;
  *param_2 = *param_2 + uVar4;
  param_2[1] = uVar1 - uVar4;
  if (uVar4 != *(uint *)(param_1 + 0x2f4)) {
    FUN_00bc4f50();
    uVar6 = 0x3a;
    goto LAB_00d47c4a;
  }
  pbVar2 = (byte *)(param_1 + 0x2b4);
  uVar1 = *(uint *)(param_1 + 0x2f4);
  while (uVar4 = uVar1 - 4, 3 < uVar1) {
    if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_00d47c8d;
    pbVar3 = pbVar3 + 4;
    pbVar2 = pbVar2 + 4;
    uVar1 = uVar4;
  }
  if (uVar4 == 0xfffffffc) {
LAB_00d47cc1:
    uVar1 = 0;
  }
  else {
LAB_00d47c8d:
    bVar5 = *pbVar3 < *pbVar2;
    if ((*pbVar3 == *pbVar2) &&
       ((uVar4 == 0xfffffffd ||
        ((bVar5 = pbVar3[1] < pbVar2[1], pbVar3[1] == pbVar2[1] &&
         ((uVar4 == 0xfffffffe ||
          ((bVar5 = pbVar3[2] < pbVar2[2], pbVar3[2] == pbVar2[2] &&
           ((uVar4 == 0xffffffff || (bVar5 = pbVar3[3] < pbVar2[3], pbVar3[3] == pbVar2[3]))))))))))
       )) goto LAB_00d47cc1;
    uVar1 = -(uint)bVar5 | 1;
  }
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x33c) = 1;
    return 1;
  }
  FUN_00bc4f50();
  uVar6 = 0x48;
LAB_00d47c4a:
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar6,"tls_parse_ctos_renegotiate");
  func_0x00d06d50(param_1,0x28,0x151,0);
  return 0;
}



undefined4 FUN_00d47d20(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  if (*(int *)(param_3 + 0xec0) == 0) {
    *(undefined2 *)(param_3 + 0x886) = 0;
    return 1;
  }
  if (param_4[1] != 0) {
    uVar3 = (uint)*(byte *)*param_4;
    uVar2 = param_4[1] - 1;
    pbVar4 = (byte *)*param_4 + 1;
    if (uVar3 <= uVar2) {
      if (uVar2 == uVar3) {
        *param_4 = pbVar4 + uVar3;
        param_4[1] = 0;
        if (uVar3 != 0) {
          cVar1 = func_0x00d44650(*(undefined4 *)(param_3 + 0xec0),*(undefined4 *)(param_3 + 0xec4),
                                  pbVar4,uVar3,param_3 + 0x886);
          *(char *)(param_3 + 0x887) = cVar1;
          if (cVar1 == '\x01') {
            return 1;
          }
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x858,"tls_parse_ctos_server_cert_type");
          func_0x00d06d50(param_3,0x2b,0x6e,0);
          return 0;
        }
        FUN_00bc4f50();
        uVar5 = 0x849;
        goto LAB_00d47e00;
      }
    }
  }
  FUN_00bc4f50();
  uVar5 = 0x844;
LAB_00d47e00:
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar5,"tls_parse_ctos_server_cert_type");
  func_0x00d06d50(param_3,0x32,0x6e,0);
  return 0;
}



undefined4
FUN_00d47e30(uint param_1,undefined1 *param_2,uint param_3,undefined4 param_4,int param_5,
            undefined4 *param_6)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 unaff_retaddr;
  undefined4 uVar8;
  
  func_0x00e87f70();
  param_3 = param_6[1];
  param_2 = (undefined1 *)*param_6;
  if (1 < param_3) {
    uVar6 = (uint)CONCAT11(*param_2,param_2[1]);
    pcVar1 = param_2 + 2;
    if (uVar6 <= param_3 - 2) {
      if (param_3 - 2 == uVar6) {
        *param_6 = pcVar1 + uVar6;
        param_6[1] = 0;
        if (uVar6 != 0) {
          param_3 = uVar6 - 1;
          param_2 = param_2 + 3;
          if (*pcVar1 == '\0') {
            iVar5 = func_0x00d2cd70(&param_2,&stack0x00000000);
            iVar4 = param_5;
            if (iVar5 != 0) {
              if ((*(int *)(param_5 + 0x36c) != 0) &&
                 ((((*(byte *)((*(int **)(param_5 + 0xc))[0x1d] + 0x28) & 8) != 0 ||
                   (iVar5 = **(int **)(param_5 + 0xc), iVar5 < 0x304)) || (iVar5 == 0x10000)))) {
                pcVar1 = *(char **)(*(int *)(param_5 + 0x71c) + 0x2e0);
                if (pcVar1 != (char *)0x0) {
                  pcVar7 = pcVar1;
                  do {
                    cVar3 = *pcVar7;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar3 != '\0');
                  if (param_1 == (int)pcVar7 - (int)(pcVar1 + 1)) {
                    iVar5 = func_0x00401390(unaff_retaddr,pcVar1,(int)pcVar7 - (int)(pcVar1 + 1));
                    if (iVar5 == 0) goto LAB_00d47fed;
                  }
                }
                *(undefined4 *)(iVar4 + 0x88c) = 0;
                return 1;
              }
              if (param_1 < 0x100) {
                iVar5 = func_0x00e87d3a(unaff_retaddr,0,param_1);
                if (iVar5 == 0) {
                  puVar2 = (undefined4 *)(iVar4 + 0x7dc);
                  FUN_00bbc580(*puVar2,"ssl\\statem\\extensions_srvr.c",0x9a);
                  *puVar2 = 0;
                  iVar5 = func_0x00d44610(&stack0x00000000,puVar2);
                  if (iVar5 == 0) {
                    FUN_00bc4f50();
                    func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x9d,
                                    "tls_parse_ctos_server_name");
                    func_0x00d06d50(iVar4,0x50,0xc0103,0);
                    return 0;
                  }
LAB_00d47fed:
                  *(undefined4 *)(iVar4 + 0x88c) = 1;
                  return 1;
                }
                FUN_00bc4f50();
                uVar8 = 0x92;
              }
              else {
                FUN_00bc4f50();
                uVar8 = 0x8d;
              }
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar8,"tls_parse_ctos_server_name");
              func_0x00d06d50(iVar4,0x70,0x6e,0);
              return 0;
            }
          }
          FUN_00bc4f50();
          uVar8 = 0x83;
          goto LAB_00d4801b;
        }
      }
    }
  }
  FUN_00bc4f50();
  uVar8 = 0x71;
LAB_00d4801b:
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar8,"tls_parse_ctos_server_name");
  func_0x00d06d50(param_5,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d48040(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x82c) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x82c))
                      (param_1,*param_2,param_2[1],*(undefined4 *)(param_1 + 0x830));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x10f,"tls_parse_ctos_session_ticket");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00d480a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  func_0x00e87f70();
  puVar1 = (undefined1 *)*param_4;
  if (1 < (uint)param_4[1]) {
    uVar4 = param_4[1] - 2;
    uVar3 = (uint)CONCAT11(*puVar1,puVar1[1]);
    if (uVar3 <= uVar4) {
      if (uVar4 == uVar3) {
        *param_4 = puVar1 + uVar3 + 2;
        param_4[1] = 0;
        if (uVar3 != 0) {
          if (*(int *)(param_3 + 0x36c) == 0) {
            iVar2 = func_0x00d156e0(param_3,&stack0x00000000,0);
            if (iVar2 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x137,"tls_parse_ctos_sig_algs");
              func_0x00d06d50(param_3,0x32,0x6e,0);
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x132,"tls_parse_ctos_sig_algs");
  func_0x00d06d50(param_3,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d48190(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  func_0x00e87f70();
  puVar1 = (undefined1 *)*param_4;
  if (1 < (uint)param_4[1]) {
    uVar4 = param_4[1] - 2;
    uVar3 = (uint)CONCAT11(*puVar1,puVar1[1]);
    if (uVar3 <= uVar4) {
      if (uVar4 == uVar3) {
        *param_4 = puVar1 + uVar3 + 2;
        param_4[1] = 0;
        if (uVar3 != 0) {
          if (*(int *)(param_3 + 0x36c) == 0) {
            iVar2 = func_0x00d156e0(param_3,&stack0x00000000,1);
            if (iVar2 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x124,"tls_parse_ctos_sig_algs_cert")
              ;
              func_0x00d06d50(param_3,0x32,0x6e,0);
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x11f,"tls_parse_ctos_sig_algs_cert");
  func_0x00d06d50(param_3,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d48280(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  func_0x00e87f70();
  if (param_4[1] != 0) {
    uVar4 = (uint)*(byte *)*param_4;
    uVar1 = param_4[1] - 1;
    pbVar3 = (byte *)*param_4 + 1;
    if (uVar4 <= uVar1) {
      if (uVar1 == uVar4) {
        *param_4 = pbVar3 + uVar4;
        param_4[1] = 0;
        iVar2 = func_0x00e87d3a(pbVar3,0,uVar4);
        if (iVar2 == 0) {
          FUN_00bbc580(*(undefined4 *)(param_3 + 0x8dc),
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\include\\internal/packet.h"
                       ,0x1e3);
          iVar2 = func_0x00bbbcd0(pbVar3,uVar4,
                                  "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\include\\internal/packet.h"
                                  ,0x1e6);
          *(int *)(param_3 + 0x8dc) = iVar2;
          if (iVar2 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0xe7,"tls_parse_ctos_srp");
            func_0x00d06d50(param_3,0x50,0xc0103,0);
            return 0;
          }
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0xe2,"tls_parse_ctos_srp");
  func_0x00d06d50(param_3,0x32,0x6e,0);
  return 0;
}



undefined4
FUN_00d48380(undefined1 *param_1,uint param_2,undefined4 param_3,undefined1 *param_4,int *param_5,
            undefined4 param_6,int param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  func_0x00e87f70();
  puVar1 = param_4;
  if ((*(int *)(param_4 + 0x36c) != 0) || (param_7 != 0)) {
    return 1;
  }
  if (param_5[1] == 0) {
    FUN_00bc4f50();
    uVar7 = 0x14e;
  }
  else {
    *(uint *)(param_4 + 0x7e0) = (uint)*(byte *)*param_5;
    *param_5 = *param_5 + 1;
    param_5[1] = param_5[1] + -1;
    if (*(int *)(param_4 + 0x7e0) != 1) {
      *(undefined4 *)(param_4 + 0x7e0) = 0xffffffff;
      return 1;
    }
    iVar3 = func_0x00d1c990(param_5,&param_1);
    if (iVar3 == 0) {
      FUN_00bc4f50();
      uVar7 = 0x15b;
    }
    else {
      func_0x00bd1860(*(undefined4 *)(puVar1 + 0x7f0),FUN_00ce1a30);
      uVar6 = param_2;
      if (param_2 == 0) {
        *(undefined4 *)(puVar1 + 0x7f0) = 0;
        puVar2 = param_1;
        puVar5 = param_1;
      }
      else {
        iVar3 = func_0x00bd1790();
        *(int *)(puVar1 + 0x7f0) = iVar3;
        puVar2 = param_1;
        puVar5 = param_1;
        if (iVar3 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x167,"tls_parse_ctos_status_request");
          func_0x00d06d50(puVar1,0x50,0x8000f,0);
          return 0;
        }
      }
      while (param_1 = puVar2, uVar6 != 0) {
        if (uVar6 < 2) {
LAB_00d485eb:
          FUN_00bc4f50();
          uVar7 = 0x175;
          goto LAB_00d483bb;
        }
        puVar5 = param_1 + 2;
        uVar4 = (uint)CONCAT11(*param_1,param_1[1]);
        if (uVar6 - 2 < uVar4) goto LAB_00d485eb;
        uVar6 = (uVar6 - 2) - uVar4;
        if (uVar4 == 0) goto LAB_00d485eb;
        param_4 = puVar5;
        param_1 = (undefined1 *)func_0x00ce1a80(0,&param_4,uVar4);
        if (param_1 == (undefined1 *)0x0) {
          FUN_00bc4f50();
          uVar7 = 0x17d;
          goto LAB_00d483bb;
        }
        if (param_4 != puVar5 + uVar4) {
          FUN_00ce1a30(param_1);
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x183,"tls_parse_ctos_status_request");
          func_0x00d06d50(puVar1,0x32,0x6e,0);
          return 0;
        }
        iVar3 = func_0x00bd18c0(*(undefined4 *)(puVar1 + 0x7f0));
        puVar2 = puVar5 + uVar4;
        puVar5 = param_1;
        if (iVar3 == 0) {
          FUN_00ce1a30(param_1);
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x18a,"tls_parse_ctos_status_request");
          func_0x00d06d50(puVar1,0x50,0xc0103,0);
          return 0;
        }
      }
      param_1 = puVar5;
      iVar3 = func_0x00d2cd70(param_5,&param_1);
      uVar6 = param_2;
      puVar5 = param_1;
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar7 = 0x192;
      }
      else {
        if (param_2 == 0) {
          return 1;
        }
        param_4 = param_1;
        func_0x00bd1860(*(undefined4 *)(puVar1 + 0x7f4),FUN_00c22910);
        iVar3 = func_0x00c22930(0,&param_4,uVar6);
        *(int *)(puVar1 + 0x7f4) = iVar3;
        if ((iVar3 != 0) && (param_4 == puVar5 + uVar6)) {
          return 1;
        }
        FUN_00bc4f50();
        uVar7 = 0x19e;
      }
    }
  }
LAB_00d483bb:
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",uVar7,"tls_parse_ctos_status_request");
  func_0x00d06d50(puVar1,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d48660(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  func_0x00e87f70();
  puVar3 = (undefined1 *)*param_4;
  if (1 < (uint)param_4[1]) {
    uVar6 = param_4[1] - 2;
    bVar2 = puVar3[1];
    uVar5 = (uint)CONCAT11(*puVar3,bVar2);
    if (uVar5 <= uVar6) {
      if (uVar6 == uVar5) {
        *param_4 = puVar3 + uVar5 + 2;
        param_4[1] = 0;
        if ((uVar5 != 0) && ((bVar2 & 1) == 0)) {
          if ((*(int *)(param_3 + 0x36c) == 0) ||
             ((((*(byte *)((*(int **)(param_3 + 0xc))[0x1d] + 0x28) & 8) == 0 &&
               (iVar4 = **(int **)(param_3 + 0xc), 0x303 < iVar4)) && (iVar4 != 0x10000)))) {
            puVar1 = (undefined4 *)(param_3 + 0x824);
            FUN_00bbc580(*puVar1,"ssl\\statem\\extensions_srvr.c",0x3b4);
            *puVar1 = 0;
            *(undefined4 *)(param_3 + 0x820) = 0;
            iVar4 = func_0x00d15740(&stack0x00000000,puVar1,(undefined4 *)(param_3 + 0x820));
            if (iVar4 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x3ba,
                              "tls_parse_ctos_supported_groups");
              func_0x00d06d50(param_3,0x50,0xc0103,0);
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x3af,"tls_parse_ctos_supported_groups");
  func_0x00d06d50(param_3,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d487a0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  
  func_0x00e87f70();
  iVar4 = func_0x00d63220(param_3);
  if (iVar4 == 0) {
    return 1;
  }
  if (1 < (uint)param_4[1]) {
    uVar9 = param_4[1] - 2;
    uVar1 = *(undefined1 *)*param_4;
    bVar2 = ((undefined1 *)*param_4)[1];
    *param_4 = *param_4 + 2;
    uVar7 = (uint)CONCAT11(uVar1,bVar2);
    param_4[1] = uVar9;
    if ((((bVar2 & 1) == 0) && (uVar7 <= uVar9)) && (uVar7 < 0x80000000)) {
      puVar8 = (undefined1 *)*param_4;
      *param_4 = *param_4 + uVar7;
      param_4[1] = uVar9 - uVar7;
      uVar5 = func_0x00d63220(param_3);
      *(undefined4 *)(param_3 + 0x8a8) = 0;
      iVar4 = func_0x00bd1830(uVar5);
      do {
        do {
          if (uVar7 == 0) {
            if (param_4[1] == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x215,"tls_parse_ctos_use_srtp");
              uVar5 = 0x161;
            }
            else {
              uVar9 = (uint)*(byte *)*param_4;
              uVar7 = param_4[1] - 1;
              *param_4 = *param_4 + 1;
              param_4[1] = uVar7;
              if (uVar9 <= uVar7) {
                *param_4 = *param_4 + uVar9;
                param_4[1] = uVar7 - uVar9;
                if (uVar7 - uVar9 == 0) {
                  return 1;
                }
              }
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x21b,"tls_parse_ctos_use_srtp");
              uVar5 = 0x160;
            }
            func_0x00d06d50(param_3,0x32,uVar5,0);
            return 0;
          }
          if (uVar7 < 2) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x1fc,"tls_parse_ctos_use_srtp");
            func_0x00d06d50(param_3,0x32,0x161,0);
            return 0;
          }
          uVar7 = uVar7 - 2;
          iVar10 = 0;
          uVar1 = *puVar8;
          uVar3 = puVar8[1];
          puVar8 = puVar8 + 2;
        } while (iVar4 < 1);
        do {
          iVar6 = func_0x00bd1a80(uVar5,iVar10);
          if (*(uint *)(iVar6 + 4) == (uint)CONCAT11(uVar1,uVar3)) {
            *(int *)(param_3 + 0x8a8) = iVar6;
            iVar4 = iVar10;
            break;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar4);
      } while( true );
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_srvr.c",0x1f0,"tls_parse_ctos_use_srtp");
  func_0x00d06d50(param_3,0x32,0x161,0);
  return 0;
}



undefined4 FUN_00d489b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x354) = 0;
  if ((*(int *)(param_1 + 0x83c) != 0) &&
     ((*(int *)(param_1 + 0x1a4) == 0 || (*(int *)(param_1 + 0x228) == 0)))) {
    iVar1 = func_0x00bfae30(param_2,0x10,0,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb0a0(param_2,2);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfb180(param_2,*(undefined4 *)(param_1 + 0x83c),
                                *(undefined4 *)(param_1 + 0x840),2);
        if (iVar1 != 0) {
          iVar1 = func_0x00bfa920(param_2);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0x354) = 1;
            return 1;
          }
        }
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x1c5,"tls_construct_ctos_alpn");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  return 2;
}



undefined4 FUN_00d48a80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x885) = 0;
  if (*(int *)(param_1 + 0xeb8) == 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0x13,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb180(param_2,*(undefined4 *)(param_1 + 0xeb8),
                              *(undefined4 *)(param_1 + 0xebc),1);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfa920(param_2);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x885) = 1;
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x83d,"tls_construct_ctos_client_cert_type");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d48b30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x860) == 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0x2c,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb180(param_2,*(undefined4 *)(param_1 + 0x85c),
                              *(undefined4 *)(param_1 + 0x860),2);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfa920(param_2);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto LAB_00d48bc7;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x2fa,"tls_construct_ctos_cookie");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
LAB_00d48bc7:
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x85c),"ssl\\statem\\extensions_clnt.c",0x300);
  *(undefined4 *)(param_1 + 0x85c) = 0;
  *(undefined4 *)(param_1 + 0x860) = 0;
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x00d48c8a)

void FUN_00d48c00(undefined2 param_1,uint param_2,undefined1 *param_3,undefined4 param_4,
                 byte *param_5,int param_6)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  int in_stack_00000328;
  undefined4 in_stack_0000032c;
  
  func_0x00e87f70();
  uVar10 = 0;
  param_3 = (undefined1 *)0x0;
  param_2 = 0;
  iVar12 = 0;
  param_4 = in_stack_0000032c;
  if (*(int *)(in_stack_00000328 + 0x6f4) == 1) {
    uVar10 = func_0x00d0b120(in_stack_00000328);
  }
  if ((*(code **)(in_stack_00000328 + 0x774) != (code *)0x0) &&
     (iVar4 = (**(code **)(in_stack_00000328 + 0x774))
                        (in_stack_00000328,uVar10,&param_3,&param_2,&stack0x00000000), iVar4 == 0))
  {
    FUN_00d07ed0(0);
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x31d,"tls_construct_ctos_early_data");
    func_0x00d06d50(in_stack_00000328,0x50,0xdb,0);
    goto LAB_00d48f6d;
  }
  pcVar3 = *(code **)(in_stack_00000328 + 0x768);
  if (pcVar3 != (code *)0x0) {
    memset(&stack0x0000001c,0,0x101);
    uVar5 = (*pcVar3)(in_stack_00000328,0,&stack0x0000001c,0x100,&stack0x00000120,0x200);
    if (0x200 < uVar5) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x32c,"tls_construct_ctos_early_data");
      func_0x00d06d50(in_stack_00000328,0x28,0xc0103,0);
      goto LAB_00d48f6d;
    }
    if (uVar5 != 0) {
      pcVar8 = &stack0x0000001c;
      param_1 = 0x113;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      param_2 = (int)pcVar8 - (int)&stack0x0000001d;
      if (0x100 < param_2) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x334,"tls_construct_ctos_early_data");
        func_0x00d06d50(in_stack_00000328,0x50,0xc0103,0);
        goto LAB_00d48f6d;
      }
      param_3 = &stack0x0000001c;
      iVar4 = func_0x00d093f0(in_stack_00000328,&param_1);
      if (iVar4 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x33f,"tls_construct_ctos_early_data");
        func_0x00d06d50(in_stack_00000328,0x50,0xc0103,0);
        goto LAB_00d48f6d;
      }
      iVar12 = func_0x00d08260();
      if ((((iVar12 == 0) || (iVar6 = func_0x00cfffd0(iVar12,&stack0x00000120,uVar5), iVar6 == 0))
          || (iVar4 = func_0x00d08310(iVar12,iVar4), iVar4 == 0)) ||
         (iVar4 = func_0x00d08330(iVar12,0x304), iVar4 == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x348,"tls_construct_ctos_early_data");
        func_0x00d06d50(in_stack_00000328,0x50,0xc0103,0);
        func_0x00401320(&stack0x00000120,uVar5);
        goto LAB_00d48f6d;
      }
      func_0x00401320(&stack0x00000120,uVar5);
    }
  }
  FUN_00d07ed0(*(undefined4 *)(in_stack_00000328 + 0x720));
  *(int *)(in_stack_00000328 + 0x720) = iVar12;
  if (iVar12 != 0) {
    FUN_00bbc580(*(undefined4 *)(in_stack_00000328 + 0x724),"ssl\\statem\\extensions_clnt.c",0x354);
    iVar4 = func_0x00bbbc30(param_3,param_2,"ssl\\statem\\extensions_clnt.c",0x355);
    *(int *)(in_stack_00000328 + 0x724) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(in_stack_00000328 + 0x728) = 0;
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x358,"tls_construct_ctos_early_data");
      func_0x00d06d50(in_stack_00000328,0x50,0xc0103,0);
      goto LAB_00d48f6d;
    }
    *(uint *)(in_stack_00000328 + 0x728) = param_2;
  }
  if ((*(int *)(in_stack_00000328 + 0x9c) != 2) ||
     ((iVar4 = *(int *)(in_stack_00000328 + 0x71c), *(int *)(iVar4 + 0x2f4) == 0 &&
      ((iVar12 == 0 || (iVar4 = iVar12, *(int *)(iVar12 + 0x2f4) == 0)))))) {
    *(undefined4 *)(in_stack_00000328 + 0xe84) = 0;
    goto LAB_00d48f6d;
  }
  *(undefined4 *)(in_stack_00000328 + 0xe84) = *(undefined4 *)(iVar4 + 0x2f4);
  pbVar9 = *(byte **)(iVar4 + 0x2e0);
  if (pbVar9 == (byte *)0x0) {
LAB_00d49003:
    if (*(int *)(in_stack_00000328 + 0x83c) == 0) {
      if (*(int *)(iVar4 + 0x2f8) != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x372,"tls_construct_ctos_early_data");
        func_0x00d06d50(in_stack_00000328,0x50,0xde,0);
        goto LAB_00d48f6d;
      }
    }
    else if (*(int *)(iVar4 + 0x2f8) != 0) {
      iVar6 = func_0x00d2a410(&param_5,*(int *)(in_stack_00000328 + 0x83c),
                              *(undefined4 *)(in_stack_00000328 + 0x840));
      iVar12 = param_6;
      pbVar9 = param_5;
      if (iVar6 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x37f,"tls_construct_ctos_early_data");
        func_0x00d06d50(in_stack_00000328,0x50,0xc0103,0);
        goto LAB_00d48f6d;
      }
      do {
        if (iVar12 == 0) {
LAB_00d49133:
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x38b,"tls_construct_ctos_early_data");
          func_0x00d06d50(in_stack_00000328,0x50,0xde,0);
          goto LAB_00d48f6d;
        }
        uVar5 = (uint)*pbVar9;
        pbVar7 = pbVar9 + 1;
        if (iVar12 - 1U < uVar5) goto LAB_00d49133;
        iVar12 = (iVar12 - 1U) - uVar5;
        pbVar9 = pbVar7 + uVar5;
      } while ((uVar5 != *(uint *)(iVar4 + 0x2fc)) ||
              (iVar6 = func_0x00401390(pbVar7,*(undefined4 *)(iVar4 + 0x2f8),
                                       *(uint *)(iVar4 + 0x2fc)), in_stack_0000032c = param_4,
              iVar6 != 0));
    }
    iVar12 = func_0x00bfae30(in_stack_0000032c,0x2a,0,2);
    if (((iVar12 == 0) || (iVar12 = func_0x00bfb0a0(in_stack_0000032c,2), iVar12 == 0)) ||
       (iVar12 = func_0x00bfa920(in_stack_0000032c), iVar12 == 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x393,"tls_construct_ctos_early_data");
      func_0x00d06d50(in_stack_00000328,0x50,0xc0103,0);
    }
    else {
      *(undefined4 *)(in_stack_00000328 + 0x854) = 1;
      *(undefined4 *)(in_stack_00000328 + 0x858) = 1;
    }
  }
  else {
    pbVar7 = *(byte **)(in_stack_00000328 + 0x7dc);
    if (pbVar7 != (byte *)0x0) {
      do {
        bVar2 = *pbVar7;
        bVar11 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_00d48fc8:
          uVar5 = -(uint)bVar11 | 1;
          goto LAB_00d48fcd;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar11 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_00d48fc8;
        pbVar7 = pbVar7 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_00d48fcd:
      if (uVar5 == 0) goto LAB_00d49003;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x36c,"tls_construct_ctos_early_data");
    func_0x00d06d50(in_stack_00000328,0x50,0xe7,0);
  }
LAB_00d48f6d:
  FUN_008ab370();
  return;
}



undefined4
FUN_00d491a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  uVar1 = param_5;
  iVar3 = func_0x00d18790(param_5,&param_1,&stack0x00000000,0);
  if (iVar3 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0xc1,"tls_construct_ctos_ec_pt_formats");
    func_0x00d06d50(uVar1,0x50,iVar3,0);
    return 0;
  }
  iVar3 = func_0x00d4cab0(uVar1,param_1,unaff_retaddr);
  if (iVar3 == 0) {
    return 2;
  }
  func_0x00d150e0(uVar1,&param_3,&param_2);
  uVar2 = param_6;
  iVar3 = func_0x00bfae30(param_6,0xb,0,2);
  if (iVar3 != 0) {
    iVar3 = func_0x00bfb0a0(uVar2,2);
    if (iVar3 != 0) {
      iVar3 = func_0x00bfb180(uVar2,param_3,param_2,1);
      if (iVar3 != 0) {
        iVar3 = func_0x00bfa920(uVar2);
        if (iVar3 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0xcf,"tls_construct_ctos_ec_pt_formats");
  func_0x00d06d50(uVar1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d492c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x788) & 1) != 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0x17,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfae30(param_2,0,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x228,"tls_construct_ctos_ems");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d49340(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x788) & 0x80000) != 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0x16,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfae30(param_2,0,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x202,"tls_construct_ctos_etm");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4
FUN_00d493c0(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  
  func_0x00e87f70();
  uVar8 = param_6;
  param_2 = 0;
  iVar3 = func_0x00bfae30(param_6,0x33,0,2);
  if (((iVar3 == 0) || (iVar3 = func_0x00bfb0a0(uVar8,2), iVar3 == 0)) ||
     (iVar4 = func_0x00bfb0a0(uVar8,2), iVar3 = param_5, iVar4 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",700,"tls_construct_ctos_key_share");
    func_0x00d06d50(param_5,0x50,0xc0103,0);
    return 0;
  }
  func_0x00d15350(param_5,&stack0x00000000,&param_2);
  sVar1 = *(short *)(iVar3 + 0x35a);
  if (sVar1 == 0) {
    uVar7 = 0;
    if (param_2 != 0) {
      do {
        psVar2 = (short *)(uVar7 * 2);
        iVar4 = func_0x00d16e30(iVar3,*psVar2,0x20004);
        if ((iVar4 != 0) && (iVar4 = func_0x00d16ef0(iVar3,*psVar2,0x304,0x304,0,0), iVar4 != 0)) {
          sVar1 = *psVar2;
          if (sVar1 != 0) goto LAB_00d494db;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2);
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x2d7,"tls_construct_ctos_key_share");
    uVar8 = 0x65;
    goto LAB_00d494b7;
  }
LAB_00d494db:
  iVar4 = *(int *)(iVar3 + 0x238);
  param_1 = 0;
  if (iVar4 == 0) {
    iVar4 = func_0x00d27e00(iVar3,sVar1);
    if (iVar4 == 0) {
      return 0;
    }
LAB_00d49528:
    param_3 = func_0x00bd5f00(iVar4,&param_1);
    if (param_3 == 0) {
      uVar8 = 0x80010;
      uVar6 = 0x290;
LAB_00d495de:
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar6,"add_key_share");
      func_0x00d06d50(iVar3,0x50,uVar8,0);
      if (*(int *)(iVar3 + 0x238) == 0) {
        func_0x00bd5d50(iVar4);
      }
      FUN_00bbc580(param_1,"ssl\\statem\\extensions_clnt.c",0x2a8);
      return 0;
    }
    iVar5 = func_0x00bfae30(uVar8,sVar1,0,2);
    if ((iVar5 == 0) || (iVar5 = func_0x00bfb180(uVar8,param_1,param_3,2), iVar5 == 0)) {
      uVar8 = 0xc0103;
      uVar6 = 0x297;
      goto LAB_00d495de;
    }
    *(int *)(iVar3 + 0x238) = iVar4;
    *(short *)(iVar3 + 0x35a) = sVar1;
    FUN_00bbc580(param_1,"ssl\\statem\\extensions_clnt.c",0x2a2);
    iVar4 = func_0x00bfa920(uVar8);
    if ((iVar4 != 0) && (iVar4 = func_0x00bfa920(uVar8), iVar4 != 0)) {
      return 1;
    }
    FUN_00bc4f50();
    pcVar9 = "tls_construct_ctos_key_share";
    uVar8 = 0x2e1;
  }
  else {
    if (*(int *)(iVar3 + 0x6f4) == 1) goto LAB_00d49528;
    FUN_00bc4f50();
    pcVar9 = "add_key_share";
    uVar8 = 0x27d;
  }
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar8,pcVar9);
  uVar8 = 0xc0103;
LAB_00d494b7:
  func_0x00d06d50(iVar3,0x50,uVar8,0);
  return 0;
}



undefined4 FUN_00d49670(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x868) == '\0') {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,1,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfae30(param_2,*(undefined1 *)(param_1 + 0x868),0,1);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfa920(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x69,"tls_construct_ctos_maxfragmentlen");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d49710(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(*(int *)(param_1 + 4) + 0x1b0) != 0) &&
     ((*(int *)(param_1 + 0x1a4) == 0 || (*(int *)(param_1 + 0x228) == 0)))) {
    iVar1 = func_0x00bfae30(param_2,0x3374,0,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfae30(param_2,0,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x1ae,"tls_construct_ctos_npn");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  return 2;
}



undefined4 FUN_00d497a0(undefined4 param_1,size_t param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *unaff_retaddr;
  
  func_0x00e87f70();
  uVar3 = param_3;
  iVar2 = param_2;
  if ((*(uint *)(param_2 + 0x788) & 0x10) == 0) {
    return 2;
  }
  iVar4 = func_0x00bfab20(param_3,&param_2);
  if (iVar4 != 0) {
    piVar1 = *(int **)(iVar2 + 0x71c);
    if ((((*piVar1 == 0x304) && (piVar1[0xba] != 0)) && (piVar1[0xb3] != 0)) &&
       (iVar4 = func_0x00d0b670(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(piVar1[0xb3] + 0x34)),
       iVar4 != 0)) {
      iVar4 = func_0x00bc4320(iVar4);
      if (iVar4 < 1) {
        return 0;
      }
      param_2 = *(int *)(*(int *)(iVar2 + 0x71c) + 0x2e8) + iVar4 + param_2 + 0xf;
    }
    if (param_2 - 0x100 < 0x100) {
      if (-param_2 + 0x200 < 5) {
        param_2 = 1;
      }
      else {
        param_2 = -param_2 + 0x1fc;
      }
      iVar4 = func_0x00bfae30(uVar3,0x15,0,2);
      if ((iVar4 == 0) || (iVar4 = func_0x00bfb120(uVar3,param_2,&stack0x00000000,2), iVar4 == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x3f0,"tls_construct_ctos_padding");
        func_0x00d06d50(iVar2,0x50,0xc0103,0);
        return 0;
      }
      memset(unaff_retaddr,0,param_2);
    }
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x3c3,"tls_construct_ctos_padding");
  func_0x00d06d50(iVar2,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d49910(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8b8) == 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0x31,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfa920(param_2);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x8b4) = 1;
        return 1;
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x4d9,"tls_construct_ctos_post_handshake_auth");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00d49ac0)

bool FUN_00d499a0(void)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iStack0000000c;
  int iStack00000018;
  int iStack0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  undefined8 in_stack_00000030;
  int in_stack_00000038;
  int in_stack_00000048;
  undefined4 in_stack_0000004c;
  
  func_0x00e87f70();
  iVar10 = in_stack_00000048;
  uVar11 = 0;
  uVar2 = *(undefined4 *)(in_stack_00000048 + 4);
  in_stack_00000020 = 0;
  iVar13 = 0;
  in_stack_00000024 = 0;
  *(undefined4 *)(in_stack_00000048 + 0x86c) = 0;
  iStack0000000c = 0;
  iStack0000001c = 0;
  iStack00000018 = 0;
  in_stack_0000002c = 0;
  bVar6 = false;
  if (**(int **)(in_stack_00000048 + 0x71c) != 0x304) {
    return (bool)2;
  }
  if (((*(int **)(in_stack_00000048 + 0x71c))[0xba] == 0) &&
     (*(int *)(in_stack_00000048 + 0x720) == 0)) {
    return (bool)2;
  }
  if (*(int *)(in_stack_00000048 + 0x6f4) == 1) {
    iStack00000018 = func_0x00d0b120(in_stack_00000048);
  }
  if (*(int *)(*(int *)(iVar10 + 0x71c) + 0x2e8) == 0) {
LAB_00d49c86:
    if (*(int *)(iVar10 + 0x720) == 0) {
      return (bool)2;
    }
    iVar9 = *(int *)(iVar10 + 0x720);
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar10 + 0x71c) + 0x2cc);
    if (iVar13 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x420,"tls_construct_ctos_psk");
      func_0x00d06d50(iVar10,0x50,0xc0103,0);
      return false;
    }
    iVar13 = func_0x00d0b670(uVar2,*(undefined4 *)(iVar13 + 0x34));
    if ((iVar13 == 0) || ((*(int *)(iVar10 + 0x6f4) == 1 && (iVar13 != iStack00000018))))
    goto LAB_00d49c86;
    puVar1 = (ulonglong *)(*(int *)(iVar10 + 0x71c) + 0x2b8);
    uVar8 = *puVar1;
    uVar7 = *puVar1;
    uVar14 = FUN_00c44770();
    iVar10 = in_stack_00000048;
    if (uVar14 < uVar8) {
      in_stack_00000030 = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = uVar14 - uVar7;
    }
    uVar11 = (uint)(uVar14 >> 0x20);
    lVar3 = (uVar14 & 0xffffffff) * 0x12e0be82;
    lVar4 = (ulonglong)uVar11 * 0x12e0be82;
    lVar5 = (ulonglong)uVar11 * 0x6d694b2f + ((uVar14 & 0xffffffff) * 0x6d694b2f >> 0x20);
    in_stack_00000030 = CONCAT44((int)((ulonglong)in_stack_00000030 >> 0x20),(int)lVar4);
    uVar11 = (uint)((ulonglong)lVar5 >> 0x20);
    uVar12 = (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar5);
    lVar4 = lVar4 + (ulonglong)CONCAT14(CARRY4(uVar11,uVar12),uVar11 + uVar12);
    lVar3 = uVar14 - lVar4;
    uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
    lVar4 = lVar4 + CONCAT44(uVar11 >> 1,(uint)lVar3 >> 1 | uVar11 * -0x80000000);
    uVar11 = (uint)lVar4 >> 0x1d | (int)((ulonglong)lVar4 >> 0x20) * 8;
    uVar12 = uVar11 - 1;
    if (uVar11 == 0) {
      uVar12 = 0;
    }
    if (*(uint *)(*(int *)(in_stack_00000048 + 0x71c) + 0x2ec) < uVar12) {
      uVar11 = 0;
      goto LAB_00d49c86;
    }
    uVar11 = uVar12 * 1000;
    if ((uVar12 != 0) && (uVar11 / 1000 != uVar12)) goto LAB_00d49c86;
    uVar11 = uVar11 + *(int *)(*(int *)(in_stack_00000048 + 0x71c) + 0x2f0);
    iStack0000000c = func_0x00bc4320(iVar13);
    if (iStack0000000c < 1) goto LAB_00d49c86;
    *(int *)(iVar10 + 0x86c) = *(int *)(iVar10 + 0x86c) + 1;
    iVar9 = *(int *)(iVar10 + 0x720);
    bVar6 = true;
    if (iVar9 == 0) goto LAB_00d49bc8;
  }
  in_stack_0000002c = func_0x00d0b670(uVar2,*(undefined4 *)(*(int *)(iVar9 + 0x2cc) + 0x34));
  if (in_stack_0000002c == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x474,"tls_construct_ctos_psk");
    func_0x00d06d50(iVar10,0x50,0xdb,0);
    return false;
  }
  if ((*(int *)(iVar10 + 0x6f4) == 1) && (in_stack_0000002c != iStack00000018)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x47d,"tls_construct_ctos_psk");
    func_0x00d06d50(iVar10,0x50,0xdb,0);
    return false;
  }
  iStack0000001c = func_0x00bc4320(in_stack_0000002c);
  if (iStack0000001c < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x483,"tls_construct_ctos_psk");
    func_0x00d06d50(iVar10,0x50,0xdb,0);
    return false;
  }
LAB_00d49bc8:
  uVar2 = in_stack_0000004c;
  iVar9 = func_0x00bfae30(in_stack_0000004c,0x29,0,2);
  if (((iVar9 == 0) || (iVar9 = func_0x00bfb0a0(uVar2,2), iVar9 == 0)) ||
     (iVar9 = func_0x00bfb0a0(uVar2,2), iVar9 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x48c,"tls_construct_ctos_psk");
    func_0x00d06d50(iVar10,0x50,0xc0103,0);
    return false;
  }
  if ((bVar6) &&
     ((iVar9 = func_0x00bfb180(uVar2,*(undefined4 *)(*(int *)(iVar10 + 0x71c) + 0x2e4),
                               *(undefined4 *)(*(int *)(iVar10 + 0x71c) + 0x2e8),2), iVar9 == 0 ||
      (iVar9 = func_0x00bfae30(uVar2,uVar11,0,4), iVar9 == 0)))) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x494,"tls_construct_ctos_psk");
    func_0x00d06d50(iVar10,0x50,0xc0103,0);
    return false;
  }
  if (*(int *)(iVar10 + 0x720) != 0) {
    iVar9 = func_0x00bfb180(uVar2,*(undefined4 *)(iVar10 + 0x724),*(undefined4 *)(iVar10 + 0x728),2)
    ;
    if ((iVar9 == 0) || (iVar9 = func_0x00bfae30(uVar2,0,0,4), iVar9 == 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x49d,"tls_construct_ctos_psk");
      func_0x00d06d50(iVar10,0x50,0xc0103,0);
      return false;
    }
    *(int *)(iVar10 + 0x86c) = *(int *)(iVar10 + 0x86c) + 1;
  }
  iVar9 = func_0x00bfa920(uVar2);
  if ((((((iVar9 != 0) && (iVar9 = func_0x00bfab20(uVar2,&stack0x00000028), iVar9 != 0)) &&
        (iVar9 = func_0x00bfb0a0(uVar2,2), iVar9 != 0)) &&
       ((!bVar6 || (iVar9 = func_0x00bfb120(uVar2,iStack0000000c,&stack0x00000020,1), iVar9 != 0))))
      && ((*(int *)(iVar10 + 0x720) == 0 ||
          (iVar9 = func_0x00bfb120(uVar2,iStack0000001c,&stack0x00000024,1), iVar9 != 0)))) &&
     ((((iVar9 = func_0x00bfa920(uVar2), iVar9 != 0 && (iVar9 = func_0x00bfa920(uVar2), iVar9 != 0))
       && (iVar9 = func_0x00bfab20(uVar2,&stack0x00000038), iVar9 != 0)) &&
      (iVar9 = func_0x00bfa940(uVar2), iVar9 != 0)))) {
    iVar9 = func_0x00bfaac0(uVar2);
    iVar9 = iVar9 - in_stack_00000038;
    if ((bVar6) &&
       (iVar13 = func_0x00d2ad70(iVar10,iVar13,iVar9,in_stack_00000028,0,in_stack_00000020,
                                 *(undefined4 *)(iVar10 + 0x71c),1,0), iVar13 != 1)) {
      return false;
    }
    if (*(int *)(iVar10 + 0x720) == 0) {
      return true;
    }
    iVar10 = func_0x00d2ad70(iVar10,in_stack_0000002c,iVar9,in_stack_00000028,0,in_stack_00000024,
                             *(int *)(iVar10 + 0x720),1,1);
    return iVar10 == 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x4b2,"tls_construct_ctos_psk");
  func_0x00d06d50(iVar10,0x50,0xc0103,0);
  return false;
}



undefined4 FUN_00d49fc0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x788) & 0x400;
  iVar1 = func_0x00bfae30(param_2,0x2d,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb0a0(param_2,1);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfae30(param_2,1,0,1);
        if (iVar1 != 0) {
          if (uVar2 != 0) {
            iVar1 = func_0x00bfae30(param_2,0,0,1);
            if (iVar1 == 0) goto LAB_00d4a071;
          }
          iVar1 = func_0x00bfa920(param_2);
          if (iVar1 != 0) {
            iVar1 = func_0x00bfa920(param_2);
            if (iVar1 != 0) {
              *(undefined4 *)(param_1 + 0x84c) = 2;
              if (uVar2 != 0) {
                *(undefined4 *)(param_1 + 0x84c) = 3;
              }
              return 1;
            }
          }
        }
      }
    }
  }
LAB_00d4a071:
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x268,"tls_construct_ctos_psk_kex_modes");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d4a0b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x8ac) == 0) {
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) == 0) {
      if (0x303 < *(int *)(param_1 + 0x794)) {
        return 2;
      }
      iVar1 = FUN_00d05b40(param_1,9,0,0x301,0);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x794) < 0x302)) {
        return 2;
      }
    }
    iVar1 = func_0x00bfae30(param_2,0xff01,0,2);
    if (((iVar1 != 0) && (iVar1 = func_0x00bfb0a0(param_2,2), iVar1 != 0)) &&
       ((iVar1 = func_0x00bfae30(param_2,0,0,1), iVar1 != 0 &&
        (iVar1 = func_0x00bfa920(param_2), iVar1 != 0)))) {
      return 1;
    }
    FUN_00bc4f50();
    uVar2 = 0x2a;
  }
  else {
    iVar1 = func_0x00bfae30(param_2,0xff01,0,2);
    if ((((iVar1 != 0) && (iVar1 = func_0x00bfb0a0(param_2,2), iVar1 != 0)) &&
        (iVar1 = func_0x00bfb180(param_2,param_1 + 0x2b4,*(undefined4 *)(param_1 + 0x2f4),1),
        iVar1 != 0)) && (iVar1 = func_0x00bfa920(param_2), iVar1 != 0)) {
      return 1;
    }
    FUN_00bc4f50();
    uVar2 = 0x37;
  }
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar2,"tls_construct_ctos_renegotiate");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d4a1f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x890) != 0) && (param_4 == 0)) {
    iVar1 = func_0x00bfae30(param_2,0x12,0,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfae30(param_2,0,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x217,"tls_construct_ctos_sct");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  return 2;
}



undefined4 FUN_00d4a270(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x887) = 0;
  if (*(int *)(param_1 + 0xec0) == 0) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_2,0x14,0,2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb180(param_2,*(undefined4 *)(param_1 + 0xec0),
                              *(undefined4 *)(param_1 + 0xec4),1);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfa920(param_2);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x887) = 1;
          return 1;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x871,"tls_construct_ctos_server_cert_type");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d4a320(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x7dc) == 0) {
    return 2;
  }
  iVar3 = func_0x00bfae30(param_2,0,0,2);
  if (iVar3 != 0) {
    iVar3 = func_0x00bfb0a0(param_2,2);
    if (iVar3 != 0) {
      iVar3 = func_0x00bfb0a0(param_2,2);
      if (iVar3 != 0) {
        iVar3 = func_0x00bfae30(param_2,0,0,1);
        if (iVar3 != 0) {
          pcVar2 = *(char **)(param_1 + 0x7dc);
          pcVar4 = pcVar2;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          iVar3 = func_0x00bfb180(param_2,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),2);
          if (iVar3 != 0) {
            iVar3 = func_0x00bfa920(param_2);
            if (iVar3 != 0) {
              iVar3 = func_0x00bfa920(param_2);
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x50,"tls_construct_ctos_server_name");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d4a400(int param_1,undefined4 param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint _Size;
  
  iVar3 = func_0x00d16ec0(param_1);
  if (iVar3 == 0) {
    return 2;
  }
  if ((((*(int *)(param_1 + 0x3c) == 0) &&
       (piVar1 = *(int **)(param_1 + 0x71c), piVar1 != (int *)0x0)) && (piVar1[0xb9] != 0)) &&
     (*piVar1 != 0x304)) {
    _Size = piVar1[0xba];
LAB_00d4a4e9:
    if (_Size != 0) goto LAB_00d4a501;
  }
  else {
    piVar1 = (int *)(param_1 + 0x71c);
    if (((*(int *)(param_1 + 0x71c) != 0) &&
        (puVar2 = *(ushort **)(param_1 + 0x828), puVar2 != (ushort *)0x0)) &&
       (*(int *)(puVar2 + 2) != 0)) {
      _Size = (uint)*puVar2;
      iVar3 = *piVar1;
      uVar4 = FUN_00bbc4f0(_Size,"ssl\\statem\\extensions_clnt.c",299);
      *(undefined4 *)(iVar3 + 0x2e4) = uVar4;
      if (*(void **)(*piVar1 + 0x2e4) == (void *)0x0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x12d,"tls_construct_ctos_session_ticket");
        func_0x00d06d50(param_1,0x50,0xc0103,0);
        return 0;
      }
      memcpy(*(void **)(*piVar1 + 0x2e4),*(void **)(*(int *)(param_1 + 0x828) + 4),_Size);
      *(uint *)(*piVar1 + 0x2e8) = _Size;
      goto LAB_00d4a4e9;
    }
    _Size = 0;
  }
  if ((*(int *)(param_1 + 0x828) != 0) && (*(int *)(*(int *)(param_1 + 0x828) + 4) == 0)) {
    return 2;
  }
LAB_00d4a501:
  iVar3 = func_0x00bfae30(param_2,0x23,0,2);
  if ((iVar3 != 0) &&
     (iVar3 = func_0x00bfb180(param_2,*(undefined4 *)(*(int *)(param_1 + 0x71c) + 0x2e4),_Size,2),
     iVar3 != 0)) {
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x13d,"tls_construct_ctos_session_ticket");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d4a580(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = param_1;
  if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) == 0) {
    if (0x302 < *(int *)(param_1 + 0x7a4)) {
LAB_00d4a5b8:
      uVar3 = func_0x00d14100(param_1,1,&param_1);
      uVar2 = param_2;
      iVar4 = func_0x00bfae30(param_2,0xd,0,2);
      if (iVar4 != 0) {
        iVar4 = func_0x00bfb0a0(uVar2,2);
        if (iVar4 != 0) {
          iVar4 = func_0x00bfb0a0(uVar2,2);
          if (iVar4 != 0) {
            iVar4 = func_0x00d13ff0(iVar1,uVar2,param_1,uVar3);
            if (iVar4 != 0) {
              iVar4 = func_0x00bfa920(uVar2);
              if (iVar4 != 0) {
                iVar4 = func_0x00bfa920(uVar2);
                if (iVar4 != 0) {
                  return 1;
                }
              }
            }
          }
        }
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x157,"tls_construct_ctos_sig_algs");
      func_0x00d06d50(iVar1,0x50,0xc0103,0);
      return 0;
    }
  }
  else if ((*(int *)(param_1 + 0x7a4) != 0x100) && (*(int *)(param_1 + 0x7a4) < 0xfefe))
  goto LAB_00d4a5b8;
  return 2;
}



undefined4 FUN_00d4a670(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x8dc) == 0) {
    return 2;
  }
  iVar3 = func_0x00bfae30(param_2,0xc,0,2);
  if (iVar3 != 0) {
    iVar3 = func_0x00bfb0a0(param_2,2);
    if (iVar3 != 0) {
      iVar3 = func_0x00bfb0a0(param_2,1);
      if (iVar3 != 0) {
        iVar3 = func_0x00bfafd0(param_2,1);
        if (iVar3 != 0) {
          pcVar2 = *(char **)(param_1 + 0x8dc);
          pcVar4 = pcVar2;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          iVar3 = func_0x00bfad90(param_2,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
          if (iVar3 != 0) {
            iVar3 = func_0x00bfa920(param_2);
            if (iVar3 != 0) {
              iVar3 = func_0x00bfa920(param_2);
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x83,"tls_construct_ctos_srp");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4
FUN_00d4a750(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  func_0x00e87f70();
  if ((param_5 != 0) || (*(int *)(param_2 + 0x7e0) != 1)) {
    return 2;
  }
  iVar1 = func_0x00bfae30(param_3,5,0,2);
  if ((((iVar1 == 0) || (iVar1 = func_0x00bfb0a0(param_3,2), iVar1 == 0)) ||
      (iVar1 = func_0x00bfae30(param_3,1,0,1), iVar1 == 0)) ||
     (iVar1 = func_0x00bfb0a0(param_3,2), iVar1 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x172,"tls_construct_ctos_status_request");
    func_0x00d06d50(param_2,0x50,0xc0103,0);
    return 0;
  }
  iVar4 = 0;
  iVar1 = func_0x00bd1830(*(undefined4 *)(param_2 + 0x7f0));
  if (0 < iVar1) {
    do {
      uVar2 = func_0x00bd1a80(*(undefined4 *)(param_2 + 0x7f0),iVar4);
      iVar1 = func_0x00ce1ac0(uVar2,0);
      if (((iVar1 < 1) || (iVar3 = func_0x00bfb120(param_3,iVar1,&param_5,2), iVar3 == 0)) ||
         (iVar3 = func_0x00ce1ac0(uVar2,&param_5), iVar3 != iVar1)) {
        FUN_00bc4f50();
        uVar2 = 0x17e;
        goto LAB_00d4a8ac;
      }
      iVar4 = iVar4 + 1;
      iVar1 = func_0x00bd1830(*(undefined4 *)(param_2 + 0x7f0));
    } while (iVar4 < iVar1);
  }
  iVar1 = func_0x00bfa920(param_3);
  if ((iVar1 == 0) || (iVar1 = func_0x00bfb0a0(param_3,2), iVar1 == 0)) {
    FUN_00bc4f50();
    uVar2 = 0x184;
    goto LAB_00d4a8ac;
  }
  if (*(int *)(param_2 + 0x7f4) != 0) {
    iVar1 = func_0x00c22950(*(int *)(param_2 + 0x7f4),0);
    if (iVar1 < 0) {
      FUN_00bc4f50();
      uVar2 = 0x18c;
      goto LAB_00d4a8ac;
    }
    iVar4 = func_0x00bfa8b0(param_3,iVar1,&param_5);
    if ((iVar4 == 0) ||
       (iVar4 = func_0x00c22950(*(undefined4 *)(param_2 + 0x7f4),&param_5), iVar4 != iVar1)) {
      FUN_00bc4f50();
      uVar2 = 0x192;
      goto LAB_00d4a8ac;
    }
  }
  iVar1 = func_0x00bfa920(param_3);
  if ((iVar1 != 0) && (iVar1 = func_0x00bfa920(param_3), iVar1 != 0)) {
    return 1;
  }
  FUN_00bc4f50();
  uVar2 = 0x197;
LAB_00d4a8ac:
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar2,"tls_construct_ctos_status_request");
  func_0x00d06d50(param_2,0x50,0xc0103,0);
  return 0;
}



undefined4
FUN_00d4a9b0(uint param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
            undefined4 param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_retaddr;
  char *pcVar7;
  
  func_0x00e87f70();
  iVar1 = param_8;
  iVar4 = 0;
  param_2 = 0;
  param_1 = 0;
  iVar5 = 0;
  iVar2 = func_0x00d18790(param_8,&param_3,&stack0x00000000,0);
  if (iVar2 == 0) {
    iVar2 = func_0x00d4cab0(iVar1,param_3,unaff_retaddr);
    if ((iVar2 == 0) &&
       (((*(byte *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x74) + 0x28) & 8) != 0 ||
        (unaff_retaddr < 0x304)))) {
      return 2;
    }
    func_0x00d15350(iVar1,&param_2,&param_1);
    uVar3 = param_9;
    iVar2 = func_0x00bfae30(param_9,10,0,2);
    if ((((iVar2 == 0) || (iVar2 = func_0x00bfb0a0(uVar3,2), iVar2 == 0)) ||
        (iVar2 = func_0x00bfb0a0(uVar3,2), iVar2 == 0)) ||
       (iVar2 = func_0x00bfafd0(uVar3,1), iVar2 == 0)) {
      FUN_00bc4f50();
      uVar3 = 0xf6;
LAB_00d4abee:
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar3,"tls_construct_ctos_supported_groups");
      pcVar7 = (char *)0x0;
      iVar2 = 0xc0103;
    }
    else {
      uVar6 = 0;
      if (param_1 != 0) {
        do {
          param_4 = (uint)*(ushort *)(param_2 + uVar6 * 2);
          param_5 = param_4;
          iVar2 = func_0x00d16ef0(iVar1,param_4,param_3,unaff_retaddr,0,&param_6);
          if ((iVar2 != 0) && (iVar2 = func_0x00d16e30(iVar1,param_4,0x20004), iVar2 != 0)) {
            iVar2 = func_0x00bfae30(param_9,param_5 & 0xffff,0,2);
            if (iVar2 == 0) {
              FUN_00bc4f50();
              uVar3 = 0x101;
              goto LAB_00d4abee;
            }
            if ((param_6 != 0) && (unaff_retaddr == 0x304)) {
              iVar5 = iVar5 + 1;
            }
            iVar4 = iVar4 + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_1);
      }
      uVar3 = param_9;
      iVar2 = func_0x00bfa920(param_9);
      if ((iVar2 == 0) || (iVar2 = func_0x00bfa920(uVar3), iVar2 == 0)) {
        FUN_00bc4f50();
        uVar3 = 0x10b;
        if (iVar4 != 0) {
          uVar3 = 0x10e;
        }
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar3,"tls_construct_ctos_supported_groups"
                       );
        pcVar7 = "No groups enabled for max supported SSL/TLS version";
        if (iVar4 != 0) {
          pcVar7 = (char *)0x0;
        }
        iVar2 = 0x127;
        if (iVar4 != 0) {
          iVar2 = 0xc0103;
        }
      }
      else {
        if ((iVar5 != 0) || (unaff_retaddr != 0x304)) {
          return 1;
        }
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x113,"tls_construct_ctos_supported_groups"
                       );
        pcVar7 = "No groups enabled for max supported SSL/TLS version";
        iVar2 = 0x127;
      }
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0xe0,"tls_construct_ctos_supported_groups");
    pcVar7 = (char *)0x0;
  }
  func_0x00d06d50(iVar1,0x50,iVar2,pcVar7);
  return 0;
}



undefined4 FUN_00d4ac20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_retaddr;
  undefined4 uVar3;
  
  func_0x00e87f70();
  uVar1 = param_3;
  iVar2 = func_0x00d18790(param_3,&param_1,&stack0x00000000,0);
  uVar3 = param_4;
  if (iVar2 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x237,"tls_construct_ctos_supported_versions");
    func_0x00d06d50(uVar1,0x50,iVar2,0);
    return 0;
  }
  if (unaff_retaddr < 0x304) {
    return 2;
  }
  iVar2 = func_0x00bfae30(param_4,0x2b,0,2);
  if (iVar2 != 0) {
    iVar2 = func_0x00bfb0a0(uVar3,2);
    if (iVar2 != 0) {
      iVar2 = func_0x00bfb0a0(uVar3,1);
      if (iVar2 != 0) {
        if (param_1 <= unaff_retaddr) {
          do {
            iVar2 = func_0x00bfae30(uVar3,unaff_retaddr,unaff_retaddr >> 0x1f,2);
            if (iVar2 == 0) {
              FUN_00bc4f50();
              uVar3 = 0x24b;
              goto LAB_00d4ad45;
            }
            unaff_retaddr = unaff_retaddr + -1;
          } while (param_1 <= unaff_retaddr);
        }
        iVar2 = func_0x00bfa920(uVar3);
        if (iVar2 != 0) {
          iVar2 = func_0x00bfa920(uVar3);
          if (iVar2 != 0) {
            return 1;
          }
        }
        FUN_00bc4f50();
        uVar3 = 0x250;
        goto LAB_00d4ad45;
      }
    }
  }
  FUN_00bc4f50();
  uVar3 = 0x245;
LAB_00d4ad45:
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar3,"tls_construct_ctos_supported_versions");
  func_0x00d06d50(uVar1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d4ad70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = func_0x00d63220(param_1);
  if (iVar1 == 0) {
    return 2;
  }
  iVar2 = func_0x00bfae30(param_2,0xe,0,2);
  if (iVar2 != 0) {
    iVar2 = func_0x00bfb0a0(param_2,2);
    if (iVar2 != 0) {
      iVar2 = func_0x00bfb0a0(param_2,2);
      if (iVar2 != 0) {
        iVar2 = func_0x00bd1830(iVar1);
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            iVar3 = func_0x00bd1a80(iVar1,iVar4);
            if (iVar3 == 0) {
LAB_00d4ae41:
              FUN_00bc4f50();
              uVar5 = 0x1e9;
              goto LAB_00d4ae50;
            }
            iVar3 = func_0x00bfae30(param_2,*(undefined4 *)(iVar3 + 4),0,2);
            if (iVar3 == 0) goto LAB_00d4ae41;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar2);
        }
        iVar1 = func_0x00bfa920(param_2);
        if (iVar1 != 0) {
          iVar1 = func_0x00bfae30(param_2,0,0,1);
          if (iVar1 != 0) {
            iVar1 = func_0x00bfa920(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
        FUN_00bc4f50();
        uVar5 = 0x1f1;
LAB_00d4ae50:
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar5,"tls_construct_ctos_use_srtp");
        func_0x00d06d50(param_1,0x50,0xc0103,0);
        return 0;
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x1df,"tls_construct_ctos_use_srtp");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d4aec0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  byte *unaff_retaddr;
  undefined4 uVar12;
  
  func_0x00e87f70();
  if (*(int *)(param_3 + 0x354) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x664,"tls_parse_stoc_alpn");
    func_0x00d06d50(param_3,0x6e,0x6e,0);
    return 0;
  }
  uVar5 = param_4[1];
  if (uVar5 < 2) {
LAB_00d4b210:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x670,"tls_parse_stoc_alpn");
    func_0x00d06d50(param_3,0x32,0x6e,0);
    return 0;
  }
  uVar9 = uVar5 - 2;
  uVar1 = ((undefined1 *)*param_4)[1];
  uVar2 = *(undefined1 *)*param_4;
  *param_4 = *param_4 + 2;
  param_4[1] = uVar9;
  if ((uVar9 != CONCAT11(uVar2,uVar1)) || (uVar9 == 0)) goto LAB_00d4b210;
  uVar9 = (uint)*(byte *)*param_4;
  *param_4 = *param_4 + 1;
  param_4[1] = uVar5 - 3;
  if (uVar5 - 3 != uVar9) goto LAB_00d4b210;
  iVar4 = func_0x00d2a410(&stack0x00000000,*(undefined4 *)(param_3 + 0x83c),
                          *(undefined4 *)(param_3 + 0x840));
  if (iVar4 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x676,"tls_parse_stoc_alpn");
    func_0x00d06d50(param_3,0x50,0xc0103,0);
    return 0;
  }
  do {
    do {
      if (param_1 == 0) {
LAB_00d4b1de:
        FUN_00bc4f50();
        uVar12 = 0x685;
        goto LAB_00d4b1ed;
      }
      uVar5 = (uint)*unaff_retaddr;
      pbVar6 = unaff_retaddr + 1;
      if (param_1 - 1U < uVar5) goto LAB_00d4b1de;
      param_1 = (param_1 - 1U) - uVar5;
      unaff_retaddr = pbVar6 + uVar5;
    } while (uVar5 != uVar9);
    pbVar7 = (byte *)*param_4;
    uVar5 = uVar9;
    while (uVar3 = uVar5 - 4, 3 < uVar5) {
      if (*(int *)pbVar7 != *(int *)pbVar6) goto LAB_00d4aff6;
      pbVar7 = pbVar7 + 4;
      pbVar6 = pbVar6 + 4;
      uVar5 = uVar3;
    }
    if (uVar3 == 0xfffffffc) {
LAB_00d4b02a:
      uVar5 = 0;
    }
    else {
LAB_00d4aff6:
      bVar11 = *pbVar7 < *pbVar6;
      if ((*pbVar7 == *pbVar6) &&
         ((uVar3 == 0xfffffffd ||
          ((bVar11 = pbVar7[1] < pbVar6[1], pbVar7[1] == pbVar6[1] &&
           ((uVar3 == 0xfffffffe ||
            ((bVar11 = pbVar7[2] < pbVar6[2], pbVar7[2] == pbVar6[2] &&
             ((uVar3 == 0xffffffff || (bVar11 = pbVar7[3] < pbVar6[3], pbVar7[3] == pbVar6[3])))))))
           ))))) goto LAB_00d4b02a;
      uVar5 = -(uint)bVar11 | 1;
    }
  } while (uVar5 != 0);
  FUN_00bbc580(*(undefined4 *)(param_3 + 0x344),"ssl\\statem\\extensions_clnt.c",0x689);
  iVar4 = FUN_00bbc4f0(uVar9,"ssl\\statem\\extensions_clnt.c",0x68a);
  *(int *)(param_3 + 0x344) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_3 + 0x348) = 0;
    FUN_00bc4f50();
    uVar12 = 0x68d;
    goto LAB_00d4b085;
  }
  iVar4 = func_0x00d1c8c0(param_4,iVar4,uVar9);
  if (iVar4 == 0) {
    FUN_00bc4f50();
    uVar12 = 0x691;
LAB_00d4b1ed:
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar12,"tls_parse_stoc_alpn");
    func_0x00d06d50(param_3,0x32,0x6e,0);
    return 0;
  }
  iVar4 = *(int *)(param_3 + 0x71c);
  *(uint *)(param_3 + 0x348) = uVar9;
  piVar8 = *(int **)(iVar4 + 0x2f8);
  if ((piVar8 == (int *)0x0) || (*(uint *)(iVar4 + 0x2fc) != uVar9)) {
LAB_00d4b143:
    *(undefined4 *)(param_3 + 0x858) = 0;
  }
  else {
    piVar10 = *(int **)(param_3 + 0x344);
    uVar5 = uVar9;
    while (uVar3 = uVar5 - 4, 3 < uVar5) {
      if (*piVar8 != *piVar10) goto LAB_00d4b116;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
      uVar5 = uVar3;
    }
    if (uVar3 != 0xfffffffc) {
LAB_00d4b116:
      if (((char)*piVar8 != (char)*piVar10) ||
         ((uVar3 != 0xfffffffd &&
          ((*(char *)((int)piVar8 + 1) != *(char *)((int)piVar10 + 1) ||
           ((uVar3 != 0xfffffffe &&
            ((*(char *)((int)piVar8 + 2) != *(char *)((int)piVar10 + 2) ||
             ((uVar3 != 0xffffffff && (*(char *)((int)piVar8 + 3) != *(char *)((int)piVar10 + 3)))))
            )))))))) goto LAB_00d4b143;
    }
  }
  if (*(int *)(param_3 + 0x36c) != 0) {
    return 1;
  }
  if (*(int *)(iVar4 + 0x2f8) == 0) {
    uVar12 = func_0x00bbbc30(*(undefined4 *)(param_3 + 0x344),uVar9,"ssl\\statem\\extensions_clnt.c"
                             ,0x6a7);
    *(undefined4 *)(*(int *)(param_3 + 0x71c) + 0x2f8) = uVar12;
    iVar4 = *(int *)(param_3 + 0x71c);
    if (*(int *)(iVar4 + 0x2f8) != 0) {
      *(undefined4 *)(iVar4 + 0x2fc) = *(undefined4 *)(param_3 + 0x348);
      return 1;
    }
    *(undefined4 *)(iVar4 + 0x2fc) = 0;
    FUN_00bc4f50();
    uVar12 = 0x6aa;
  }
  else {
    FUN_00bc4f50();
    uVar12 = 0x6a3;
  }
LAB_00d4b085:
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar12,"tls_parse_stoc_alpn");
  func_0x00d06d50(param_3,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d4b250(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2[1] != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x84b,"tls_parse_stoc_client_cert_type");
    func_0x00d06d50(param_1,0x32,0x6e,0);
    return 0;
  }
  uVar1 = *(undefined1 *)*param_2;
  *param_2 = (undefined1 *)*param_2 + 1;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x885) == '\x01') {
    if (*(int *)(param_1 + 0xeb8) != 0) {
      iVar2 = func_0x00e87d3a(*(int *)(param_1 + 0xeb8),uVar1,*(undefined4 *)(param_1 + 0xebc));
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x85e,"tls_parse_stoc_client_cert_type");
        func_0x00d06d50(param_1,0x32,0x180,0);
        return 0;
      }
      *(undefined1 *)(param_1 + 0x884) = uVar1;
      return 1;
    }
    FUN_00bc4f50();
    uVar3 = 0x859;
  }
  else {
    FUN_00bc4f50();
    uVar3 = 0x854;
  }
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar3,"tls_parse_stoc_client_cert_type");
  func_0x00d06d50(param_1,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d4b350(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  func_0x00e87f70();
  puVar1 = (undefined1 *)*param_4;
  if (1 < (uint)param_4[1]) {
    uVar3 = param_4[1] - 2;
    uVar4 = (uint)CONCAT11(*puVar1,puVar1[1]);
    if (uVar4 <= uVar3) {
      if (uVar3 == uVar4) {
        *param_4 = puVar1 + 2 + uVar4;
        param_4[1] = 0;
        FUN_00bbc580(*(undefined4 *)(param_3 + 0x85c),
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\include\\internal/packet.h"
                     ,0x1c6);
        *(undefined4 *)(param_3 + 0x85c) = 0;
        *(undefined4 *)(param_3 + 0x860) = 0;
        if (uVar4 != 0) {
          iVar2 = func_0x00bbbc30(puVar1 + 2,uVar4,
                                  "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\include\\internal/packet.h"
                                  ,0x1cf);
          *(int *)(param_3 + 0x85c) = iVar2;
          if (iVar2 == 0) goto LAB_00d4b3fa;
          *(uint *)(param_3 + 0x860) = uVar4;
        }
        return 1;
      }
    }
  }
LAB_00d4b3fa:
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x7b9,"tls_parse_stoc_cookie");
  func_0x00d06d50(param_3,0x32,0x9f,0);
  return 0;
}



undefined4 FUN_00d4b430(int param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  
  uVar5 = param_2[1];
  if (param_3 != 0x2000) {
    if (uVar5 != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x7e3,"tls_parse_stoc_early_data");
      func_0x00d06d50(param_1,0x32,0x6e,0);
      return 0;
    }
    if ((*(int *)(param_1 + 0x858) != 0) && (*(int *)(param_1 + 0x36c) != 0)) {
      *(undefined4 *)(param_1 + 0x854) = 2;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x7ee,"tls_parse_stoc_early_data");
    func_0x00d06d50(param_1,0x2f,0x6e,0);
    return 0;
  }
  if (3 < uVar5) {
    puVar6 = (undefined1 *)*param_2;
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *param_2 = *param_2 + 4;
    iVar7 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
    param_2[1] = uVar5 - 4;
    if (uVar5 - 4 == 0) {
      *(int *)(*(int *)(param_1 + 0x71c) + 0x2f4) = iVar7;
      if ((*(uint *)(param_1 + 0xb4) & 0x2000) == 0) {
        return 1;
      }
      if (iVar7 == -1) {
        return 1;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x71c) + 0x2f4) = 1;
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x7db,"tls_parse_stoc_early_data");
      func_0x00d06d50(param_1,0x2f,0xae,0);
      return 0;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x7c9,"tls_parse_stoc_early_data");
  func_0x00d06d50(param_1,0x32,0xae,0);
  return 0;
}



undefined4 FUN_00d4b5b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  func_0x00e87f70();
  if (param_4[1] != 0) {
    uVar3 = (uint)*(byte *)*param_4;
    uVar1 = param_4[1] - 1;
    if (uVar3 <= uVar1) {
      if (uVar1 == uVar3) {
        *param_4 = (byte *)*param_4 + uVar3 + 1;
        param_4[1] = 0;
        if (*(int *)(param_3 + 0x36c) == 0) {
          if (uVar3 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x572,"tls_parse_stoc_ec_pt_formats");
            func_0x00d06d50(param_3,0x32,0x10f,0);
            return 0;
          }
          *(undefined4 *)(param_3 + 0x810) = 0;
          FUN_00bbc580(*(undefined4 *)(param_3 + 0x814),"ssl\\statem\\extensions_clnt.c",0x577);
          iVar2 = FUN_00bbc4f0(uVar3,"ssl\\statem\\extensions_clnt.c",0x578);
          *(int *)(param_3 + 0x814) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(param_3 + 0x810) = 0;
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x57b,"tls_parse_stoc_ec_pt_formats");
            func_0x00d06d50(param_3,0x50,0xc0103,0);
            return 0;
          }
          *(uint *)(param_3 + 0x810) = uVar3;
          iVar2 = func_0x00d1c8c0(&stack0x00000000,iVar2,uVar3);
          if (iVar2 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x584,"tls_parse_stoc_ec_pt_formats");
            func_0x00d06d50(param_3,0x50,0xc0103,0);
            return 0;
          }
        }
        return 1;
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x56c,"tls_parse_stoc_ec_pt_formats");
  func_0x00d06d50(param_3,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d4b740(int param_1)

{
  uint *puVar1;
  
  if (((*(uint *)(param_1 + 0x788) & 1) == 0) &&
     (*(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x200, *(int *)(param_1 + 0x36c) == 0)
     ) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x71c) + 0x310);
    *puVar1 = *puVar1 | 1;
  }
  return 1;
}



undefined4 FUN_00d4b780(int param_1)

{
  int iVar1;
  
  if (((((*(uint *)(param_1 + 0x788) & 0x80000) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x234) + 0x1c) != 0x40)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x234) + 0x18), iVar1 != 4)) &&
     (((iVar1 != 0x400 && (iVar1 != 0x40000)) && ((iVar1 != 0x400000 && (iVar1 != 0x800000)))))) {
    *(undefined4 *)(param_1 + 0x850) = 1;
    return 1;
  }
  return 1;
}



undefined4 FUN_00d4b7e0(int param_1,undefined4 param_2,int param_3,int *param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_retaddr;
  undefined4 uVar11;
  
  func_0x00e87f70();
  piVar5 = param_4;
  iVar4 = param_3;
  iVar6 = *(int *)(param_3 + 0x238);
  if ((iVar6 == 0) || (*(int *)(param_3 + 0x35c) != 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x731,"tls_parse_stoc_key_share");
    func_0x00d06d50(iVar4,0x50,0xc0103,0);
    return 0;
  }
  if ((uint)param_4[1] < 2) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x736,"tls_parse_stoc_key_share");
    func_0x00d06d50(iVar4,0x32,0x9f,0);
    return 0;
  }
  iVar8 = param_4[1] - 2;
  uVar1 = ((undefined1 *)*param_4)[1];
  uVar2 = *(undefined1 *)*param_4;
  *param_4 = *param_4 + 2;
  uVar3 = CONCAT11(uVar2,uVar1);
  uVar10 = (uint)uVar3;
  param_4[1] = iVar8;
  if ((param_5 & 0x800) != 0) {
    param_3 = 0;
    if (iVar8 == 0) {
      if (uVar10 == *(ushort *)(iVar4 + 0x35a)) {
        FUN_00bc4f50();
        uVar11 = 0x748;
      }
      else {
        func_0x00d15350(iVar4,&param_3,&stack0x00000000);
        uVar9 = 0;
        if (unaff_retaddr != 0) {
          do {
            if (uVar10 == *(ushort *)(param_3 + uVar9 * 2)) {
              if (((uVar9 < unaff_retaddr) &&
                  (iVar6 = func_0x00d16e30(iVar4,uVar10,0x20004), iVar6 != 0)) &&
                 (iVar6 = func_0x00d16ef0(iVar4,uVar10,0x304,0x304,0,0), iVar6 != 0)) {
                *(ushort *)(iVar4 + 0x35a) = uVar3;
                func_0x00bd5d50(*(undefined4 *)(iVar4 + 0x238));
                *(undefined4 *)(iVar4 + 0x238) = 0;
                return 1;
              }
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < unaff_retaddr);
        }
        FUN_00bc4f50();
        uVar11 = 0x756;
      }
      goto LAB_00d4ba35;
    }
    FUN_00bc4f50();
    uVar11 = 0x73f;
    goto LAB_00d4b88f;
  }
  if (uVar10 != *(ushort *)(param_3 + 0x35a)) {
    FUN_00bc4f50();
    uVar11 = 0x765;
    goto LAB_00d4ba35;
  }
  iVar8 = *(int *)(param_3 + 0x71c);
  if (*(int *)(param_3 + 0x36c) == 0) {
LAB_00d4ba0e:
    *(uint *)(iVar8 + 0x2d4) = uVar10;
  }
  else if (uVar10 != *(uint *)(iVar8 + 0x2d4)) {
    param_3 = func_0x00d09000(iVar8,0);
    if (param_3 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x777,"tls_parse_stoc_key_share");
      func_0x00d06d50(iVar4,0x50,0x80014,0);
      return 0;
    }
    FUN_00d07ed0(*(undefined4 *)(iVar4 + 0x71c));
    *(int *)(iVar4 + 0x71c) = param_3;
    iVar8 = param_3;
    goto LAB_00d4ba0e;
  }
  iVar8 = func_0x00d15430(*(undefined4 *)(iVar4 + 4),uVar10);
  if (iVar8 == 0) {
    FUN_00bc4f50();
    uVar11 = 0x781;
LAB_00d4ba35:
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar11,"tls_parse_stoc_key_share");
    func_0x00d06d50(iVar4,0x2f,0x6c,0);
    return 0;
  }
  iVar7 = func_0x00d2cd70(piVar5,&stack0x00000000);
  if ((iVar7 != 0) && (param_1 != 0)) {
    if (*(char *)(iVar8 + 0x24) != '\0') {
      iVar6 = func_0x00d27490(iVar4,iVar6,unaff_retaddr,param_1,1);
      if (iVar6 == 0) {
        return 0;
      }
      *(undefined1 *)(iVar4 + 0x359) = 1;
      return 1;
    }
    iVar8 = func_0x00bd6b60();
    if ((iVar8 != 0) && (iVar7 = func_0x00bd5870(iVar8,iVar6), 0 < iVar7)) {
      iVar7 = func_0x00d14520(iVar8,unaff_retaddr,param_1);
      if (iVar7 < 1) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x796,"tls_parse_stoc_key_share");
        func_0x00d06d50(iVar4,0x2f,0x132,0);
        func_0x00bd5d50(iVar8);
        return 0;
      }
      iVar6 = func_0x00d27620(iVar4,iVar6,iVar8,1);
      if (iVar6 == 0) {
        func_0x00bd5d50(iVar8);
        return 0;
      }
      *(int *)(iVar4 + 0x35c) = iVar8;
      *(undefined1 *)(iVar4 + 0x359) = 1;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x78f,"tls_parse_stoc_key_share");
    func_0x00d06d50(iVar4,0x50,0x128,0);
    func_0x00bd5d50(iVar8);
    return 0;
  }
  FUN_00bc4f50();
  uVar11 = 0x787;
LAB_00d4b88f:
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar11,"tls_parse_stoc_key_share");
  func_0x00d06d50(iVar4,0x32,0x9f,0);
  return 0;
}



undefined4 FUN_00d4bbe0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  
  if (param_2[1] != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x527,"tls_parse_stoc_maxfragmentlen");
    func_0x00d06d50(param_1,0x32,0x6e,0);
    return 0;
  }
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  param_2[1] = 0;
  if (bVar1 - 1 < 4) {
    if ((uint)bVar1 != (uint)*(byte *)(param_1 + 0x868)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x53a,"tls_parse_stoc_maxfragmentlen");
      func_0x00d06d50(param_1,0x2f,0xe8,0);
      return 0;
    }
    *(byte *)(*(int *)(param_1 + 0x71c) + 0x300) = bVar1;
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x52e,"tls_parse_stoc_maxfragmentlen");
  func_0x00d06d50(param_1,0x2f,0xe8,0);
  return 0;
}



undefined4 FUN_00d4bcd0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  byte *unaff_retaddr;
  
  func_0x00e87f70();
  uVar2 = param_3;
  iVar5 = *(int *)(param_3 + 4);
  if ((*(int *)(param_3 + 0x1a4) != 0) && (*(int *)(param_3 + 0x228) != 0)) {
    return 1;
  }
  if (*(int *)(iVar5 + 0x1b0) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x634,"tls_parse_stoc_npn");
    func_0x00d06d50(uVar2,0x6e,0x6e,0);
    return 0;
  }
  iVar4 = param_4[1];
  pbVar3 = (byte *)*param_4;
  do {
    pbVar1 = pbVar3;
    if (iVar4 == 0) {
      iVar5 = (**(code **)(iVar5 + 0x1b0))
                        (param_3,&stack0x00000000,&param_3,*param_4,param_4[1],
                         *(undefined4 *)(iVar5 + 0x1b4));
      if ((iVar5 == 0) && ((char)param_3 != '\0')) {
        FUN_00bbc580(*(undefined4 *)(uVar2 + 0x844),"ssl\\statem\\extensions_clnt.c",0x64b);
        _Dst = (void *)FUN_00bbc4f0(param_3 & 0xff,"ssl\\statem\\extensions_clnt.c",0x64c);
        *(void **)(uVar2 + 0x844) = _Dst;
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,unaff_retaddr,param_3 & 0xff);
          *(uint *)(uVar2 + 0x848) = param_3 & 0xff;
          *(undefined4 *)(uVar2 + 0x340) = 1;
          return 1;
        }
        *(undefined4 *)(uVar2 + 0x848) = 0;
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x64f,"tls_parse_stoc_npn");
        func_0x00d06d50(uVar2,0x50,0xc0103,0);
        return 0;
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x643,"tls_parse_stoc_npn");
      func_0x00d06d50(uVar2,0x28,0x6e,0);
      return 0;
    }
    if (iVar4 == 0) break;
    uVar6 = (uint)*pbVar1;
    if (iVar4 - 1U < uVar6) break;
    iVar4 = (iVar4 - 1U) - uVar6;
    pbVar3 = pbVar1 + uVar6 + 1;
    unaff_retaddr = pbVar1;
  } while (uVar6 != 0);
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x61e,"ssl_next_proto_validate");
  func_0x00d06d50(uVar2,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d4bec0(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (1 < (uint)param_2[1]) {
    uVar2 = *(undefined1 *)*param_2;
    uVar3 = ((undefined1 *)*param_2)[1];
    *param_2 = *param_2 + 2;
    uVar7 = (uint)CONCAT11(uVar2,uVar3);
    iVar1 = param_2[1] - 2;
    param_2[1] = iVar1;
    if (iVar1 == 0) {
      if (*(uint *)(param_1 + 0x86c) <= uVar7) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x804,"tls_parse_stoc_psk");
        func_0x00d06d50(param_1,0x2f,0x72,0);
        return 0;
      }
      if ((uVar7 == 0) && ((*(int *)(param_1 + 0x720) == 0 || (*(uint *)(param_1 + 0x86c) == 2)))) {
        *(undefined4 *)(param_1 + 0x36c) = 1;
        FUN_00d07ed0(*(int *)(param_1 + 0x720));
        *(undefined4 *)(param_1 + 0x720) = 0;
        return 1;
      }
      iVar1 = *(int *)(param_1 + 0x720);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x816,"tls_parse_stoc_psk");
        func_0x00d06d50(param_1,0x50,0xc0103,0);
        return 0;
      }
      if ((((*(int *)(param_1 + 0x9c) != 3) && (*(int *)(param_1 + 0x9c) != 7)) ||
          (*(int *)(*(int *)(param_1 + 0x71c) + 0x2f4) != 0)) || (*(int *)(iVar1 + 0x2f4) == 0)) {
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        uVar5 = *(undefined4 *)(iVar1 + 0x10);
        uVar6 = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(param_1 + 0x3b0) = uVar4;
        *(undefined4 *)(param_1 + 0x3b4) = uVar5;
        *(undefined4 *)(param_1 + 0x3b8) = uVar6;
        uVar4 = *(undefined4 *)(iVar1 + 0x1c);
        uVar5 = *(undefined4 *)(iVar1 + 0x20);
        uVar6 = *(undefined4 *)(iVar1 + 0x24);
        *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(iVar1 + 0x18);
        *(undefined4 *)(param_1 + 0x3c0) = uVar4;
        *(undefined4 *)(param_1 + 0x3c4) = uVar5;
        *(undefined4 *)(param_1 + 0x3c8) = uVar6;
        uVar4 = *(undefined4 *)(iVar1 + 0x2c);
        uVar5 = *(undefined4 *)(iVar1 + 0x30);
        uVar6 = *(undefined4 *)(iVar1 + 0x34);
        *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(iVar1 + 0x28);
        *(undefined4 *)(param_1 + 0x3d0) = uVar4;
        *(undefined4 *)(param_1 + 0x3d4) = uVar5;
        *(undefined4 *)(param_1 + 0x3d8) = uVar6;
        uVar4 = *(undefined4 *)(iVar1 + 0x3c);
        uVar5 = *(undefined4 *)(iVar1 + 0x40);
        uVar6 = *(undefined4 *)(iVar1 + 0x44);
        *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(iVar1 + 0x38);
        *(undefined4 *)(param_1 + 0x3e0) = uVar4;
        *(undefined4 *)(param_1 + 0x3e4) = uVar5;
        *(undefined4 *)(param_1 + 1000) = uVar6;
      }
      FUN_00d07ed0(*(undefined4 *)(param_1 + 0x71c));
      *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_1 + 0x720);
      *(undefined4 *)(param_1 + 0x720) = 0;
      *(undefined4 *)(param_1 + 0x36c) = 1;
      if (uVar7 != 0) {
        *(undefined4 *)(param_1 + 0x858) = 0;
      }
      return 1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x7ff,"tls_parse_stoc_psk");
  func_0x00d06d50(param_1,0x32,0x9f,0);
  return 0;
}



undefined4 FUN_00d4c070(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  
  piVar8 = param_2;
  piVar4 = param_1;
  uVar2 = param_1[0xbd] + param_1[0xce];
  if ((uVar2 != 0) && ((param_1[0xbd] == 0 || (param_1[0xce] == 0)))) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x4f7,"tls_parse_stoc_renegotiate");
    func_0x00d06d50(piVar4,0x50,0xc0103,0);
    return 0;
  }
  if (param_2[1] == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x4fd,"tls_parse_stoc_renegotiate");
    func_0x00d06d50(piVar4,0x32,0x150,0);
    return 0;
  }
  bVar3 = *(byte *)*param_2;
  uVar1 = param_2[1] - 1;
  *param_2 = *param_2 + 1;
  param_2[1] = uVar1;
  if (uVar1 != bVar3) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x503,"tls_parse_stoc_renegotiate");
    func_0x00d06d50(piVar4,0x32,0x150,0);
    return 0;
  }
  if (bVar3 != uVar2) {
    FUN_00bc4f50();
    uVar9 = 0x509;
    goto LAB_00d4c125;
  }
  iVar5 = func_0x00d170b0(param_2,&param_1,param_1[0xbd]);
  if (iVar5 == 0) {
LAB_00d4c262:
    FUN_00bc4f50();
    uVar9 = 0x510;
  }
  else {
    piVar7 = piVar4 + 0xad;
    piVar6 = param_1;
    uVar2 = piVar4[0xbd];
    while (uVar1 = uVar2 - 4, 3 < uVar2) {
      if (*piVar6 != *piVar7) goto LAB_00d4c18e;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
      uVar2 = uVar1;
    }
    if (uVar1 != 0xfffffffc) {
LAB_00d4c18e:
      if (((char)*piVar6 != (char)*piVar7) ||
         ((uVar1 != 0xfffffffd &&
          ((*(char *)((int)piVar6 + 1) != *(char *)((int)piVar7 + 1) ||
           ((uVar1 != 0xfffffffe &&
            ((*(char *)((int)piVar6 + 2) != *(char *)((int)piVar7 + 2) ||
             ((uVar1 != 0xffffffff && (*(char *)((int)piVar6 + 3) != *(char *)((int)piVar7 + 3))))))
            ))))))) goto LAB_00d4c262;
    }
    iVar5 = func_0x00d170b0(piVar8,&param_1,piVar4[0xce]);
    if (iVar5 != 0) {
      piVar8 = piVar4 + 0xbe;
      piVar7 = param_1;
      uVar2 = piVar4[0xce];
      while (uVar1 = uVar2 - 4, 3 < uVar2) {
        if (*piVar7 != *piVar8) goto LAB_00d4c20e;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
        uVar2 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00d4c23b:
        piVar4[0xcf] = 1;
        return 1;
      }
LAB_00d4c20e:
      if (((char)*piVar7 == (char)*piVar8) &&
         ((uVar1 == 0xfffffffd ||
          ((*(char *)((int)piVar7 + 1) == *(char *)((int)piVar8 + 1) &&
           ((uVar1 == 0xfffffffe ||
            ((*(char *)((int)piVar7 + 2) == *(char *)((int)piVar8 + 2) &&
             ((uVar1 == 0xffffffff || (*(char *)((int)piVar7 + 3) == *(char *)((int)piVar8 + 3))))))
            ))))))) goto LAB_00d4c23b;
    }
    FUN_00bc4f50();
    uVar9 = 0x517;
  }
LAB_00d4c125:
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar9,"tls_parse_stoc_renegotiate");
  func_0x00d06d50(piVar4,0x2f,0x151,0);
  return 0;
}



bool FUN_00d4c2b0(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0x4000) {
    if (*(int *)(param_1 + 0x890) == 0) {
      iVar2 = func_0x00d06570(*(int *)(param_1 + 0x6ac) + 0x44,~(param_3 >> 7) & 2,0x12,0);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x5ff,"tls_parse_stoc_sct");
        func_0x00d06d50(param_1,0x6e,0x6e,0);
        return false;
      }
      iVar2 = func_0x00d06610(param_1,param_3,0x12,*param_2,param_2[1],param_4,param_5);
      return iVar2 != 0;
    }
    iVar2 = param_2[1];
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x7e4),"ssl\\statem\\extensions_clnt.c",0x5e4);
    *(undefined4 *)(param_1 + 0x7e4) = 0;
    *(short *)(param_1 + 0x7e8) = (short)iVar2;
    if (iVar2 != 0) {
      iVar1 = FUN_00bbc4f0(iVar2,"ssl\\statem\\extensions_clnt.c",0x5e9);
      *(int *)(param_1 + 0x7e4) = iVar1;
      if (iVar1 == 0) {
        *(undefined2 *)(param_1 + 0x7e8) = 0;
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x5ec,"tls_parse_stoc_sct");
        func_0x00d06d50(param_1,0x50,0x8000f,0);
        return false;
      }
      iVar2 = func_0x00d1c8c0(param_2,iVar1,iVar2);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x5f0,"tls_parse_stoc_sct");
        func_0x00d06d50(param_1,0x50,0xc0103,0);
        return false;
      }
    }
  }
  return true;
}



undefined4 FUN_00d4c430(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2[1] != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x87f,"tls_parse_stoc_server_cert_type");
    func_0x00d06d50(param_1,0x32,0x6e,0);
    return 0;
  }
  uVar1 = *(undefined1 *)*param_2;
  *param_2 = (undefined1 *)*param_2 + 1;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x887) == '\x01') {
    if (*(int *)(param_1 + 0xec0) != 0) {
      iVar2 = func_0x00e87d3a(*(int *)(param_1 + 0xec0),uVar1,*(undefined4 *)(param_1 + 0xec4));
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x892,"tls_parse_stoc_server_cert_type");
        func_0x00d06d50(param_1,0x32,0x180,0);
        return 0;
      }
      *(undefined1 *)(param_1 + 0x886) = uVar1;
      return 1;
    }
    FUN_00bc4f50();
    uVar3 = 0x88d;
  }
  else {
    FUN_00bc4f50();
    uVar3 = 0x888;
  }
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",uVar3,"tls_parse_stoc_server_cert_type");
  func_0x00d06d50(param_1,0x32,0x6e,0);
  return 0;
}



undefined4 FUN_00d4c530(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7dc) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x54c,"tls_parse_stoc_server_name");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x551,"tls_parse_stoc_server_name");
    func_0x00d06d50(param_1,0x32,0x6e,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x36c) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x71c) + 0x2e0) != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x557,"tls_parse_stoc_server_name");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return 0;
    }
    uVar1 = func_0x00bbbc70(*(int *)(param_1 + 0x7dc),"ssl\\statem\\extensions_clnt.c",0x55a);
    *(undefined4 *)(*(int *)(param_1 + 0x71c) + 0x2e0) = uVar1;
    if (*(int *)(*(int *)(param_1 + 0x71c) + 0x2e0) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x55c,"tls_parse_stoc_server_name");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00d4c660(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x82c) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x82c))
                      (param_1,*param_2,param_2[1],*(undefined4 *)(param_1 + 0x830));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x596,"tls_parse_stoc_session_ticket");
      func_0x00d06d50(param_1,0x28,0x6e,0);
      return 0;
    }
  }
  iVar1 = func_0x00d16ec0(param_1);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x59b,"tls_parse_stoc_session_ticket");
    func_0x00d06d50(param_1,0x6e,0x6e,0);
    return 0;
  }
  if (param_2[1] != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x59f,"tls_parse_stoc_session_ticket");
    func_0x00d06d50(param_1,0x32,0x6e,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x800) = 1;
  return 1;
}



undefined4 FUN_00d4c740(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_3 == 0x4000) {
    return 1;
  }
  if (*(int *)(param_1 + 0x7e0) != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x5b7,"tls_parse_stoc_status_request");
    func_0x00d06d50(param_1,0x6e,0x6e,0);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  uVar2 = *(uint *)(piVar1[0x1d] + 0x28) & 8;
  if (((uVar2 != 0) || (*piVar1 < 0x304)) || (*piVar1 == 0x10000)) {
    if (*(int *)(param_2 + 4) != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x5bb,"tls_parse_stoc_status_request");
      func_0x00d06d50(param_1,0x32,0x6e,0);
      return 0;
    }
    if (uVar2 != 0) goto LAB_00d4c809;
  }
  if ((0x303 < *piVar1) && (*piVar1 != 0x10000)) {
    if (param_5 != 0) {
      return 1;
    }
    uVar3 = func_0x00d30c70(param_1,param_2);
    return uVar3;
  }
LAB_00d4c809:
  *(undefined4 *)(param_1 + 0x7ec) = 1;
  return 1;
}



undefined4 FUN_00d4c820(int param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (1 < (uint)param_2[1]) {
    uVar1 = *(undefined1 *)*param_2;
    uVar2 = ((undefined1 *)*param_2)[1];
    *param_2 = *param_2 + 2;
    iVar3 = param_2[1] - 2;
    param_2[1] = iVar3;
    if (iVar3 == 0) {
      if (CONCAT11(uVar1,uVar2) != 0x304) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x713,"tls_parse_stoc_supported_versions");
        func_0x00d06d50(param_1,0x2f,0x74,0);
        return 0;
      }
      if (param_3 != 0x800) {
        *(undefined4 *)(param_1 + 0x20) = 0x304;
        iVar3 = func_0x00d0d820(param_1,0x304);
        if (iVar3 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x71e,"tls_parse_stoc_supported_versions"
                         );
          func_0x00d06d50(param_1,0x50,0xc0103,0);
          return 0;
        }
      }
      return 1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x709,"tls_parse_stoc_supported_versions");
  func_0x00d06d50(param_1,0x32,0x9f,0);
  return 0;
}



undefined4 FUN_00d4c920(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = param_2[1];
  if (1 < uVar4) {
    uVar1 = ((undefined1 *)*param_2)[1];
    uVar2 = *(undefined1 *)*param_2;
    *param_2 = *param_2 + 2;
    param_2[1] = uVar4 - 2;
    if ((CONCAT11(uVar2,uVar1) == 2) && (1 < uVar4 - 2)) {
      uVar1 = ((undefined1 *)*param_2)[1];
      uVar2 = *(undefined1 *)*param_2;
      *param_2 = *param_2 + 2;
      param_2[1] = uVar4 - 4;
      if (uVar4 - 4 != 0) {
        cVar3 = *(char *)*param_2;
        *param_2 = *param_2 + 1;
        param_2[1] = uVar4 - 5;
        if (uVar4 - 5 == 0) {
          if (cVar3 != '\0') {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x6c7,"tls_parse_stoc_use_srtp");
            func_0x00d06d50(param_1,0x2f,0x160,0);
            return 0;
          }
          iVar5 = func_0x00d63220(param_1);
          if (iVar5 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x6ce,"tls_parse_stoc_use_srtp");
            func_0x00d06d50(param_1,0x32,0x167,0);
            return 0;
          }
          iVar7 = 0;
          iVar6 = func_0x00bd1830(iVar5);
          if (0 < iVar6) {
            do {
              iVar6 = func_0x00bd1a80(iVar5,iVar7);
              if (*(uint *)(iVar6 + 4) == (uint)CONCAT11(uVar2,uVar1)) {
                *(int *)(param_1 + 0x8a8) = iVar6;
                return 1;
              }
              iVar7 = iVar7 + 1;
              iVar6 = func_0x00bd1830(iVar5);
            } while (iVar7 < iVar6);
          }
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x6e0,"tls_parse_stoc_use_srtp");
          func_0x00d06d50(param_1,0x32,0x161,0);
          return 0;
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\extensions_clnt.c",0x6c1,"tls_parse_stoc_use_srtp");
  func_0x00d06d50(param_1,0x32,0x161,0);
  return 0;
}



void FUN_00d4d7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00d4d830(param_1,param_2,0,param_3,param_4,0,0,param_5,param_6);
  return;
}



undefined4 FUN_00d4d810(void)

{
  int in_stack_00000010;
  undefined4 *in_stack_00000014;
  
  if (in_stack_00000010 != 0) {
    *in_stack_00000014 = 0x32;
    return 0;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00d4d8bc)
// WARNING: Removing unreachable block (ram,0x00d4d8c4)
// WARNING: Removing unreachable block (ram,0x00d4d8cb)
// WARNING: Removing unreachable block (ram,0x00d4d8d0)
// WARNING: Removing unreachable block (ram,0x00d4d8d5)
// WARNING: Removing unreachable block (ram,0x00d4d8dd)
// WARNING: Removing unreachable block (ram,0x00d4d8f5)
// WARNING: Removing unreachable block (ram,0x00d4d90b)
// WARNING: Removing unreachable block (ram,0x00d4d925)
// WARNING: Removing unreachable block (ram,0x00d4d917)

undefined4 FUN_00d4d830(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000014;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined4 *in_stack_00000024;
  int in_stack_0000002c;
  undefined4 *in_stack_00000030;
  
  func_0x00e87f70();
  param_1 = 0;
  if ((in_stack_00000014 != (int *)0x0) &&
     ((piVar1 = in_stack_00000014, *in_stack_00000014 == 0 ||
      ((*in_stack_00000014 == 1 && (piVar1 = (int *)in_stack_00000014[8], piVar1 != (int *)0x0))))))
  {
    if ((((in_stack_0000001c & 0x1000) != 0) && (in_stack_0000002c != 0)) ||
       (iVar2 = func_0x00d03440(piVar1,&stack0x00000000,&param_1), iVar2 == 0)) {
      return 0;
    }
    *in_stack_00000020 = 0;
    *in_stack_00000024 = 0;
  }
  *in_stack_00000030 = 0x50;
  return 0xffffffff;
}



undefined4 FUN_00d4d950(void)

{
  int in_stack_00000014;
  undefined4 *in_stack_00000020;
  
  if (in_stack_00000014 != 0) {
    *in_stack_00000020 = 0x32;
    return 0;
  }
  return 1;
}



undefined4
FUN_00d4de90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,void *param_7,uint param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,int param_12,int param_13)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (param_12 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\ssl3_meth.c",0x1f,"ssl3_set_crypto_state");
    func_0x00bc5160(0x14,0xc0103,0);
    return 0xfffffffe;
  }
  iVar1 = func_0x00ba8070();
  *(int *)(param_1 + 0x9ac) = iVar1;
  if (iVar1 == 0) {
    FUN_00bc4f50();
    uVar4 = 0x24;
  }
  else {
    iVar2 = func_0x00bd46b0();
    *(int *)(param_1 + 0x9b8) = iVar2;
    if (iVar2 == 0) {
      FUN_00bc4f50();
      uVar4 = 0x2b;
    }
    else {
      iVar2 = func_0x00bd3dd0(iVar2,param_12,0);
      if (iVar2 < 1) {
        FUN_00bc4f50();
        uVar4 = 0x30;
      }
      else {
        if (param_13 != 0) {
          iVar2 = func_0x00c799a0(param_13);
          *(int *)(param_1 + 0x9bc) = iVar2;
          if (iVar2 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\record\\methods\\ssl3_meth.c",0x38,"ssl3_set_crypto_state");
            func_0x00bc5160(0x14,0x8e,0);
            return 0xfffffffe;
          }
        }
        iVar3 = func_0x00ba8630(iVar1,param_9,0,param_3,param_5,iVar3 == 1);
        if (iVar3 == 0) {
          FUN_00bc4f50();
          uVar4 = 0x3f;
        }
        else {
          uVar4 = func_0x00bc36d0(iVar1);
          iVar3 = func_0x00bc3bb0(uVar4);
          if ((iVar3 != 0) && (iVar3 = func_0x00d34ab0(param_1,iVar1,param_9,param_12), iVar3 == 0))
          {
            return 0xfffffffe;
          }
          if (param_8 < 0x41) {
            memcpy((void *)(param_1 + 0x9d8),param_7,param_8);
            return 1;
          }
          FUN_00bc4f50();
          uVar4 = 0x4e;
        }
      }
    }
  }
  func_0x00bc5050("ssl\\record\\methods\\ssl3_meth.c",uVar4,"ssl3_set_crypto_state");
  func_0x00bc5160(0x14,0xc0103,0);
  return 0xfffffffe;
}



undefined4 FUN_00d4e030(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  size_t _Size;
  uint uVar8;
  uint uVar9;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 *in_stack_0000004c;
  uint in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 uVar10;
  
  func_0x00e87f70();
  if (in_stack_00000054 != 1) {
    return 0;
  }
  iVar4 = in_stack_0000004c[0x26b];
  if (iVar4 == 0) {
    return 0;
  }
  iVar2 = func_0x00bc36d0(iVar4);
  if (iVar2 == 0) {
    return 0;
  }
  in_stack_00000054 = func_0x00bc3bb0(iVar2);
  uVar8 = in_stack_00000050;
  puVar1 = (uint *)(in_stack_00000050 + 8);
  uVar9 = *puVar1;
  uVar3 = func_0x00bc36e0(iVar4);
  iVar2 = in_stack_00000058;
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 == 1) {
    if (in_stack_00000058 == 0) goto LAB_00d4e14e;
LAB_00d4e160:
    uVar10 = *(undefined4 *)(uVar8 + 0x18);
    uVar7 = *(undefined4 *)(uVar8 + 0x14);
    if (in_stack_00000054 != 0) {
      iVar5 = func_0x00ba8660(iVar4,uVar7,&stack0x00000050,uVar10,uVar9);
      if (iVar5 == 0) {
        return 0;
      }
      *puVar1 = in_stack_00000050;
      if (iVar2 != 0) {
        return 1;
      }
      if (in_stack_0000005c == 0) {
        return 1;
      }
      *(undefined4 *)(in_stack_0000005c + 4) = 0;
      puVar6 = (undefined4 *)
               func_0x00bbfa70(&stack0x0000000c,"tls-mac",in_stack_0000005c,in_stack_00000060);
      in_stack_00000020 = *puVar6;
      in_stack_00000024 = puVar6[1];
      in_stack_00000028 = puVar6[2];
      in_stack_0000002c = puVar6[3];
      in_stack_00000030 = puVar6[4];
      puVar6 = (undefined4 *)func_0x00bbfa10(&stack0x0000000c);
      in_stack_00000034 = *puVar6;
      in_stack_00000038 = puVar6[1];
      in_stack_0000003c = puVar6[2];
      in_stack_00000040 = puVar6[3];
      in_stack_00000044 = puVar6[4];
      iVar4 = func_0x00ba8040(iVar4,&stack0x00000020);
      if (iVar4 != 0) {
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\ssl3_meth.c",0xaf,"ssl3_cipher");
      uVar10 = 0x50;
      goto LAB_00d4e134;
    }
  }
  else {
    if (in_stack_00000058 == 0) {
LAB_00d4e14e:
      if (uVar9 == 0) {
        return 0;
      }
      if (uVar9 % uVar3 != 0) {
        return 0;
      }
      goto LAB_00d4e160;
    }
    if (in_stack_00000054 != 0) goto LAB_00d4e160;
    _Size = uVar3 - uVar9 % uVar3;
    uVar9 = uVar9 + _Size;
    memset((void *)(*(int *)(in_stack_00000050 + 0x18) + *puVar1),0,_Size);
    *puVar1 = *puVar1 + _Size;
    *(char *)(*(int *)(in_stack_00000050 + 0x18) + -1 + uVar9) = (char)_Size + -1;
    uVar10 = *(undefined4 *)(in_stack_00000050 + 0x18);
    uVar7 = *(undefined4 *)(in_stack_00000050 + 0x14);
    uVar8 = in_stack_00000050;
  }
  iVar4 = func_0x00bc4050(iVar4,uVar7,uVar10,uVar9);
  if (0 < iVar4) {
    if (iVar2 != 0) {
      return 1;
    }
    uVar10 = func_0x00cf89f0(uVar8 + 8,*(undefined4 *)(uVar8 + 0xc),*(undefined4 *)(uVar8 + 0x14),
                             in_stack_0000005c,
                             -(uint)(in_stack_0000005c != 0) & in_stack_0000005c + 4U,uVar3,
                             in_stack_00000060,*in_stack_0000004c);
    return uVar10;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\record\\methods\\ssl3_meth.c",0xb6,"ssl3_cipher");
  uVar10 = 0x14;
LAB_00d4e134:
  func_0x00d34a80(in_stack_0000004c,uVar10,0xc0103,0);
  return 0;
}



void FUN_00d4e260(uint param_1,undefined4 param_2,int param_3,size_t param_4,undefined4 *param_5,
                 int param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined1 *puVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  uint in_stack_00000068;
  int in_stack_00000070;
  int in_stack_00000074;
  undefined1 *in_stack_00000078;
  int in_stack_0000007c;
  
  func_0x00e87f70();
  puVar5 = in_stack_00000078;
  iVar10 = in_stack_00000074;
  iVar11 = in_stack_00000070;
  in_stack_00000068 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_6 = in_stack_00000070;
  param_5 = (undefined4 *)(in_stack_00000070 + 0x994);
  param_3 = in_stack_00000070 + 0x9d8;
  param_2 = *(undefined4 *)(in_stack_00000070 + 0x9b8);
  uVar7 = func_0x00bc4130(param_2);
  if (0 < (int)uVar7) {
    sVar12 = (int)(0x30 / (ulonglong)uVar7) * uVar7;
    param_1 = uVar7;
    param_4 = sVar12;
    if (in_stack_0000007c == 0) {
      uVar8 = func_0x00bc36d0(*(undefined4 *)(iVar11 + 0x9ac));
      iVar9 = func_0x00bc3c70(uVar8);
      if ((iVar9 == 2) && (cVar6 = func_0x00d34ca0(param_2), sVar4 = param_1, cVar6 != '\0')) {
        memcpy(&stack0x0000001c,(void *)(iVar11 + 0x9d8),param_1);
        memcpy(&stack0x0000001c + sVar4,
               "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl3_set_crypto_state"
               ,param_4);
        iVar11 = sVar4 + param_4;
        uVar8 = param_5[1];
        *(undefined4 *)(&stack0x0000001c + iVar11) = *param_5;
        uVar2 = *(undefined4 *)(iVar10 + 0xc);
        uVar1 = *(undefined1 *)(iVar10 + 4);
        *(undefined4 *)(&stack0x00000020 + iVar11) = uVar8;
        uVar8 = *(undefined4 *)(iVar10 + 8);
        (&stack0x00000024)[iVar11] = uVar1;
        uVar3 = *(undefined4 *)(iVar10 + 0x18);
        (&stack0x00000025)[iVar11] = (char)((uint)uVar8 >> 8);
        (&stack0x00000026)[iVar11] = (char)uVar8;
        uVar8 = func_0x00bc36d0(param_2,puVar5,&param_1,&stack0x0000001c,uVar3,uVar8,uVar2);
        iVar11 = func_0x00ce7c80(uVar8);
        if (iVar11 < 1) goto LAB_00d4e512;
        goto LAB_00d4e4e4;
      }
    }
    iVar11 = func_0x00bd46b0();
    if (iVar11 != 0) {
      *puVar5 = *(undefined1 *)(iVar10 + 9);
      puVar5[1] = *(undefined1 *)(iVar10 + 8);
      iVar9 = func_0x00bd3f40(iVar11,param_2);
      if (((((0 < iVar9) && (iVar9 = func_0x00bd3e10(iVar11,param_3,param_1), 0 < iVar9)) &&
           (iVar9 = func_0x00bd3e10(iVar11,
                                    "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl3_set_crypto_state"
                                    ,sVar12), 0 < iVar9)) &&
          (((iVar9 = func_0x00bd3e10(iVar11,param_5,8), 0 < iVar9 &&
            (iVar9 = func_0x00bd3e10(iVar11,&stack0x00000003,1), 0 < iVar9)) &&
           ((iVar9 = func_0x00bd3e10(iVar11,puVar5,2), 0 < iVar9 &&
            ((iVar10 = func_0x00bd3e10(iVar11,*(undefined4 *)(iVar10 + 0x18),
                                       *(undefined4 *)(iVar10 + 8)), 0 < iVar10 &&
             (iVar10 = func_0x00bd3c80(iVar11,puVar5,0), 0 < iVar10)))))))) &&
         ((iVar10 = func_0x00bd3f40(iVar11,param_2), 0 < iVar10 &&
          ((((iVar10 = func_0x00bd3e10(iVar11,param_3,param_1), 0 < iVar10 &&
             (iVar10 = func_0x00bd3e10(iVar11,
                                       "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl3_set_crypto_state"
                                       ,sVar12), 0 < iVar10)) &&
            (iVar10 = func_0x00bd3e10(iVar11,puVar5,param_1), 0 < iVar10)) &&
           (iVar10 = func_0x00bd3c80(iVar11,puVar5,&param_4), 0 < iVar10)))))) {
        func_0x00bd45b0(iVar11);
LAB_00d4e4e4:
        FUN_00d33f80(param_6);
        FUN_008ab370();
        return;
      }
      func_0x00bd45b0(iVar11);
    }
  }
LAB_00d4e512:
  FUN_008ab370();
  return;
}



bool FUN_00d4e530(int param_1,char *param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x9a8) == 0) || (*param_2 != '\x17')) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  *param_4 = iVar1;
  iVar1 = func_0x00d368f0(param_1,param_3 + iVar1,-(uint)(iVar1 != 0) & 0x45c,0);
  return iVar1 != 0;
}



undefined4
FUN_00d4e580(int param_1,char *param_2,undefined4 param_3,undefined1 *param_4,int param_5,
            int *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x9a8) == 0) || (*param_2 != '\x17')) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(param_4 + 8) = 0;
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_4 + 0xc) = 0;
    *param_4 = 0x17;
    iVar3 = 7 - (*param_6 - 4U & 7);
    param_6[3] = iVar3;
    iVar1 = func_0x00bfad10(param_5,*param_6,param_6[2],0);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0x27d,"tls1_initialise_write_packets");
      func_0x00d34a80(param_1,0x50,0xc0103,0);
      return 0;
    }
    *param_7 = 1;
    iVar1 = func_0x00bfa8b0(param_5,iVar3,0);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0x282,"tls1_initialise_write_packets");
      func_0x00d34a80(param_1,0x50,0xc0103,0);
      return 0;
    }
    iVar1 = 1;
  }
  uVar2 = FUN_00d35d60(param_1,param_2,param_3,0,param_5 + iVar1 * 0x1c,param_6 + iVar1 * 7,param_7)
  ;
  return uVar2;
}



undefined4
FUN_00d4e6b0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
            undefined4 param_10,undefined4 param_11,int param_12,undefined4 param_13,int param_14)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
  func_0x00e87f70();
  bVar6 = param_2[5] == 1;
  if (param_3 == 3) {
    iVar1 = func_0x00ba8070();
    param_2[0x26b] = iVar1;
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0x25,"tls1_set_crypto_state");
      uVar7 = 0x80006;
    }
    else {
      iVar2 = func_0x00bd46b0();
      param_2[0x26e] = iVar2;
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0x2d,"tls1_set_crypto_state");
        uVar7 = 0xc0103;
      }
      else {
        if (param_14 != 0) {
          iVar2 = func_0x00c799a0(param_14);
          param_2[0x26f] = iVar2;
          if (iVar2 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0x34,"tls1_set_crypto_state");
            func_0x00bc5160(0x14,0x8e,0);
            return 0xfffffffe;
          }
        }
        uVar3 = func_0x00bc2510(param_10);
        if ((uVar3 & 0x200000) == 0) {
          if (param_12 == 0x357) {
            iVar2 = func_0x00bd6c10(*param_2,&DAT_010532a4,param_2[1]);
          }
          else {
            iVar2 = func_0x00bfd4c0(param_12,0,param_8,param_9);
          }
          if (iVar2 == 0) {
LAB_00d4e8a1:
            func_0x00bd5d50(iVar2);
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0x51,"tls1_set_crypto_state");
            func_0x00bc5160(0x14,0xc0103,0);
            return 0xfffffffe;
          }
          uVar7 = param_2[0x26e];
          uVar4 = FUN_00bc42b0(param_13,*param_2,param_2[1],iVar2,0);
          iVar5 = func_0x00c0c5e0(uVar7,0,uVar4);
          if (iVar5 < 1) goto LAB_00d4e8a1;
          func_0x00bd5d50(iVar2);
        }
        iVar2 = func_0x00bc3c70(param_10);
        if (iVar2 == 6) {
          iVar2 = func_0x00ba8630(iVar1,param_10,0,param_4,0,bVar6);
          if ((iVar2 == 0) || (iVar2 = func_0x00ba7910(iVar1,0x12,param_7,param_6), iVar2 < 1)) {
            FUN_00bc4f50();
            uVar7 = 0x5b;
            goto LAB_00d4e877;
          }
        }
        else {
          iVar2 = func_0x00bc3c70(param_10);
          if (iVar2 == 7) {
            iVar2 = func_0x00ba8630(iVar1,param_10,0,0,0,bVar6);
            if ((((iVar2 == 0) || (iVar2 = func_0x00ba7910(iVar1,9,0xc,0), iVar2 < 1)) ||
                (iVar2 = func_0x00ba7910(iVar1,0x11,param_11,0), iVar2 < 1)) ||
               ((iVar2 = func_0x00ba7910(iVar1,0x12,param_7,param_6), iVar2 < 1 ||
                (iVar2 = func_0x00ba8630(iVar1,0,0,param_4,0,bVar6), iVar2 == 0)))) {
              FUN_00bc4f50();
              uVar7 = 0x67;
              goto LAB_00d4e877;
            }
          }
          else {
            iVar2 = func_0x00ba8630(iVar1,param_10,0,param_4,param_6,bVar6);
            if (iVar2 == 0) {
              FUN_00bc4f50();
              uVar7 = 0x6c;
              goto LAB_00d4e877;
            }
          }
        }
        uVar3 = func_0x00bc2510(param_10);
        if ((((uVar3 & 0x200000) != 0) && (param_9 != 0)) &&
           (iVar2 = func_0x00ba7910(iVar1,0x17,param_9,param_8), iVar2 < 1)) {
          FUN_00bc4f50();
          uVar7 = 0x75;
LAB_00d4e877:
          func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",uVar7,"tls1_set_crypto_state");
          func_0x00bc5160(0x14,0xc0103,0);
          return 0xfffffffe;
        }
        uVar7 = func_0x00bc36d0(iVar1);
        iVar2 = func_0x00bc3bb0(uVar7);
        if ((iVar2 != 0) && (iVar2 = func_0x00d34ab0(param_2,iVar1,param_10,param_13), iVar2 == 0))
        {
          return 0xfffffffe;
        }
        iVar2 = param_2[3];
        if ((((iVar2 != 0x302) && (iVar2 != 0x303)) && (iVar2 != 0x100)) &&
           ((iVar2 != 0xfeff && (iVar2 != 0xfefd)))) {
          return 1;
        }
        uVar7 = func_0x00bc36d0(iVar1);
        iVar2 = func_0x00bc3c70(uVar7);
        uVar7 = 0;
        if (iVar2 != 2) {
          if (iVar2 != 6) {
            if (iVar2 == 7) {
              uVar7 = 8;
            }
            param_2[0x26d] = uVar7;
            return 1;
          }
          param_2[0x26d] = 8;
          return 1;
        }
        iVar1 = func_0x00bc3700(iVar1);
        if (-1 < iVar1) {
          iVar2 = 0;
          if (1 < iVar1) {
            iVar2 = iVar1;
          }
          param_2[0x26d] = iVar2;
          return 1;
        }
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0x8b,"tls1_set_crypto_state");
        uVar7 = 0x112;
      }
    }
    func_0x00d34a80(param_2,0x50,uVar7,0);
  }
  return 0xfffffffe;
}



void FUN_00d4eac0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uStack00000004;
  undefined1 *puStack00000010;
  int iStack00000014;
  int iStack00000018;
  int iStack0000001c;
  uint in_stack_00000024;
  int in_stack_00000028;
  uint in_stack_0000002c;
  undefined4 *in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000070;
  undefined1 uStack00000170;
  undefined1 uStack00000171;
  undefined2 uStack00000172;
  undefined2 uStack00000174;
  undefined2 uStack00000176;
  undefined4 *in_stack_00000320;
  int in_stack_00000324;
  uint in_stack_00000328;
  int in_stack_0000032c;
  int in_stack_00000330;
  int in_stack_00000334;
  undefined4 uVar10;
  
  func_0x00e87f70();
  iStack0000001c = 0;
  if (in_stack_00000328 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0xb5,"tls1_cipher");
    func_0x00d34a80(in_stack_00000320,0x50,0xc0103,0);
    FUN_008ab370();
    return;
  }
  in_stack_00000028 = in_stack_00000334;
  in_stack_00000030 = in_stack_00000320;
  iVar1 = func_0x00bc36d0(in_stack_00000320[0x26e]);
  if ((iVar1 != 0) && (iVar1 = func_0x00bc4130(in_stack_00000320[0x26e]), iVar1 < 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0xbd,"tls1_cipher");
    func_0x00d34a80(in_stack_00000320,0x50,0xc0103,0);
    FUN_008ab370();
    return;
  }
  iVar1 = in_stack_00000320[0x26b];
  if (iVar1 == 0) {
    FUN_00bc4f50();
    uVar10 = 0xc3;
LAB_00d4ebe5:
    func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",uVar10,"tls1_cipher");
    uVar10 = 0xc0103;
  }
  else {
    iVar2 = func_0x00bc36d0(iVar1);
    if ((in_stack_0000032c != 0) &&
       (((((iVar3 = in_stack_00000320[3], iVar3 == 0x302 || (iVar3 == 0x303)) || (iVar3 == 0x100))
         || ((iVar3 == 0xfeff || (iVar3 == 0xfefd)))) &&
        ((iVar3 = func_0x00bc3c70(iVar2), iVar3 == 2 &&
         ((iVar3 = func_0x00bc2520(iVar2), 1 < iVar3 && (uVar9 = 0, in_stack_00000328 != 0)))))))) {
      piVar8 = (int *)(in_stack_00000324 + 0x14);
      do {
        if (*piVar8 != piVar8[1]) {
          FUN_00bc4f50();
          uVar10 = 0xd5;
          goto LAB_00d4ebe5;
        }
        iVar4 = func_0x00bc5450(*in_stack_00000320,piVar8[1],iVar3,0);
        if (iVar4 < 1) {
          FUN_00bc4f50();
          uVar10 = 0xd9;
          goto LAB_00d4ebe5;
        }
        uVar9 = uVar9 + 1;
        piVar8 = piVar8 + 0xb;
      } while (uVar9 < in_stack_00000328);
    }
    if (iVar2 == 0) {
      FUN_00bc4f50();
      uVar10 = 0xe0;
      goto LAB_00d4ebe5;
    }
    iVar3 = func_0x00bc3bb0(iVar2);
    uVar10 = func_0x00bc36d0(iVar1);
    uVar9 = func_0x00bc3c60(uVar10);
    in_stack_00000024 = uVar9;
    if (uVar9 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",0xe9,"tls1_cipher");
      uVar10 = 0xba;
    }
    else {
      if (in_stack_00000328 < 2) {
LAB_00d4ed90:
        uStack00000004 = 0;
        if (in_stack_00000328 != 0) {
          puStack00000010 = &stack0x00000181;
          piVar8 = (int *)(in_stack_00000324 + 8);
          do {
            (&stack0x00000070)[uStack00000004] = *piVar8;
            uVar10 = func_0x00bc36d0(iVar1);
            uVar5 = func_0x00bc2510(uVar10);
            if ((uVar5 & 0x200000) == 0) {
              if (uVar9 == 1) {
                if (in_stack_0000032c == 0) goto LAB_00d4ef53;
              }
              else if (in_stack_0000032c == 0) {
LAB_00d4ef53:
                if (((&stack0x00000070)[uStack00000004] == 0) ||
                   ((uint)(&stack0x00000070)[uStack00000004] % uVar9 != 0)) goto LAB_00d4ec03;
              }
              else if (iVar3 == 0) {
                uVar5 = (&stack0x00000070)[uStack00000004];
                in_stack_0000002c = uVar9 - uVar5 % uVar9;
                if (0x100 < in_stack_0000002c) {
                  FUN_00bc4f50();
                  uVar10 = 0x129;
                  goto LAB_00d4ebe5;
                }
                uVar7 = uVar5;
                if (uVar5 < uVar5 + in_stack_0000002c) {
                  do {
                    *(char *)(uVar7 + piVar8[4]) = (char)in_stack_0000002c + -1;
                    uVar7 = uVar7 + 1;
                    uVar5 = (&stack0x00000070)[uStack00000004];
                    in_stack_00000320 = in_stack_00000030;
                    uVar9 = in_stack_00000024;
                  } while (uVar7 < uVar5 + in_stack_0000002c);
                }
                *piVar8 = *piVar8 + in_stack_0000002c;
                (&stack0x00000070)[uStack00000004] = uVar5 + in_stack_0000002c;
              }
            }
            else {
              puVar6 = (undefined4 *)(puStack00000010 + -9);
              if (in_stack_00000320[2] == 0) {
                uVar10 = in_stack_00000320[0x266];
                *puVar6 = in_stack_00000320[0x265];
                *(undefined4 *)(puStack00000010 + -5) = uVar10;
                iVar4 = FUN_00d33f80(in_stack_00000320);
                if (iVar4 == 0) goto LAB_00d4ec03;
              }
              else {
                uStack00000171 = (undefined1)*(undefined2 *)(in_stack_00000320 + 8);
                uStack00000170 = (undefined1)((ushort)*(undefined2 *)(in_stack_00000320 + 8) >> 8);
                uStack00000172 = (undefined2)*(undefined4 *)((int)in_stack_00000320 + 0x996);
                uStack00000174 =
                     (undefined2)((uint)*(undefined4 *)((int)in_stack_00000320 + 0x996) >> 0x10);
                uStack00000176 = *(undefined2 *)((int)in_stack_00000320 + 0x99a);
                *puVar6 = CONCAT22(uStack00000172,CONCAT11(uStack00000171,uStack00000170));
                *(uint *)(puStack00000010 + -5) = CONCAT22(uStack00000176,uStack00000174);
              }
              uVar10 = in_stack_00000320[3];
              puStack00000010[-1] = (char)piVar8[-1];
              *puStack00000010 = (char)((uint)uVar10 >> 8);
              puStack00000010[1] = (char)uVar10;
              iVar4 = *piVar8;
              puStack00000010[2] = (char)((uint)iVar4 >> 8);
              puStack00000010[3] = (char)iVar4;
              iStack0000001c = func_0x00ba7910(iVar1,0x16,0xd,puVar6);
              if (iStack0000001c < 1) {
                FUN_00bc4f50();
                uVar10 = 0x117;
                goto LAB_00d4ebe5;
              }
              if (in_stack_0000032c == 0) goto LAB_00d4ef53;
              (&stack0x00000070)[uStack00000004] =
                   (&stack0x00000070)[uStack00000004] + iStack0000001c;
              *piVar8 = *piVar8 + iStack0000001c;
            }
            puStack00000010 = puStack00000010 + 0xd;
            uStack00000004 = uStack00000004 + 1;
            piVar8 = piVar8 + 0xb;
          } while (uStack00000004 < in_stack_00000328);
        }
        if (in_stack_00000328 < 2) {
LAB_00d4f06b:
          if ((in_stack_00000320[2] == 0) && (in_stack_00000320[0x288] != 0)) {
            uVar10 = 0;
            if ((in_stack_0000032c != 0) && (in_stack_00000320[0x286] == 0)) {
              uVar10 = 1;
            }
            iVar4 = func_0x00ba7910(iVar1,0x2a,uVar10,in_stack_00000320 + 0x265);
            if (iVar4 < 1) {
              FUN_00bc4f50();
              uVar10 = 0x160;
              goto LAB_00d4ebe5;
            }
          }
          if (iVar3 == 0) {
            piVar8 = (int *)(in_stack_00000324 + 0x14);
            uVar7 = func_0x00bc4050(iVar1,*piVar8,*(undefined4 *)(in_stack_00000324 + 0x18),
                                    in_stack_00000070);
            uVar10 = func_0x00bc36d0(iVar1);
            uVar5 = func_0x00bc2510(uVar10);
            if ((uVar5 & 0x100000) == 0) {
              uVar7 = (uint)(uVar7 == 0);
            }
            else {
              uVar7 = uVar7 >> 0x1f;
            }
            if (((uVar7 == 0) && (in_stack_0000032c == 0)) && (in_stack_00000328 != 0)) {
              puStack00000010 = (undefined1 *)0x0;
              iVar1 = in_stack_00000330;
              do {
                iVar3 = func_0x00bc3c70(iVar2);
                if (iVar3 == 6) {
                  *piVar8 = *piVar8 + 8;
                  piVar8[1] = piVar8[1] + 8;
                  piVar8[-3] = piVar8[-3] + -8;
                }
                else {
                  iVar3 = func_0x00bc3c70(iVar2);
                  if (iVar3 == 7) {
                    *piVar8 = *piVar8 + 8;
                    piVar8[1] = piVar8[1] + 8;
                    piVar8[-3] = piVar8[-3] + -8;
                  }
                  else if ((uVar9 != 1) &&
                          (((iVar3 = in_stack_00000320[3], iVar3 == 0x302 || (iVar3 == 0x303)) ||
                           ((iVar3 == 0x100 || ((iVar3 == 0xfeff || (iVar3 == 0xfefd)))))))) {
                    if ((uint)piVar8[-3] < uVar9) break;
                    *piVar8 = *piVar8 + uVar9;
                    piVar8[1] = piVar8[1] + uVar9;
                    piVar8[-2] = piVar8[-2] - uVar9;
                    piVar8[-3] = piVar8[-3] - uVar9;
                  }
                }
                if (in_stack_00000330 == 0) {
                  iStack00000018 = 0;
                  iStack00000014 = 0;
                }
                else {
                  iStack00000018 = iVar1 + 4;
                  iStack00000014 = iVar1;
                }
                uVar10 = *in_stack_00000320;
                uVar5 = func_0x00bc2510(iVar2);
                iVar3 = in_stack_00000028;
                if (iStack0000001c != 0) {
                  iVar3 = iStack0000001c;
                }
                iVar3 = func_0x00cf8a70(piVar8 + -3,piVar8[-2],*piVar8,iStack00000014,iStack00000018
                                        ,uVar9,iVar3,uVar5 >> 0x15 & 1,uVar10);
                if (iVar3 == 0) break;
                piVar8 = piVar8 + 0xb;
                puStack00000010 = (undefined1 *)((int)puStack00000010 + 1);
                iVar1 = iVar1 + 8;
              } while (puStack00000010 < in_stack_00000328);
            }
            goto LAB_00d4ec03;
          }
          if (in_stack_00000328 < 2) {
            iVar3 = func_0x00ba8660(iVar1,*(undefined4 *)(in_stack_00000324 + 0x14),&stack0x00000024
                                    ,*(undefined4 *)(in_stack_00000324 + 0x18),in_stack_00000070);
            if ((iVar3 == 0) ||
               (*(uint *)(in_stack_00000324 + 8) = in_stack_00000024, in_stack_0000032c != 0))
            goto LAB_00d4ec03;
            iVar3 = func_0x00bc3c70(iVar2);
            if (iVar3 == 6) {
              *(int *)(in_stack_00000324 + 0x14) = *(int *)(in_stack_00000324 + 0x14) + 8;
              *(int *)(in_stack_00000324 + 0x18) = *(int *)(in_stack_00000324 + 0x18) + 8;
            }
            else {
              iVar2 = func_0x00bc3c70(iVar2);
              if (iVar2 == 7) {
                *(int *)(in_stack_00000324 + 0x14) = *(int *)(in_stack_00000324 + 0x14) + 8;
                *(int *)(in_stack_00000324 + 0x18) = *(int *)(in_stack_00000324 + 0x18) + 8;
              }
              else if ((uVar9 != 1) &&
                      ((((iVar2 = in_stack_00000320[3], iVar2 == 0x302 || (iVar2 == 0x303)) ||
                        (iVar2 == 0x100)) || ((iVar2 == 0xfeff || (iVar2 == 0xfefd)))))) {
                *(int *)(in_stack_00000324 + 0x14) = *(int *)(in_stack_00000324 + 0x14) + uVar9;
                *(int *)(in_stack_00000324 + 0x18) = *(int *)(in_stack_00000324 + 0x18) + uVar9;
                *(int *)(in_stack_00000324 + 0xc) = *(int *)(in_stack_00000324 + 0xc) - uVar9;
              }
            }
            if (in_stack_00000330 == 0) goto LAB_00d4ec03;
            *(undefined4 *)(in_stack_00000330 + 4) = 0;
            puVar6 = (undefined4 *)
                     func_0x00bbfa70(&stack0x0000005c,"tls-mac",in_stack_00000330,in_stack_00000028)
            ;
            in_stack_00000034 = *puVar6;
            in_stack_00000038 = puVar6[1];
            in_stack_0000003c = puVar6[2];
            in_stack_00000040 = puVar6[3];
            in_stack_00000044 = puVar6[4];
            puVar6 = (undefined4 *)func_0x00bbfa10(&stack0x0000005c);
            in_stack_00000048 = *puVar6;
            in_stack_0000004c = puVar6[1];
            in_stack_00000050 = puVar6[2];
            in_stack_00000054 = puVar6[3];
            in_stack_00000058 = puVar6[4];
            iVar1 = func_0x00ba8040(iVar1,&stack0x00000034);
            if (iVar1 != 0) goto LAB_00d4ec03;
            FUN_00bc4f50();
            uVar10 = 0x194;
          }
          else {
            FUN_00bc4f50();
            uVar10 = 0x16a;
          }
          goto LAB_00d4ebe5;
        }
        uVar5 = 0;
        puVar6 = (undefined4 *)(in_stack_00000324 + 0x14);
        do {
          uVar10 = *puVar6;
          puVar6 = puVar6 + 0xb;
          *(undefined4 *)(&stack0x000000f0 + uVar5 * 4) = uVar10;
          uVar5 = uVar5 + 1;
        } while (uVar5 < in_stack_00000328);
        iVar4 = func_0x00ba7910(iVar1,0x22,in_stack_00000328,&stack0x000000f0);
        if (iVar4 < 1) {
          FUN_00bc4f50();
          uVar10 = 0x142;
        }
        else {
          uVar5 = 0;
          puVar6 = (undefined4 *)(in_stack_00000324 + 0x18);
          do {
            uVar10 = *puVar6;
            puVar6 = puVar6 + 0xb;
            *(undefined4 *)(&stack0x000000f0 + uVar5 * 4) = uVar10;
            uVar5 = uVar5 + 1;
          } while (uVar5 < in_stack_00000328);
          iVar4 = func_0x00ba7910(iVar1,0x23,in_stack_00000328,&stack0x000000f0);
          if ((0 < iVar4) &&
             (iVar4 = func_0x00ba7910(iVar1,0x24,in_stack_00000328,&stack0x00000070), 0 < iVar4))
          goto LAB_00d4f06b;
          FUN_00bc4f50();
          uVar10 = 0x14d;
        }
      }
      else {
        uVar10 = func_0x00bc36d0(iVar1);
        uVar5 = func_0x00bc2510(uVar10);
        if ((uVar5 & 0x800000) != 0) goto LAB_00d4ed90;
        FUN_00bc4f50();
        uVar10 = 0xf4;
      }
      func_0x00bc5050("ssl\\record\\methods\\tls1_meth.c",uVar10,"tls1_cipher");
      uVar10 = 0x196;
    }
  }
  func_0x00d34a80(in_stack_00000320,0x50,uVar10,0);
LAB_00d4ec03:
  FUN_008ab370();
  return;
}



void FUN_00d4f390(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined1 uStack00000054;
  undefined1 uStack00000055;
  undefined1 uStack00000056;
  undefined1 uStack00000057;
  undefined1 in_stack_00000058;
  undefined1 uStack0000005c;
  undefined1 uStack0000005d;
  undefined2 uStack0000005e;
  undefined2 uStack00000060;
  undefined2 uStack00000062;
  uint in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000070;
  undefined4 in_stack_00000074;
  int in_stack_00000078;
  
  func_0x00e87f70();
  iVar6 = in_stack_00000070;
  iVar1 = in_stack_0000006c;
  in_stack_00000064 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar8 = 0;
  iVar7 = *(int *)(in_stack_0000006c + 0x9b8);
  puVar5 = (undefined4 *)(in_stack_0000006c + 0x994);
  param_3 = in_stack_00000074;
  iVar3 = func_0x00bc4130(iVar7);
  if (iVar3 < 0) {
    FUN_008ab370();
    return;
  }
  param_2 = iVar3;
  if ((*(int *)(iVar1 + 0xa1c) == 0) &&
     ((iVar8 = func_0x00bd46b0(), iVar8 == 0 ||
      (iVar3 = func_0x00bd3f20(iVar8,iVar7), iVar7 = iVar8, iVar3 == 0)))) goto LAB_00d4f5a0;
  if (*(int *)(iVar1 + 8) == 0) {
    if ((*(int *)(iVar1 + 0xa20) != 0) && (iVar3 = func_0x00bd4390(iVar7,4,0,puVar5), iVar3 < 1))
    goto LAB_00d4f5a0;
    if (*(int *)(iVar1 + 8) != 0) goto LAB_00d4f44e;
    in_stack_0000004c = *puVar5;
    in_stack_00000050 = *(undefined4 *)(iVar1 + 0x998);
  }
  else {
LAB_00d4f44e:
    uStack0000005d = (undefined1)*(undefined2 *)(iVar1 + 0x20);
    uStack0000005c = (undefined1)((ushort)*(undefined2 *)(iVar1 + 0x20) >> 8);
    uStack0000005e = (undefined2)*(undefined4 *)(iVar1 + 0x996);
    uStack00000060 = (undefined2)((uint)*(undefined4 *)(iVar1 + 0x996) >> 0x10);
    uStack00000062 = *(undefined2 *)(iVar1 + 0x99a);
    in_stack_0000004c = CONCAT22(uStack0000005e,CONCAT11(uStack0000005d,uStack0000005c));
    in_stack_00000050 = CONCAT22(uStack00000062,uStack00000060);
  }
  uStack00000054 = *(undefined1 *)(iVar6 + 4);
  uStack00000055 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0xc) >> 8);
  uStack00000056 = (undefined1)*(undefined4 *)(iVar1 + 0xc);
  uStack00000057 = (undefined1)((uint)*(undefined4 *)(iVar6 + 8) >> 8);
  in_stack_00000058 = (undefined1)*(undefined4 *)(iVar6 + 8);
  if ((in_stack_00000078 == 0) && (*(int *)(iVar1 + 0xa18) == 0)) {
    uVar4 = func_0x00bc36d0(*(undefined4 *)(iVar1 + 0x9ac));
    iVar3 = func_0x00bc3c70(uVar4);
    if ((iVar3 == 2) && (cVar2 = func_0x00d34ca0(iVar7), cVar2 != '\0')) {
      puVar5 = (undefined4 *)func_0x00bbfad0(&stack0x00000038,"tls-data-size",iVar6 + 0xc);
      param_4 = *puVar5;
      param_5 = puVar5[1];
      param_6 = puVar5[2];
      param_7 = puVar5[3];
      param_8 = puVar5[4];
      puVar5 = (undefined4 *)func_0x00bbfa10(&stack0x00000038);
      param_9 = *puVar5;
      param_10 = puVar5[1];
      param_11 = puVar5[2];
      param_12 = puVar5[3];
      param_13 = puVar5[4];
      uVar4 = FUN_00baaa40(iVar7,&param_4);
      iVar3 = func_0x00bed170(uVar4);
      if (iVar3 == 0) goto LAB_00d4f5a0;
    }
  }
  iVar3 = func_0x00c0c610(iVar7,&stack0x0000004c,0xd);
  if ((((0 < iVar3) &&
       (iVar6 = func_0x00c0c610(iVar7,*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 8)),
       0 < iVar6)) && (iVar7 = func_0x00c0c230(iVar7,param_3,&param_2), 0 < iVar7)) &&
     (*(int *)(iVar1 + 8) == 0)) {
    FUN_00d33f80(iVar1);
  }
LAB_00d4f5a0:
  func_0x00bd45b0(iVar8);
  FUN_008ab370();
  return;
}



undefined4 FUN_00d4f5c0(void)

{
  uint uVar1;
  size_t _Size;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 *in_stack_00000044;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  void *in_stack_00000054;
  size_t in_stack_00000058;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000070;
  
  func_0x00e87f70();
  _Size = in_stack_00000058;
  puVar5 = in_stack_00000044;
  in_stack_00000044 = (undefined4 *)(uint)(in_stack_00000044[5] == 1);
  iVar2 = FUN_00bbc4f0(in_stack_00000058,"ssl\\record\\methods\\tls13_meth.c",0x21);
  puVar5[0x289] = iVar2;
  if (iVar2 == 0) {
    return 0xfffffffe;
  }
  iVar2 = FUN_00bbc4f0(_Size,"ssl\\record\\methods\\tls13_meth.c",0x25);
  puVar5[0x28a] = iVar2;
  if (iVar2 == 0) {
    return 0xfffffffe;
  }
  memcpy((void *)puVar5[0x289],in_stack_00000054,_Size);
  uVar4 = in_stack_00000064;
  iVar2 = func_0x00bc3ef0(in_stack_00000064,&DAT_00ff41a0);
  if (((iVar2 != 0) && (in_stack_0000006c == 0x357)) && (in_stack_00000070 != 0)) {
    iVar2 = func_0x00ce2e00(*puVar5,&DAT_010532a4,puVar5[1]);
    if (iVar2 != 0) {
      iVar3 = func_0x00c74bb0(iVar2);
      puVar5[0x26c] = iVar3;
      if (iVar3 != 0) {
        FUN_00ce2e30(iVar2);
        uVar4 = FUN_00bc42b0(in_stack_00000070,0);
        puVar5 = (undefined4 *)func_0x00bbfb90(&stack0x00000004,"digest",uVar4);
        in_stack_00000018 = *puVar5;
        in_stack_0000001c = puVar5[1];
        in_stack_00000020 = puVar5[2];
        in_stack_00000024 = puVar5[3];
        in_stack_00000028 = puVar5[4];
        puVar5 = (undefined4 *)func_0x00bbfa10(&stack0x00000004);
        in_stack_0000002c = *puVar5;
        in_stack_00000030 = puVar5[1];
        in_stack_00000034 = puVar5[2];
        in_stack_00000038 = puVar5[3];
        in_stack_0000003c = puVar5[4];
        iVar2 = func_0x00c74c80(iVar3,in_stack_0000004c,in_stack_00000050,&stack0x00000018);
        if (iVar2 != 0) {
          return 1;
        }
        FUN_00bc4f50();
        uVar4 = 0x39;
        goto LAB_00d4f7fc;
      }
    }
    FUN_00ce2e30(iVar2);
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x31,"tls13_set_crypto_state");
    func_0x00bc5160(0x14,0xc0103,0);
    return 0xfffffffe;
  }
  iVar2 = func_0x00ba8070();
  puVar5[0x26b] = iVar2;
  if (iVar2 == 0) {
    FUN_00bc4f50();
    uVar4 = 0x41;
  }
  else {
    iVar3 = func_0x00bc3c70(uVar4);
    uVar1 = (uint)in_stack_00000044;
    iVar6 = func_0x00ba8630(iVar2,uVar4,0,0,0,in_stack_00000044);
    if ((((0 < iVar6) && (iVar6 = func_0x00ba7910(iVar2,9,_Size,0), 0 < iVar6)) &&
        ((iVar3 != 7 || (iVar3 = func_0x00ba7910(iVar2,0x11,in_stack_00000068,0), 0 < iVar3)))) &&
       (iVar2 = func_0x00ba8630(iVar2,0,0,in_stack_0000004c,0,uVar1), 0 < iVar2)) {
      return 1;
    }
    FUN_00bc4f50();
    uVar4 = 0x4e;
  }
LAB_00d4f7fc:
  func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",uVar4,"tls13_set_crypto_state");
  func_0x00bc5160(0x14,0xc0103,0);
  return 0xfffffffe;
}



void FUN_00d4f830(int param_1,uint param_2,void *param_3,int param_4,int param_5)

{
  size_t _Size;
  void *_Dst;
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_stack_00000080;
  int in_stack_00000088;
  int *in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  
  func_0x00e87f70();
  piVar1 = in_stack_0000008c;
  iVar5 = in_stack_00000088;
  in_stack_00000080 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (in_stack_00000090 != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x69,"tls13_cipher");
    func_0x00d34a80(iVar5,0x50,0xc0103,0);
    FUN_008ab370();
    return;
  }
  param_3 = *(void **)(in_stack_00000088 + 0xa24);
  iVar4 = *(int *)(in_stack_00000088 + 0x9ac);
  _Dst = *(void **)(in_stack_00000088 + 0xa28);
  if ((iVar4 == 0) && (*(int *)(in_stack_00000088 + 0x9b0) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x72,"tls13_cipher");
    func_0x00d34a80(iVar5,0x50,0xc0103,0);
    FUN_008ab370();
    return;
  }
  if (in_stack_0000008c[1] == 0x15) {
    func_0x008ab0e6(in_stack_0000008c[5],in_stack_0000008c[6],in_stack_0000008c[2]);
    piVar1[6] = piVar1[5];
    FUN_008ab370();
    return;
  }
  if (*(int *)(in_stack_00000088 + 0x9b0) == 0) {
    uVar2 = func_0x00bc3700(iVar4);
    if ((int)uVar2 < 0) {
      param_2 = uVar2;
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x8a,"tls13_cipher");
      func_0x00d34a80(iVar5,0x50,0xc0103,0);
      FUN_008ab370();
      return;
    }
  }
  else {
    uVar2 = func_0x00c74b90(*(int *)(in_stack_00000088 + 0x9b0));
  }
  param_2 = uVar2;
  if (in_stack_00000094 == 0) {
    if ((uint)piVar1[2] < *(int *)(iVar5 + 0xa34) + 1U) goto LAB_00d4fe72;
    piVar1[2] = piVar1[2] - *(int *)(iVar5 + 0xa34);
  }
  if (uVar2 < 8) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x9d,"tls13_cipher");
    func_0x00d34a80(iVar5,0x50,0xc0103,0);
  }
  else {
    _Size = uVar2 - 8;
    memcpy(_Dst,param_3,_Size);
    *(byte *)(_Size + (int)_Dst) = *(byte *)(_Size + (int)param_3) ^ *(byte *)(iVar5 + 0x994);
    *(byte *)((uVar2 - 7) + (int)_Dst) =
         *(byte *)(iVar5 + 0x995) ^ *(byte *)((uVar2 - 7) + (int)param_3);
    *(byte *)((uVar2 - 6) + (int)_Dst) =
         *(byte *)(iVar5 + 0x996) ^ *(byte *)((uVar2 - 6) + (int)param_3);
    *(byte *)((uVar2 - 5) + (int)_Dst) =
         *(byte *)(iVar5 + 0x997) ^ *(byte *)((uVar2 - 5) + (int)param_3);
    *(byte *)((uVar2 - 4) + (int)_Dst) =
         *(byte *)(iVar5 + 0x998) ^ *(byte *)((uVar2 - 4) + (int)param_3);
    *(byte *)((uVar2 - 3) + (int)_Dst) =
         *(byte *)(iVar5 + 0x999) ^ *(byte *)((uVar2 - 3) + (int)param_3);
    *(byte *)((uVar2 - 2) + (int)_Dst) =
         *(byte *)(iVar5 + 0x99a) ^ *(byte *)((uVar2 - 2) + (int)param_3);
    *(byte *)((uVar2 - 1) + (int)_Dst) =
         *(byte *)(iVar5 + 0x99b) ^ *(byte *)((uVar2 - 1) + (int)param_3);
    iVar3 = FUN_00d33f80(iVar5);
    if (iVar3 != 0) {
      iVar3 = func_0x00bfad10(&stack0x0000001c,&stack0x00000038,5,0);
      if (((((iVar3 == 0) ||
            (iVar3 = func_0x00bfae30(&stack0x0000001c,piVar1[1],piVar1[1] >> 0x1f,1), iVar3 == 0))
           || (iVar3 = func_0x00bfae30(&stack0x0000001c,*piVar1,*piVar1 >> 0x1f,2), iVar3 == 0)) ||
          ((iVar3 = func_0x00bfae30(&stack0x0000001c,*(int *)(iVar5 + 0xa34) + piVar1[2],0,2),
           iVar3 == 0 || (iVar3 = func_0x00bfab20(&stack0x0000001c,&param_4), iVar3 == 0)))) ||
         ((param_4 != 5 || (iVar3 = func_0x00bfaa70(&stack0x0000001c), iVar3 == 0)))) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0xb2,"tls13_cipher");
        func_0x00d34a80(iVar5,0x50,0xc0103,0);
        func_0x00bfa8e0(&stack0x0000001c);
      }
      else if (*(int *)(iVar5 + 0x9b0) == 0) {
        iVar3 = func_0x00bc36d0(iVar4);
        if (iVar3 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0xd2,"tls13_cipher");
          func_0x00d34a80(iVar5,0x50,0xc0103,0);
        }
        else {
          param_2 = func_0x00bc3c70(iVar3);
          iVar3 = in_stack_00000094;
          iVar6 = func_0x00ba8630(iVar4,0,0,0,_Dst,in_stack_00000094);
          if ((iVar6 < 1) ||
             ((iVar3 == 0 &&
              (iVar6 = func_0x00ba7910(iVar4,0x11,*(undefined4 *)(iVar5 + 0xa34),
                                       piVar1[5] + piVar1[2]), iVar6 < 1)))) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0xdb,"tls13_cipher");
            func_0x00d34a80(iVar5,0x50,0xc0103,0);
          }
          else if ((((param_2 != 7) ||
                    (iVar6 = func_0x00ba8660(iVar4,0,&param_1,0,piVar1[2]), 0 < iVar6)) &&
                   (iVar6 = func_0x00ba8660(iVar4,0,&param_1,&stack0x00000038,5), 0 < iVar6)) &&
                  (((iVar6 = func_0x00ba8660(iVar4,piVar1[5],&param_1,piVar1[6],piVar1[2]),
                    0 < iVar6 &&
                    (iVar6 = func_0x00ba8610(iVar4,piVar1[5] + param_1,&param_5), 0 < iVar6)) &&
                   ((param_5 + param_1 == piVar1[2] && (iVar3 != 0)))))) {
            iVar4 = func_0x00ba7910(iVar4,0x10,*(undefined4 *)(iVar5 + 0xa34),piVar1[5] + piVar1[2])
            ;
            if (iVar4 < 1) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0xf2,"tls13_cipher");
              func_0x00d34a80(iVar5,0x50,0xc0103,0);
            }
            else {
              piVar1[2] = piVar1[2] + *(int *)(iVar5 + 0xa34);
            }
          }
        }
      }
      else {
        iVar4 = func_0x00c74a90(*(int *)(iVar5 + 0x9b0));
        if (((iVar4 == 0) || (iVar3 = func_0x00c74cd0(iVar4,_Dst,param_2), iVar3 == 0)) ||
           ((iVar3 = func_0x00c74cd0(iVar4,&stack0x00000038,5), iVar3 == 0 ||
            ((iVar3 = func_0x00c74cd0(iVar4,piVar1[6],piVar1[2]), iVar3 == 0 ||
             (iVar3 = func_0x00c74c60(iVar4,&stack0x00000040,&stack0x00000018,
                                      *(undefined4 *)(iVar5 + 0xa34)), iVar3 == 0)))))) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0xbf,"tls13_cipher");
          func_0x00d34a80(iVar5,0x50,0xc0103,0);
        }
        else {
          if (in_stack_00000094 != 0) {
            memcpy((void *)(piVar1[5] + piVar1[2]),&stack0x00000040,*(size_t *)(iVar5 + 0xa34));
            piVar1[2] = piVar1[2] + *(int *)(iVar5 + 0xa34);
            func_0x00c74b50(iVar4);
            goto LAB_00d4fe72;
          }
          iVar5 = func_0x00401390(&stack0x00000040,(void *)(piVar1[5] + piVar1[2]));
          if (iVar5 == 0) {
            func_0x00c74b50(iVar4);
            goto LAB_00d4fe72;
          }
        }
        func_0x00c74b50(iVar4);
      }
    }
  }
LAB_00d4fe72:
  FUN_008ab370();
  return;
}



undefined4 FUN_00d4fe90(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (((iVar1 != 0x17) && ((iVar1 != 0x14 || (*(int *)(param_1 + 0x9c0) == 0)))) &&
     ((iVar1 != 0x15 || (*(int *)(param_1 + 0xa2c) == 0)))) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x102,"tls13_validate_record_header");
    func_0x00d34a80(param_1,10,0x1bb,0);
    return 0;
  }
  if (*param_2 != 0x303) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x107,"tls13_validate_record_header");
    func_0x00d34a80(param_1,0x32,0x10b,0);
    return 0;
  }
  if (0x4100 < (uint)param_2[2]) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x10d,"tls13_validate_record_header");
    func_0x00d34a80(param_1,0x16,0x96,0);
    return 0;
  }
  return 1;
}



bool FUN_00d4ff70(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 4) != 0x15) {
    if ((*(int *)(param_2 + 8) == 0) || (*(int *)(param_2 + 4) != 0x17)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x11c,"tls13_post_process_record");
      func_0x00d34a80(param_1,10,0x1bb,0);
      return false;
    }
    iVar1 = *(int *)(param_2 + 8) + -1;
    if (iVar1 != 0) {
      do {
        if (*(char *)(*(int *)(param_2 + 0x14) + iVar1) != '\0') break;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(int *)(param_2 + 8) = iVar1;
    *(uint *)(param_2 + 4) = (uint)*(byte *)(*(int *)(param_2 + 0x14) + iVar1);
  }
  if (0x4000 < *(uint *)(param_2 + 8)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x129,"tls13_post_process_record");
    func_0x00d34a80(param_1,0x16,0x92,0);
    return false;
  }
  iVar1 = func_0x00d34ce0(param_1,param_2);
  return iVar1 != 0;
}



char FUN_00d50030(int param_1,char *param_2)

{
  if (*(int *)(param_1 + 0xa2c) != 0) {
    return (*param_2 != '\x15') * '\x02' + '\x15';
  }
  return '\x17';
}



undefined4 FUN_00d50060(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 0xa2c) == 0) || (*param_2 == '\x15')) {
    iVar2 = func_0x00bfae30(param_3,*param_2,0,1);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x14f,"tls13_add_record_padding");
      func_0x00d34a80(param_1,0x50,0xc0103,0);
      return 0;
    }
    uVar5 = *(int *)(param_4 + 8) + 1;
    *(uint *)(param_4 + 8) = uVar5;
    if (uVar5 < *(uint *)(param_1 + 0x9c4)) {
      uVar3 = *(uint *)(param_1 + 0x9c4) - uVar5;
      if (*(code **)(param_1 + 0xa74) == (code *)0x0) {
        uVar4 = *(uint *)(param_1 + 0x9d0);
        if ((uVar4 == 0) && (*(int *)(param_1 + 0x9d4) == 0)) {
          return 1;
        }
        cVar1 = *param_2;
        if (cVar1 == '\x16') {
          uVar4 = *(uint *)(param_1 + 0x9d4);
        }
        else if (cVar1 == '\x15') {
          uVar4 = *(uint *)(param_1 + 0x9d4);
        }
        else if (cVar1 != '\x17') {
          return 1;
        }
        if (uVar4 == 0) {
          return 1;
        }
        if ((uVar4 & uVar4 - 1) == 0) {
          uVar5 = uVar4 - 1 & uVar5;
        }
        else {
          uVar5 = uVar5 % uVar4;
        }
        if (uVar5 == 0) {
          return 1;
        }
        uVar4 = uVar4 - uVar5;
      }
      else {
        uVar4 = (**(code **)(param_1 + 0xa74))(*(undefined4 *)(param_1 + 0xa64),*param_2,uVar5);
      }
      if (uVar4 != 0) {
        if (uVar3 < uVar4) {
          uVar4 = uVar3;
        }
        iVar2 = func_0x00bfade0(param_3,0,uVar4);
        if (iVar2 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\methods\\tls13_meth.c",0x18e,"tls13_add_record_padding");
          func_0x00d34a80(param_1,0x50,0xc0103,0);
          return 0;
        }
        *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + uVar4;
      }
    }
  }
  return 1;
}



undefined4 FUN_00d501c0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x1c,"tls_any_set_crypto_state");
    func_0x00bc5160(0x14,0xc0103,0);
    return 0xfffffffe;
  }
  return 1;
}



undefined4 FUN_00d50200(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar1 == 2) {
    if (uVar2 != 0x10000) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x31,"tls_validate_record_header");
      func_0x00d34a80(param_1,0x50,0xc0103,0);
      return 0;
    }
    if (param_2[2] < 9) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x35,"tls_validate_record_header");
      func_0x00d34a80(param_1,0x32,0xa0,0);
      return 0;
    }
  }
  else if (uVar2 == 0x10000) {
    if ((uVar1 & 0xffffff00) != 0x300) {
      if (*(int *)(param_1 + 0xa30) == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x55,"tls_validate_record_header");
        func_0x00d34a80(param_1,0x46,0x10b,0);
        return 0;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x98c);
      iVar4 = func_0x008ab040(uVar3,&DAT_010c892c,4);
      if (iVar4 != 0) {
        iVar4 = func_0x008ab040(uVar3,"POST ",5);
        if (iVar4 != 0) {
          iVar4 = func_0x008ab040(uVar3,"HEAD ",5);
          if (iVar4 != 0) {
            iVar4 = func_0x008ab040(uVar3,&DAT_010c8944,4);
            if (iVar4 != 0) {
              iVar4 = func_0x008ab040(uVar3,"CONNE",5);
              if (iVar4 == 0) {
                FUN_00bc4f50();
                func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x4b,
                                "tls_validate_record_header");
                func_0x00d34a80(param_1,0xffffffff,0x9b,0);
                return 0;
              }
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x51,
                              "tls_validate_record_header");
              func_0x00d34a80(param_1,0xffffffff,0x10b,0);
              return 0;
            }
          }
        }
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x47,"tls_validate_record_header");
      func_0x00d34a80(param_1,0xffffffff,0x9c,0);
      return 0;
    }
  }
  else if ((uVar2 != 0x304) && (uVar1 != uVar2)) {
    if (((uVar1 ^ uVar2) & 0xff00) == 0) {
      if (param_2[1] == 0x15) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x6b,"tls_validate_record_header");
        func_0x00d34a80(param_1,0xffffffff,0x10b,0);
        return 0;
      }
      *(uint *)(param_1 + 0xc) = uVar1 & 0xffff;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x72,"tls_validate_record_header");
    func_0x00d34a80(param_1,0x46,0x10b,0);
    return 0;
  }
  if (0x4000 < param_2[2]) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tlsany_meth.c",0x7c,"tls_validate_record_header");
    func_0x00d34a80(param_1,0x16,0x92,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00d50490(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xc) != 0x10000) && (*(int *)(param_1 + 0xc) != param_2)) {
    return 0;
  }
  *(int *)(param_1 + 0xc) = param_2;
  return 1;
}



undefined4 FUN_00d504c0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xc) != 0x1ffff) && (*(int *)(param_1 + 0xc) != param_2)) {
    return 0;
  }
  *(int *)(param_1 + 0xc) = param_2;
  return 1;
}



void thunk_FUN_00c44770(void)

{
  uint in_stack_00000018;
  
  func_0x00e87f70();
  in_stack_00000018 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  GetSystemTime((LPSYSTEMTIME)&stack0x00000008);
  SystemTimeToFileTime((SYSTEMTIME *)&stack0x00000008,(LPFILETIME)&stack0x00000000);
  FUN_008ab370();
  return;
}



void FUN_00d57d70(void *param_1)

{
  char *pcStack00000008;
  undefined4 uStack0000000c;
  
  uStack0000000c = 0x3a4;
  pcStack00000008 = "ssl\\quic\\quic_rx_depack.c";
  if ((code *)PTR_FUN_012b5b08 != FUN_00bbc580) {
                    // WARNING: Could not recover jumptable at 0x00bbc58c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)PTR_FUN_012b5b08)();
    return;
  }
  free(param_1);
  return;
}



void FUN_00d57eb0(int param_1,int param_2)

{
  if ((~(*(uint *)(param_1 + 0xd0) >> 1) & 1) != 0) {
    func_0x00d3ff60(param_2 + 0x250,param_1);
  }
  return;
}



void FUN_00d57ee0(int param_1,int param_2)

{
  if ((~(*(uint *)(param_1 + 0xd0) >> 1) & 1) == 0) {
    func_0x00d3ff60(param_2 + 0x250,param_1);
  }
  return;
}



bool FUN_00d57f10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00d3d0e0(param_1,param_2);
  return iVar1 == 0;
}



uint FUN_00d57f30(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar4 = 0;
  if (*param_1 != 0) {
    do {
      iVar1 = uVar4 + 1;
      uVar3 = uVar4 & 3;
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 ^ (uint)param_1[iVar1] << (sbyte)(uVar3 << 3);
    } while (uVar4 < *param_1);
  }
  return uVar2;
}



bool FUN_00d57f60(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) != *(int *)(param_2 + 8);
}



void FUN_00d58030(int param_1,int param_2)

{
  func_0x00bbe5b0(*(undefined4 *)(param_1 + 4),0);
  func_0x00bbe1b0(*(undefined4 *)(param_1 + 4),FUN_00d58080,param_2);
  func_0x00bbe070(*(undefined4 *)(param_2 + 8),param_1);
  func_0x00bbe2e0(*(undefined4 *)(param_1 + 4));
  FUN_00bbc580(param_1,"ssl\\quic\\quic_lcidm.c",0xee);
  return;
}



void FUN_00d58080(int param_1,int param_2)

{
  func_0x00bbe070(*(undefined4 *)(param_2 + 4),param_1);
  func_0x00bbe070(*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),param_1);
  **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + -1;
  FUN_00bbc580(param_1,"ssl\\quic\\quic_lcidm.c",0xdd);
  return;
}



uint FUN_00d58610(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  
  pbVar2 = (byte *)(param_2 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x28);
  uVar3 = 0xc;
  while (*(int *)pbVar1 == *(int *)pbVar2) {
    pbVar1 = pbVar1 + 4;
    pbVar2 = pbVar2 + 4;
    bVar4 = uVar3 < 4;
    uVar3 = uVar3 - 4;
    if (bVar4) {
      return 0;
    }
  }
  bVar4 = *pbVar1 < *pbVar2;
  if ((((*pbVar1 == *pbVar2) && (bVar4 = pbVar1[1] < pbVar2[1], pbVar1[1] == pbVar2[1])) &&
      (bVar4 = pbVar1[2] < pbVar2[2], pbVar1[2] == pbVar2[2])) &&
     (bVar4 = pbVar1[3] < pbVar2[3], pbVar1[3] == pbVar2[3])) {
    return 0;
  }
  return -(uint)bVar4 | 1;
}



void FUN_00d58dc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00bbc580(iVar2,"ssl\\quic\\quic_srtm.c",0x9e);
    iVar2 = iVar1;
  }
  FUN_00bbc580(param_1,"ssl\\quic\\quic_srtm.c",0xa1);
  return;
}



uint FUN_00d58e90(int param_1,int param_2)

{
  if (*(uint *)(param_2 + 0x30) <= *(uint *)(param_1 + 0x30)) {
    if (*(uint *)(param_2 + 0x30) < *(uint *)(param_1 + 0x30)) {
      return 1;
    }
    if (*(uint *)(param_1 + 0x2c) <= *(uint *)(param_2 + 0x2c)) {
      return (uint)(*(uint *)(param_1 + 0x2c) < *(uint *)(param_2 + 0x2c));
    }
  }
  return 0xffffffff;
}



undefined4 FUN_00d5b0b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  if (uVar1 <= uVar2) {
    if ((uVar1 < uVar2) || (*param_1 < *param_2)) {
      return 0xffffffff;
    }
    if ((uVar1 < uVar2) || ((uVar1 <= uVar2 && (*param_1 <= *param_2)))) {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00d5b0f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2[1];
  if (param_1[1] < uVar1) {
    return 0xffffffff;
  }
  if (param_1[1] <= uVar1) {
    if (*param_1 < *param_2) {
      return 0xffffffff;
    }
    if ((param_1[1] <= uVar1) && ((param_1[1] < uVar1 || (*param_1 <= *param_2)))) {
      uVar1 = param_1[3];
      uVar2 = param_2[3];
      if (uVar1 < uVar2) {
        return 0xffffffff;
      }
      if (uVar1 <= uVar2) {
        if (param_1[2] < param_2[2]) {
          return 0xffffffff;
        }
        if ((uVar1 <= uVar2) && ((uVar1 < uVar2 || (param_1[2] <= param_2[2])))) {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined4 FUN_00d5daf0(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 & param_2) == 0xffffffff) {
    return *(undefined4 *)(param_4 + 0x88 + param_3 * 4);
  }
  iVar1 = func_0x00d3f910(*(undefined4 *)(param_4 + 0x5c),param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x58);
}



void FUN_00d5db30(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  
  if ((param_1 == 4) && (param_2 == 0)) {
    iVar1 = func_0x00d3f910(*(undefined4 *)(param_6 + 0x5c),param_3,param_4);
    if (iVar1 != 0) {
      func_0x00d3fb80(*(undefined4 *)(param_6 + 0x5c),iVar1);
      func_0x00d3ff60(*(undefined4 *)(param_6 + 0x5c),iVar1);
    }
  }
  else if ((param_1 == 5) &&
          ((param_2 == 0 &&
           (iVar1 = func_0x00d3f910(*(undefined4 *)(param_6 + 0x5c),param_3,param_4), iVar1 != 0))))
  {
    *(uint *)(iVar1 + 0xd4) = *(uint *)(iVar1 + 0xd4) | 0x10;
    func_0x00d3ff60(*(undefined4 *)(param_6 + 0x5c),iVar1);
    return;
  }
  return;
}



void FUN_00d5dbc0(uint param_1,int param_2)

{
  if ((param_2 + -1 + (uint)(2 < param_1) == 0) && (param_1 - 3 < 0x1c)) {
                    // WARNING: Could not recover jumptable at 0x00d5dbeb. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)(&PTR_LAB_00d5dce0)[(byte)(&DAT_00d5dd01)[param_1]])();
    return;
  }
  return;
}



void FUN_00d5dd20(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x00d3f910(*(undefined4 *)(param_3 + 0x5c),param_1,param_2);
  if (iVar1 != 0) {
    func_0x00d3ff60(*(undefined4 *)(param_3 + 0x5c),iVar1);
  }
  return;
}



undefined4 FUN_00d60bb0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = func_0x00bab6b0(param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  func_0x00baa8e0(*(undefined4 *)(param_1 + 8));
  *(int *)(param_1 + 8) = param_2;
  return 1;
}



undefined4 FUN_00d60bf0(int param_1)

{
  if (param_1 != 0) {
    func_0x00baa8e0(*(undefined4 *)(param_1 + 8));
    FUN_00bbc580(param_1,"ssl\\quic\\quic_tls.c",0xcb);
  }
  return 1;
}



undefined4 FUN_00d60c20(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000058;
  int in_stack_00000060;
  int *in_stack_00000078;
  int in_stack_0000007c;
  int in_stack_00000080;
  undefined4 *in_stack_00000084;
  undefined4 uVar5;
  
  func_0x00e87f70();
  piVar2 = (int *)FUN_00bbc830(0x34,"ssl\\quic\\quic_tls.c",0x69);
  if (piVar2 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\quic\\quic_tls.c",0x6f,"quic_new_record_layer");
    func_0x00bc5160(0x14,0xc0103,0);
    return 0;
  }
  *piVar2 = in_stack_00000080;
  piVar2[1] = in_stack_0000001c;
  if ((in_stack_00000060 == 0) || (iVar3 = func_0x00bab6b0(in_stack_00000060), iVar3 != 0)) {
    func_0x00baa8e0(piVar2[2]);
    piVar2[0xc] = in_stack_0000007c;
    piVar2[2] = in_stack_00000060;
    *in_stack_00000084 = piVar2;
    if (in_stack_00000078 != (int *)0x0) {
      iVar3 = *in_stack_00000078;
      while (iVar3 != 0) {
        if (iVar3 == 2) {
          piVar2[0xb] = in_stack_00000078[1];
        }
        piVar1 = in_stack_00000078 + 2;
        in_stack_00000078 = in_stack_00000078 + 2;
        iVar3 = *piVar1;
      }
    }
    switch(in_stack_0000001c) {
    case 0:
      goto LAB_00d60e2a;
    case 1:
      uVar5 = 2;
      break;
    case 2:
      uVar5 = 1;
      break;
    case 3:
      uVar5 = 3;
      break;
    default:
      piVar2[8] = 0x50;
      FUN_00bc4f50();
      uVar5 = 0x9b;
      goto LAB_00d60e4b;
    }
    iVar3 = func_0x00bc3ef0(in_stack_00000044,"AES-128-GCM");
    if (iVar3 != 0) {
      uVar4 = 1;
LAB_00d60d76:
      iVar3 = FUN_00bd4800(in_stack_00000058);
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*piVar2 + 0x1c))
                          (uVar5,in_stack_00000018 != 0,uVar4,in_stack_00000058,in_stack_00000024,
                           in_stack_00000028,*(undefined4 *)(*piVar2 + 0x20));
        if (iVar3 != 0) {
LAB_00d60e2a:
          return 1;
        }
        piVar2[8] = 0x50;
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\quic\\quic_tls.c",0xb9,"quic_new_record_layer");
        func_0x00bc5160(0x14,0xc0103,0);
        *(uint *)(*piVar2 + 0x5c) = *(uint *)(*piVar2 + 0x5c) | 2;
        FUN_00bd4770(in_stack_00000058);
        goto LAB_00d60e6c;
      }
      piVar2[8] = 0x50;
      FUN_00bc4f50();
      uVar5 = 0xb2;
      goto LAB_00d60e4b;
    }
    iVar3 = func_0x00bc3ef0(in_stack_00000044,"AES-256-GCM");
    if (iVar3 != 0) {
      uVar4 = 2;
      goto LAB_00d60d76;
    }
    iVar3 = func_0x00bc3ef0(in_stack_00000044,"CHACHA20-POLY1305");
    if (iVar3 != 0) {
      uVar4 = 3;
      goto LAB_00d60d76;
    }
    piVar2[8] = 0x50;
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\quic\\quic_tls.c",0xab,"quic_new_record_layer");
    uVar5 = 0xf9;
  }
  else {
    piVar2[8] = 0x50;
    FUN_00bc4f50();
    uVar5 = 0x76;
LAB_00d60e4b:
    func_0x00bc5050("ssl\\quic\\quic_tls.c",uVar5,"quic_new_record_layer");
    uVar5 = 0xc0103;
  }
  func_0x00bc5160(0x14,uVar5,0);
  *(uint *)(*piVar2 + 0x5c) = *(uint *)(*piVar2 + 0x5c) | 2;
LAB_00d60e6c:
  *in_stack_00000084 = 0;
  func_0x00baa8e0(piVar2[2]);
  FUN_00bbc580(piVar2,"ssl\\quic\\quic_tls.c",0xcb);
  return 0;
}



void FUN_00d60eb0(undefined4 param_1,char param_2,uint param_3,undefined4 param_4,int *param_5,
                 int *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int unaff_retaddr;
  undefined4 uVar8;
  
  func_0x00e87f70();
  piVar4 = param_6;
  piVar3 = param_5;
  param_3 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (param_7 != 1) {
    if (param_5 != (int *)0x0) {
      param_5[8] = 0x50;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\quic\\quic_tls.c",0xfa,"quic_write_records");
    func_0x00bc5160(0x14,0xc0103,0);
    if (piVar3 != (int *)0x0) {
      *(uint *)(*piVar3 + 0x5c) = *(uint *)(*piVar3 + 0x5c) | 2;
    }
    FUN_008ab370();
    return;
  }
  func_0x00baa700(param_5[2],0xf);
  if ((code *)piVar3[0xb] != (code *)0x0) {
    if (piVar3[1] == 0) {
      cVar5 = (char)*piVar4;
    }
    else {
      cVar5 = '\x17';
    }
    param_1 = CONCAT13(*(char *)((int)piVar4 + 0xd),
                       CONCAT12((char)piVar4[1],CONCAT11(*(char *)((int)piVar4 + 5),cVar5)));
    param_2 = (char)piVar4[3];
    (*(code *)piVar3[0xb])(1,0x304,0x100,&param_1,5,piVar3[0xc]);
    if (piVar3[1] != 0) {
      (*(code *)piVar3[0xb])(1,0x304,0x101,piVar4,1,piVar3[0xc]);
    }
  }
  if ((char)*piVar4 == '\x15') {
    if (piVar4[3] != 2) {
      piVar3[8] = 0x50;
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\quic\\quic_tls.c",0x126,"quic_write_records");
      uVar8 = 0x180;
      goto LAB_00d610b2;
    }
    param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(piVar4[2] + 1));
    iVar6 = (**(code **)(*piVar3 + 0x34))(*(undefined4 *)(*piVar3 + 0x38),param_1);
    if (iVar6 != 0) {
LAB_00d6106f:
      FUN_008ab370();
      return;
    }
    piVar3[8] = 0x50;
    FUN_00bc4f50();
    uVar8 = 0x130;
  }
  else if ((char)*piVar4 == '\x16') {
    iVar6 = (**(code **)(*piVar3 + 4))
                      (piVar4[2] + piVar3[3],piVar4[3] - piVar3[3],&stack0x00000000,
                       *(undefined4 *)(*piVar3 + 8));
    if (iVar6 == 0) {
      piVar3[8] = 0x50;
      FUN_00bc4f50();
      uVar8 = 0x13e;
    }
    else {
      uVar7 = unaff_retaddr + piVar3[3];
      if (uVar7 == piVar4[3]) {
        piVar3[3] = 0;
        goto LAB_00d6106f;
      }
      if (uVar7 < (uint)piVar4[3]) {
        piVar3[3] = uVar7;
        iVar6 = piVar4[1];
        iVar1 = piVar4[2];
        iVar2 = piVar4[3];
        piVar3[4] = *piVar4;
        piVar3[5] = iVar6;
        piVar3[6] = iVar1;
        piVar3[7] = iVar2;
        func_0x00bab680(piVar3[2],10);
        FUN_008ab370();
        return;
      }
      piVar3[8] = 0x50;
      FUN_00bc4f50();
      uVar8 = 0x147;
    }
  }
  else {
    piVar3[8] = 0x50;
    FUN_00bc4f50();
    uVar8 = 0x15c;
  }
  func_0x00bc5050("ssl\\quic\\quic_tls.c",uVar8,"quic_write_records");
  uVar8 = 0xc0103;
LAB_00d610b2:
  func_0x00bc5160(0x14,uVar8,0);
  *(uint *)(*piVar3 + 0x5c) = *(uint *)(*piVar3 + 0x5c) | 2;
  FUN_008ab370();
  return;
}



void FUN_00d61130(int param_1)

{
  FUN_00d60eb0(param_1,param_1 + 0x10,1);
  return;
}



void FUN_00d61150(undefined4 *param_1,undefined1 param_2,uint param_3,undefined4 param_4,
                 int *param_5,undefined4 *param_6,undefined4 *param_7,undefined1 *param_8,
                 undefined4 param_9,int *param_10)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  func_0x00e87f70();
  piVar5 = param_10;
  uVar4 = param_9;
  puVar3 = param_8;
  puVar2 = param_6;
  piVar1 = param_5;
  param_3 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_1 = param_7;
  if ((param_5[9] == 0) && (param_5[10] == 0)) {
    func_0x00baa700(param_5[2],0xf);
    iVar6 = (**(code **)(*piVar1 + 0xc))(uVar4,piVar5,*(undefined4 *)(*piVar1 + 0x10));
    if (iVar6 != 0) {
      if (*piVar5 == 0) {
        func_0x00bab680(piVar1[2],9);
        FUN_008ab370();
        return;
      }
      *puVar2 = piVar1;
      *param_1 = 0x304;
      *puVar3 = 0x16;
      iVar6 = *piVar5;
      piVar1[10] = iVar6;
      piVar1[9] = iVar6;
      if ((code *)piVar1[0xb] != (code *)0x0) {
        param_1 = (undefined4 *)
                  CONCAT13(*(undefined1 *)((int)piVar5 + 1),
                           (int3)CONCAT31(0x303,(piVar1[1] != 0) + '\x16'));
        param_2 = (undefined1)*piVar5;
        (*(code *)piVar1[0xb])(0,0x304,0x100,&param_1,5,piVar1[0xc]);
        (*(code *)piVar1[0xb])(0,0x304,0x101,puVar3,1,piVar1[0xc]);
      }
      FUN_008ab370();
      return;
    }
    piVar1[8] = 0x50;
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\quic\\quic_tls.c",0x174,"quic_read_record");
    func_0x00bc5160(0x14,0xc0103,0);
    *(uint *)(*piVar1 + 0x5c) = *(uint *)(*piVar1 + 0x5c) | 2;
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00d612c0(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[9];
  if ((((uVar1 != 0) && (uVar2 = param_1[10], uVar2 <= uVar1)) && (param_1 == param_2)) &&
     (param_3 <= uVar2)) {
    param_1[10] = uVar2 - param_3;
    if (uVar2 - param_3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x14))(uVar1,*(undefined4 *)(*param_1 + 0x18));
      if (iVar3 == 0) {
        param_1[8] = 0x50;
        FUN_00bc4f50();
        uVar4 = 0x1b1;
        goto LAB_00d61336;
      }
      param_1[9] = 0;
    }
    return 1;
  }
  param_1[8] = 0x50;
  FUN_00bc4f50();
  uVar4 = 0x1a6;
LAB_00d61336:
  func_0x00bc5050("ssl\\quic\\quic_tls.c",uVar4,"quic_release_record");
  func_0x00bc5160(0x14,0xc0103,0);
  *(uint *)(*param_1 + 0x5c) = *(uint *)(*param_1 + 0x5c) | 2;
  return 0xfffffffe;
}



undefined4 FUN_00d61360(int *param_1,int param_2)

{
  if (param_2 != 0x304) {
    if (param_1 != (int *)0x0) {
      param_1[8] = 0x50;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\quic\\quic_tls.c",0x1c2,"quic_set_protocol_version");
    func_0x00bc5160(0x14,0xc0103,0);
    if (param_1 != (int *)0x0) {
      *(uint *)(*param_1 + 0x5c) = *(uint *)(*param_1 + 0x5c) | 2;
    }
    return 0;
  }
  return 1;
}



void FUN_00d613c0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((*(byte *)(*param_1 + 0x5c) & 2) == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = &DAT_010c55b0;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = "read header";
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "unknown";
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = "unknown";
      return;
    }
  }
  return;
}



undefined4 FUN_00d61410(int *param_1)

{
  if (param_1 != (int *)0x0) {
    param_1[8] = 0x50;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\quic\\quic_tls.c",0x228,"quic_app_data_pending");
  func_0x00bc5160(0x14,0xc0101,0);
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0x5c) = *(uint *)(*param_1 + 0x5c) | 2;
  }
  return 0;
}



undefined4 FUN_00d61460(int *param_1)

{
  if (param_1 != (int *)0x0) {
    param_1[8] = 0x50;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\quic\\quic_tls.c",0x22e,"quic_get_max_record_overhead");
  func_0x00bc5160(0x14,0xc0101,0);
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0x5c) = *(uint *)(*param_1 + 0x5c) | 2;
  }
  return 0;
}



undefined4 FUN_00d614b0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    param_1[8] = 0x50;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\quic\\quic_tls.c",0x234,"quic_increment_sequence_ctr");
  func_0x00bc5160(0x14,0xc0101,0);
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0x5c) = *(uint *)(*param_1 + 0x5c) | 2;
  }
  return 0;
}



undefined4 FUN_00d61500(void)

{
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  int in_stack_00000024;
  
  *in_stack_00000010 = *(undefined4 *)(in_stack_00000024 + 0x40);
  *in_stack_00000014 = *(undefined4 *)(in_stack_00000024 + 0x44);
  return 1;
}



void FUN_00d619a0(void)

{
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000024;
  
  (**(code **)(in_stack_00000024 + 0x24))
            (in_stack_00000010,in_stack_00000014,*(undefined4 *)(in_stack_00000024 + 0x28));
  return;
}



void FUN_00d61a30(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  *(undefined4 *)(param_1 + 0x20) = 3;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



undefined4 * FUN_00d61ab0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00bbc830(0x78,"ssl\\quic\\cc_newreno.c",0x34);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = param_1;
  puVar2[1] = param_2;
  uVar1 = puVar2[9];
  puVar2[9] = 0x4b0;
  puVar2[2] = 12000;
  puVar2[3] = 0;
  puVar2[4] = 0x960;
  puVar2[5] = 0;
  if (0x4b0 < uVar1) {
    puVar2[0xc] = 12000;
    puVar2[0xd] = 0;
  }
  func_0x00d62430(puVar2);
  puVar2[0xc] = puVar2[2];
  puVar2[6] = 1;
  puVar2[7] = 2;
  puVar2[8] = 3;
  puVar2[0xd] = puVar2[3];
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0xe] = 0xffffffff;
  puVar2[0xf] = 0xffffffff;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  return puVar2;
}



void FUN_00d61ba0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"ssl\\quic\\cc_newreno.c",0x42);
  return;
}



undefined4 FUN_00d61bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint unaff_retaddr;
  
  func_0x00e87f70();
  iVar1 = func_0x00bc09d0(param_3,"max_dgram_payload_len");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc0300(iVar1,&stack0x00000000);
    if ((iVar1 == 0) || (unaff_retaddr < 0x4b0)) {
      return 0;
    }
    func_0x00d623d0(param_2,unaff_retaddr);
  }
  return 1;
}



undefined4 FUN_00d61c20(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_retaddr;
  
  func_0x00e87f70();
  uVar1 = param_4;
  iVar2 = func_0x00bc09d0(param_4,"max_dgram_payload_len");
  iVar5 = 0;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 2) {
      return 0;
    }
    if (*(int *)(iVar2 + 0xc) != 4) {
      return 0;
    }
    iVar5 = *(int *)(iVar2 + 8);
  }
  iVar3 = func_0x00bc09d0(uVar1,"cur_cwnd_size");
  iVar2 = 0;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 4) != 2) {
      return 0;
    }
    if (*(int *)(iVar3 + 0xc) != 8) {
      return 0;
    }
    iVar2 = *(int *)(iVar3 + 8);
  }
  iVar4 = func_0x00bc09d0(uVar1,"min_cwnd_size");
  iVar3 = 0;
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 4) != 2) {
      return 0;
    }
    if (*(int *)(iVar4 + 0xc) != 8) {
      return 0;
    }
    iVar3 = *(int *)(iVar4 + 8);
  }
  iVar4 = func_0x00d62090(uVar1,"bytes_in_flight",8,&stack0x00000000);
  if ((iVar4 != 0) && (iVar4 = func_0x00d62090(uVar1,"cur_state",4,&param_1), iVar4 != 0)) {
    if (iVar5 != 0) {
      *(int *)(param_3 + 100) = iVar5;
    }
    if (iVar2 != 0) {
      *(int *)(param_3 + 0x68) = iVar2;
    }
    if (iVar3 != 0) {
      *(int *)(param_3 + 0x6c) = iVar3;
    }
    if (unaff_retaddr != 0) {
      *(int *)(param_3 + 0x70) = unaff_retaddr;
    }
    if (param_1 != 0) {
      *(int *)(param_3 + 0x74) = param_1;
    }
    func_0x00d62430(param_3);
    return 1;
  }
  return 0;
}



undefined4 FUN_00d61d30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,"max_dgram_payload_len");
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  iVar1 = func_0x00bc09d0(param_2,"cur_cwnd_size");
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  iVar1 = func_0x00bc09d0(param_2,"min_cwnd_size");
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  iVar1 = func_0x00bc09d0(param_2,"bytes_in_flight");
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  iVar1 = func_0x00bc09d0(param_2,"cur_state");
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return 1;
}



undefined8 FUN_00d61dc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar2 = *(uint *)(param_1 + 0x34);
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x30);
  if ((uVar2 <= uVar1) && ((uVar2 < uVar1 || (uVar4 <= uVar3)))) {
    return 0;
  }
  return CONCAT44((uVar2 - uVar1) - (uint)(uVar4 < uVar3),uVar4 - uVar3);
}



undefined8 FUN_00d61df0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  func_0x00e87f70();
  uVar1 = *(uint *)(param_3 + 0x2c);
  uVar2 = *(uint *)(param_3 + 0x28);
  uVar3 = *(uint *)(param_3 + 0x30);
  uVar4 = *(uint *)(param_3 + 0x34);
  if (((uVar1 <= uVar4) && ((uVar1 < uVar4 || (uVar2 < uVar3)))) &&
     ((uVar4 - uVar1 != (uint)(uVar3 < uVar2) || (uVar3 != uVar2)))) {
    return 0;
  }
  return 0xffffffffffffffff;
}



undefined4 FUN_00d61e50(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0x28);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_3 + (uint)CARRY4(uVar2,param_2);
  func_0x00d62430(param_1);
  return 1;
}



undefined4 FUN_00d61e80(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x28) - param_2[2];
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar4 = *(int *)(param_1 + 0x2c) - (uint)(*(uint *)(param_1 + 0x28) < param_2[2]);
  *(uint *)(param_1 + 0x28) = uVar3;
  uVar2 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x2c) = uVar4;
  if ((uVar4 < uVar2) || ((uVar4 <= uVar2 && (uVar3 < uVar1)))) {
    uVar5 = (uVar2 - uVar4) - (uint)(uVar1 < uVar3);
    if ((uVar2 <= *(uint *)(param_1 + 0x3c)) &&
       ((uVar2 < *(uint *)(param_1 + 0x3c) || (uVar1 < *(uint *)(param_1 + 0x38))))) {
      if ((uVar5 < uVar2 >> 1) ||
         ((uVar5 <= uVar2 >> 1 && (uVar1 - uVar3 <= (uVar1 >> 1 | uVar2 << 0x1f)))))
      goto LAB_00d61ef6;
    }
    if ((uVar2 - uVar4 != (uint)(uVar1 < uVar3)) ||
       ((uint)(*(int *)(param_1 + 0x24) * 3) < uVar1 - uVar3)) goto LAB_00d61f5d;
  }
LAB_00d61ef6:
  if ((*(uint *)(param_1 + 0x4c) <= param_2[1]) &&
     ((*(uint *)(param_1 + 0x4c) < param_2[1] || (*(uint *)(param_1 + 0x48) < *param_2)))) {
    uVar3 = param_2[2];
    if ((*(uint *)(param_1 + 0x3c) < uVar2) ||
       ((*(uint *)(param_1 + 0x3c) <= uVar2 && (*(uint *)(param_1 + 0x38) <= uVar1)))) {
      uVar4 = uVar3 + *(uint *)(param_1 + 0x40);
      uVar3 = *(int *)(param_1 + 0x44) + (uint)CARRY4(uVar3,*(uint *)(param_1 + 0x40));
      *(uint *)(param_1 + 0x40) = uVar4;
      *(uint *)(param_1 + 0x44) = uVar3;
      if ((uVar2 <= uVar3) && ((uVar2 < uVar3 || (uVar1 <= uVar4)))) {
        *(uint *)(param_1 + 0x40) = uVar4 - uVar1;
        *(uint *)(param_1 + 0x44) = (uVar3 - uVar2) - (uint)(uVar4 < uVar1);
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x24) + uVar1;
        *(uint *)(param_1 + 0x34) = uVar2 + CARRY4(*(uint *)(param_1 + 0x24),uVar1);
      }
    }
    else {
      *(uint *)(param_1 + 0x30) = uVar1 + uVar3;
      *(uint *)(param_1 + 0x34) = uVar2 + CARRY4(uVar1,uVar3);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
LAB_00d61f5d:
  func_0x00d62430(param_1);
  return 1;
}



undefined4 FUN_00d61f70(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar3 = param_2[2];
  if ((*(int *)(param_1 + 0x2c) == 0) && (uVar1 < uVar3)) {
    return 0;
  }
  *(uint *)(param_1 + 0x28) = uVar1 - uVar3;
  *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (uint)(uVar1 < uVar3);
  if (*(int *)(param_1 + 0x50) == 0) {
    if ((param_2[1] < *(uint *)(param_1 + 0x5c)) ||
       ((param_2[1] <= *(uint *)(param_1 + 0x5c) && (*param_2 <= *(uint *)(param_1 + 0x58)))))
    goto LAB_00d61fe2;
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  uVar1 = param_2[1];
  uVar3 = *(uint *)(param_1 + 0x5c);
  uVar2 = *(uint *)(param_1 + 0x58);
  if ((uVar3 < uVar1) || ((uVar3 <= uVar1 && (uVar2 <= *param_2)))) {
    uVar2 = *param_2;
    uVar3 = uVar1;
  }
  *(uint *)(param_1 + 0x58) = uVar2;
  *(uint *)(param_1 + 0x5c) = uVar3;
LAB_00d61fe2:
  func_0x00d62430(param_1);
  return 1;
}



undefined4 FUN_00d62000(undefined4 param_1,undefined4 param_2)

{
  func_0x00d620d0(param_1,param_2);
  return 1;
}



undefined4 FUN_00d62020(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0x28);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - param_2;
  *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x2c) - param_3) - (uint)(uVar2 < param_2);
  func_0x00d62430(param_1);
  return 1;
}



undefined4 FUN_00d62050(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x58) = *param_2;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  func_0x00d620d0(param_1,0);
  return 1;
}



uint thunk_FUN_00d352d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0xa78) != 0) && (*(int *)(param_1 + 0x9ac) != 0)) {
    uVar2 = func_0x00bc36d0(*(int *)(param_1 + 0x9ac));
    uVar3 = func_0x00bc2510(uVar2);
    if ((((uVar3 & 0x800000) != 0) &&
        ((((iVar1 = *(int *)(param_1 + 0xc), iVar1 == 0x302 || (iVar1 == 0x303)) || (iVar1 == 0x100)
          ) || ((iVar1 == 0xfeff || (iVar1 == 0xfefd)))))) && (param_3 != 0)) {
      uVar3 = (param_3 - 1U) / *param_5 + 1;
      if (*(uint *)(param_1 + 0xa78) <= uVar3) {
        uVar3 = *(uint *)(param_1 + 0xa78);
      }
      return uVar3;
    }
  }
  return 1;
}



bool FUN_00d63260(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00d36ab0(param_1,param_2,param_3);
  return iVar1 != 0;
}



void FUN_00d64fa0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x4c);
  puVar3 = (uint *)func_0x00d5b350(param_1);
  for (iVar4 = func_0x00bc36f0(param_1); iVar4 != 0; iVar4 = iVar4 + -1) {
    iVar5 = (*(code *)puVar1[3])(*puVar3,puVar3[1],*(uint *)(param_1 + 0x20) & 3,puVar1[4]);
    if (iVar5 != 0) {
      uVar2 = puVar3[5];
      if ((puVar3[3] <= uVar2) && ((puVar3[3] < uVar2 || (puVar3[2] <= puVar3[4])))) {
        func_0x00d3e3f0(iVar5,puVar3[2],puVar3[3],puVar3[4],uVar2);
      }
      if (((puVar3[6] & 1) != 0) && ((*puVar3 & puVar3[1]) != 0xffffffff)) {
        func_0x00d3e550(iVar5);
      }
      if ((puVar3[6] & 2) != 0) {
        if ((*puVar3 & puVar3[1]) != 0xffffffff) {
          (*(code *)puVar1[7])(5,0,*puVar3,puVar3[1],param_1,puVar1[8]);
        }
      }
      if ((puVar3[6] & 4) != 0) {
        if ((*puVar3 & puVar3[1]) != 0xffffffff) {
          (*(code *)puVar1[7])(4,0,*puVar3,puVar3[1],param_1,puVar1[8]);
        }
      }
      iVar5 = func_0x00d3e380(iVar5);
      if (iVar5 != 0) {
        (*(code *)puVar1[9])(*puVar3,puVar3[1],puVar1[10]);
      }
    }
    puVar3 = puVar3 + 8;
  }
  iVar4 = *(int *)(param_1 + 0x48);
  while (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + 4);
    func_0x00d59370(*puVar1,iVar4);
    iVar4 = iVar5;
  }
  func_0x00d5b380(puVar1[2],param_1);
  return;
}



void FUN_00d650e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x4c);
  iVar3 = *(int *)(param_1 + 0x48);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    func_0x00d59370(*puVar1,iVar3);
    iVar3 = iVar2;
  }
  func_0x00d5b380(puVar1[2],param_1);
  return;
}



void FUN_00d65120(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  
  func_0x00e87f70();
  puVar2 = *(undefined4 **)(param_2 + 0x4c);
  puVar4 = (uint *)func_0x00d5b350(param_2);
  iVar5 = func_0x00bc36f0(param_2);
  pcVar6 = (code *)puVar2[0xb];
  if (pcVar6 != (code *)0x0) {
    pcVar6 = (code *)(*pcVar6)(puVar2[0xc]);
  }
  func_0x00d5c200(pcVar6,param_2);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar7 = (*(code *)puVar2[3])(*puVar4,puVar4[1],*(uint *)(param_2 + 0x20) & 3,puVar2[4]);
    if (iVar7 != 0) {
      uVar3 = puVar4[5];
      bVar8 = false;
      if ((puVar4[3] <= uVar3) && ((puVar4[3] < uVar3 || (puVar4[2] <= puVar4[4])))) {
        func_0x00d3e570(iVar7,puVar4[2],puVar4[3],puVar4[4],uVar3);
        bVar8 = true;
      }
      if (((puVar4[6] & 1) != 0) && ((*puVar4 & puVar4[1]) != 0xffffffff)) {
        func_0x00d3e5d0(iVar7);
        bVar8 = true;
      }
      if ((puVar4[6] & 2) != 0) {
        if ((*puVar4 & puVar4[1]) != 0xffffffff) {
          (*(code *)puVar2[5])(5,0,*puVar4,puVar4[1],param_2,puVar2[6]);
        }
      }
      if ((puVar4[6] & 4) != 0) {
        if ((*puVar4 & puVar4[1]) != 0xffffffff) {
          (*(code *)puVar2[5])(4,0,*puVar4,puVar4[1],param_2,puVar2[6]);
        }
      }
      (*(code *)puVar2[5])(0x11,0,*puVar4,puVar4[1],param_2,puVar2[6]);
      if (bVar8) {
        if ((*puVar4 & puVar4[1]) != 0xffffffff) {
          (*(code *)puVar2[9])(*puVar4,puVar4[1],puVar2[10]);
        }
      }
    }
    puVar4 = puVar4 + 8;
  }
  iVar5 = *(int *)(param_2 + 0x48);
  while (iVar5 != 0) {
    iVar7 = *(int *)(iVar5 + 4);
    func_0x00d591a0(*puVar2,iVar5,0xffffffff);
    iVar5 = iVar7;
  }
  if ((*(byte *)(param_2 + 0x54) & 1) != 0) {
    (*(code *)puVar2[5])(0x1e,0,0xffffffff,0xffffffff,param_2,puVar2[6]);
  }
  if ((*(byte *)(param_2 + 0x54) & 2) != 0) {
    (*(code *)puVar2[5])(0x10,0,0xffffffff,0xffffffff,param_2,puVar2[6]);
  }
  pbVar1 = (byte *)(param_2 + 0x54);
  if ((*pbVar1 & 4) != 0) {
    (*(code *)puVar2[5])(0x12,0,0xffffffff,0xffffffff,param_2,puVar2[6]);
  }
  if ((*pbVar1 & 8) != 0) {
    (*(code *)puVar2[5])(0x13,0,0xffffffff,0xffffffff,param_2,puVar2[6]);
  }
  if ((*pbVar1 & 0x10) != 0) {
    (*(code *)puVar2[5])(3,0,0xffffffff,0xffffffff,param_2,puVar2[6]);
  }
  func_0x00d5b380(puVar2[2],param_2);
  return;
}



// WARNING: Instruction at (ram,0x00d67ae5) overlaps instruction at (ram,0x00d67ae3)
// 
// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00d67b3f)
// WARNING: Removing unreachable block (ram,0x00d67b3b)

undefined4 FUN_00d679d0(uint *param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte bVar9;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined3 uVar10;
  int extraout_ECX;
  char extraout_DH;
  uint uVar11;
  byte bVar14;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  uint uVar16;
  undefined4 unaff_retaddr;
  
  uVar16 = *(uint *)(param_2 + 0x1c);
  uVar15 = *param_1 & 0xff;
  if (0xff < (*param_1 ^ 0xe24c4a00)) {
    uVar15 = 2;
  }
  if ((param_1[1] & 6) != 0) {
    func_0x00d673a0(uVar16,param_2 - 0x24U,uVar15);
    return 1;
  }
  uVar12 = *(uint *)(uVar16 + 0x28);
  uVar11 = *(int *)(uVar16 + 0x10) - 8;
  do {
    uVar13 = uVar16;
    if ((uVar12 == 0) ||
       (((iVar6 = *(int *)((uVar12 & 0xfffffffc) + 0x48), iVar6 < 0 &&
         (uVar13 = uVar12, uVar11 < (uint)(*(int *)(uVar16 + 0x1c) - iVar6))) ||
        (uVar13 = uVar16, uVar11 <= *(uint *)(uVar16 + 0x1c))))) goto LAB_00d67a7b;
    uVar4 = *(uint *)(uVar11 + 4);
    uVar13 = uVar12;
    switch(uVar4 & 7) {
    default:
      iVar6 = (uint)*(byte *)(uVar4 - 3) * -8 + -8;
      goto code_r0x00d67a75;
    case 1:
code_r0x00d67a67:
      if (uVar12 == param_2 - 0x24U) {
        return 1;
      }
      uVar12 = *(uint *)(uVar12 + 0x44);
      break;
    case 2:
      if (*(int *)(uVar11 - 8) == 1) goto code_r0x00d67a67;
      break;
    case 3:
      break;
    case 5:
      goto LAB_00d67a7b;
    case 6:
    case 7:
      uVar13 = uVar12 | 2;
LAB_00d67a7b:
      if (uVar13 == 0) {
        return 1;
      }
      uVar12 = *param_1;
      if ((uVar12 == 0xe06d7363) || (uVar12 == 0x20474343)) {
        func_0x00e87d4c(param_1,1);
        puVar5 = *(undefined4 **)(uVar16 + 0x14);
        *(undefined4 **)(uVar16 + 0x14) = puVar5 + 2;
        uVar8 = func_0x00d679a0(uVar16,0x2a);
        *puVar5 = uVar8;
        puVar5[1] = 0xfffffffb;
      }
      else if (0xff < (uVar12 ^ 0xe24c4a00)) {
        return 1;
      }
      if (((uVar13 & 2) == 0) || (pcVar7 = FUN_0044d0dc, uVar15 == 1)) {
        pcVar7 = FUN_0044d0bd;
      }
      while( true ) {
        uVar8 = func_0x0044d11f(pcVar7,uVar15);
        if ((POPCOUNT(uVar16 - 1 & 0xff) & 1U) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        bVar9 = (byte)((uint)uVar8 >> 8);
        *(char *)(uVar16 + 0x79) = *(char *)(uVar16 + 0x79) + bVar9;
        pbVar1 = (byte *)(extraout_ECX + 0x7a);
        bVar3 = *pbVar1;
        *pbVar1 = *pbVar1 + bVar9;
        uVar10 = (undefined3)((uint)uVar8 >> 8);
        pcVar2 = (char *)(CONCAT31(uVar10,-CARRY1(bVar3,bVar9)) + 0x7a);
        *pcVar2 = *pcVar2 + extraout_DH;
        *(char *)(uVar16 + 0x79) = *(char *)(uVar16 + 0x79) + (char)extraout_ECX;
        pbVar1 = (byte *)(uVar13 + 0x7a);
        bVar3 = *pbVar1;
        bVar14 = (byte)(uVar13 >> 8);
        *pbVar1 = *pbVar1 + bVar14;
        pcVar2 = (char *)(extraout_ECX + -0x5eff2986);
        *pcVar2 = *pcVar2 + bVar9;
        if ((POPCOUNT(*pcVar2) & 1U) != 0) break;
        pcVar7 = (code *)(CONCAT31(uVar10,-CARRY1(bVar3,bVar14)) & 0xffffff18);
        uVar16 = uVar16 - 1;
      }
      if ((uVar13 & 0x7f00) == 0) {
        uVar8 = func_0x00d74500();
        func_0x00d67680(unaff_retaddr,uVar8);
        pcVar7 = (code *)swi(3);
        uVar8 = (*pcVar7)();
        return uVar8;
      }
      pcVar7 = (code *)swi(3);
      uVar8 = (*pcVar7)();
      return uVar8;
    }
    iVar6 = -(uVar4 & 0xfffffff8);
code_r0x00d67a75:
    uVar11 = uVar11 + iVar6;
  } while( true );
}



int __cdecl __swprintf_l(wchar_t *_Dest,wchar_t *_Format,_locale_t _Plocinfo,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967bf0  6  __swprintf_l
  puVar1 = (undefined4 *)func_0x00462fc0(_Dest,0xffffffff,_Format,_Plocinfo,&stack0x00000010);
  iVar2 = func_0x00e87a66(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl __vswprintf_l(wchar_t *_Dest,wchar_t *_Format,_locale_t _Plocinfo,va_list _Args)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967c20  7  __vswprintf_l
  puVar1 = (undefined4 *)func_0x00462fc0(_Dest,0xffffffff,_Format,_Plocinfo,_Args);
  iVar2 = func_0x00e87a66(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _fprintf_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967c50  8  _fprintf_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x008ab06a(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fprintf_p(FILE *_File,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967c80  9  _fprintf_p
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87aea(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fprintf_p_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967cb0  10  _fprintf_p_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87aea(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fprintf_s_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967ce0  11  _fprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87ae4(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fscanf_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967d10  12  _fscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87af0(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fscanf_s_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x967d40  13  _fscanf_s_l
  puVar1 = (uint *)func_0x00877a80(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87af0(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl _fwprintf_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967d70  14  _fwprintf_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87ab4(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fwprintf_p(FILE *_File,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967da0  15  _fwprintf_p
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87ac0(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fwprintf_p_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967dd0  16  _fwprintf_p_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87ac0(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fwprintf_s_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967e00  17  _fwprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87aba(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fwscanf_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x967e30  18  _fwscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87ac6(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _fwscanf_s_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x967e60  19  _fwscanf_s_l
  puVar1 = (uint *)func_0x00877a80(_File,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87ac6(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl _printf_l(char *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x967e90  20  _printf_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x008ab06a(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _printf_p(char *_Format,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x967ec0  21  _printf_p
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x00e87aea(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _printf_p_l(char *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x967ef0  22  _printf_p_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x00e87aea(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _printf_s_l(char *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x967f20  23  _printf_s_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x00e87ae4(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _scanf_l(char *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x967f50  24  _scanf_l
  uVar1 = func_0x00e8798f(0);
  puVar2 = (undefined4 *)func_0x00877a80(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x00e87af0(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _scanf_s_l(char *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  
                    // 0x967f80  25  _scanf_s_l
  uVar1 = func_0x00e8798f(0);
  puVar2 = (uint *)func_0x00877a80(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x00e87af0(*puVar2 | 1,puVar2[1]);
  return iVar3;
}



int __cdecl _scprintf(char *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x967fc0  26  _scprintf
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,0,&stack0x00000008);
  iVar2 = func_0x008aaf54(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _scprintf_l(char *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x967ff0  27  _scprintf_l
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,_Locale,&stack0x0000000c);
  iVar2 = func_0x008aaf54(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _scprintf_p(char *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968020  28  _scprintf_p
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,0,&stack0x00000008);
  iVar2 = func_0x00e87af6(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _scprintf_p_l(char *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968050  29  _scprintf_p_l
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,_Locale,&stack0x0000000c);
  iVar2 = func_0x00e87af6(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _scwprintf(wchar_t *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968080  30  _scwprintf
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,0,&stack0x00000008);
  iVar2 = func_0x00e87a66(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _scwprintf_l(wchar_t *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x9680b0  31  _scwprintf_l
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,_Locale,&stack0x0000000c);
  iVar2 = func_0x00e87a66(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _scwprintf_p(wchar_t *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x9680e0  32  _scwprintf_p
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,0,&stack0x00000008);
  iVar2 = func_0x00e87ad8(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _scwprintf_p_l(wchar_t *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968110  33  _scwprintf_p_l
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,_Locale,&stack0x0000000c);
  iVar2 = func_0x00e87ad8(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _snprintf_c(char *_DstBuf,size_t _MaxCount,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968140  35  _snprintf_c
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,0,&stack0x00000010);
  iVar2 = func_0x008aaf54(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _snprintf_c_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968170  36  _snprintf_c_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x008aaf54(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _snprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x9681a0  37  _snprintf_l
  puVar1 = (uint *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x008aaf54(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _snprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9681e0  38  _snprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_SizeInBytes,_MaxCount,_Format,0,&stack0x00000014);
  iVar2 = func_0x008ab070(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968220  39  _snprintf_s_l
  puVar1 = (undefined4 *)
           func_0x00462fc0(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,&stack0x00000018);
  iVar2 = func_0x008ab070(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _snscanf(char *_Src,size_t _MaxCount,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968260  40  _snscanf
  puVar1 = (undefined4 *)func_0x00877a80(_Src,_MaxCount,_Format,0,&stack0x00000010);
  iVar2 = func_0x008ab076(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _snscanf_l(char *_Src,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968290  41  _snscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(_Src,_MaxCount,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x008ab076(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _snscanf_s(char *_Src,size_t _MaxCount,char *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x9682c0  42  _snscanf_s
  puVar1 = (uint *)func_0x00877a80(_Src,_MaxCount,_Format,0,&stack0x00000010);
  iVar2 = func_0x008ab076(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl _snscanf_s_l(char *_Src,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x9682f0  43  _snscanf_s_l
  puVar1 = (uint *)func_0x00877a80(_Src,_MaxCount,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x008ab076(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl _snwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968320  44  _snwprintf
  puVar1 = (uint *)func_0x00462fc0(_Dest,_Count,_Format,0,&stack0x00000010);
  iVar2 = func_0x00e87a66(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _snwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968360  45  _snwprintf_l
  puVar1 = (uint *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x00e87a66(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _snwprintf_s(wchar_t *_DstBuf,size_t _SizeInWords,size_t _MaxCount,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9683a0  46  _snwprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_SizeInWords,_MaxCount,_Format,0,&stack0x00000014);
  iVar2 = func_0x00e87ad2(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_snwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,
              ...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9683e0  47  _snwprintf_s_l
  puVar1 = (undefined4 *)
           func_0x00462fc0(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,&stack0x00000018);
  iVar2 = func_0x00e87ad2(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _snwscanf(wchar_t *_Src,size_t _MaxCount,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968420  48  _snwscanf
  puVar1 = (undefined4 *)func_0x00877a80(_Src,_MaxCount,_Format,0,&stack0x00000010);
  iVar2 = func_0x00e87ade(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _snwscanf_l(wchar_t *_Src,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968450  49  _snwscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(_Src,_MaxCount,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x00e87ade(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _snwscanf_s(wchar_t *_Src,size_t _MaxCount,wchar_t *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968480  50  _snwscanf_s
  puVar1 = (uint *)func_0x00877a80(_Src,_MaxCount,_Format,0,&stack0x00000010);
  iVar2 = func_0x00e87ade(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl _snwscanf_s_l(wchar_t *_Src,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x9684b0  51  _snwscanf_s_l
  puVar1 = (uint *)func_0x00877a80(_Src,_MaxCount,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x00e87ade(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl _sprintf_l(char *_DstBuf,char *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x9684e0  52  _sprintf_l
  puVar1 = (uint *)func_0x00462fc0(_DstBuf,0xffffffff,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x008aaf54(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _sprintf_p(char *_Dst,size_t _MaxCount,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968520  53  _sprintf_p
  puVar1 = (undefined4 *)func_0x00462fc0(_Dst,_MaxCount,_Format,0,&stack0x00000010);
  iVar2 = func_0x00e87af6(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


