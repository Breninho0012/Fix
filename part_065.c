  undefined4 uVar3;
  undefined1 auStack_8 [8];
  
  BVar1 = SetFilePointerEx(param_2,(LARGE_INTEGER)(ZEXT48(auStack_8) << 0x20),(PLARGE_INTEGER)0x1,0)
  ;
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = func_0x00e68b60(DVar2);
    func_0x00e5db40(param_2,4,uVar3);
    return 0xffffffffffffffff;
  }
  return stack0xfffffffc;
}



undefined4 FUN_00e689c0(int param_1,DWORD *param_2)

{
  HANDLE hFile;
  longlong lVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  _FILETIME _Stack_18;
  LARGE_INTEGER aLStack_10 [2];
  
  hFile = *(HANDLE *)(param_1 + 0x1c);
  BVar2 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&_Stack_18);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    uVar4 = func_0x00e68b60(DVar3);
    func_0x00e5db40(param_1,5,uVar4);
    return 0;
  }
  lVar1 = (ulonglong)_Stack_18.dwHighDateTime * 0xe57a42bd +
          ((ulonglong)_Stack_18.dwLowDateTime * 0xe57a42bd >> 0x20);
  uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar6 = (int)((ulonglong)_Stack_18.dwLowDateTime * 0xd6bf94d5 >> 0x20) +
          (uint)CARRY4((uint)((ulonglong)_Stack_18.dwLowDateTime * 0xd6bf94d5),(uint)lVar1);
  *(undefined1 *)(param_2 + 4) = 1;
  lVar1 = (ulonglong)_Stack_18.dwHighDateTime * 0xd6bf94d5 +
          (ulonglong)CONCAT14(CARRY4(uVar5,uVar6),uVar5 + uVar6);
  uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uint)lVar1 >> 0x17 | uVar6 * 0x200;
  param_2[2] = uVar5 + 0x49ef6f00;
  param_2[3] = ((uVar6 >> 0x17) - 2) - (uint)(uVar5 < 0xb6109100);
  DVar3 = GetFileType(hFile);
  if (DVar3 == 1) {
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    BVar2 = GetFileSizeEx(hFile,aLStack_10);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      uVar4 = func_0x00e68b60(DVar3);
      func_0x00e5db40(param_1,5,uVar4);
      return 0;
    }
    *param_2 = aLStack_10[0].s.LowPart;
    param_2[1] = aLStack_10[0].s.HighPart;
  }
  return 1;
}



byte FUN_00e6b090(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint _Size;
  
  piVar3 = param_1;
  uVar9 = param_1[0xb];
  if (param_1[3] - 5U <= (uint)param_1[0xb]) {
    uVar9 = param_1[3] - 5U;
  }
  iVar10 = 0;
  iVar11 = *(int *)(*param_1 + 4);
  do {
    iVar6 = *param_1;
    uVar4 = param_1[0x5af] + 0x2a >> 3;
    if (*(uint *)(iVar6 + 0x10) < uVar4) break;
    uVar4 = *(uint *)(iVar6 + 0x10) - uVar4;
    _Size = param_1[0x1b] - param_1[0x17];
    uVar5 = *(int *)(iVar6 + 4) + _Size;
    uVar8 = 0xffff;
    if (uVar5 < 0xffff) {
      uVar8 = uVar5;
    }
    if (uVar4 < uVar8) {
      uVar8 = uVar4;
    }
    if (uVar8 < uVar9) {
      if (uVar8 == 0) {
        if (param_2 != 4) break;
      }
      else if (param_2 == 0) break;
      if (uVar8 != *(int *)(iVar6 + 4) + _Size) break;
    }
    if ((param_2 == 4) && (uVar8 == *(int *)(iVar6 + 4) + _Size)) {
      iVar10 = 1;
    }
    else {
      iVar10 = 0;
    }
    func_0x00e6ea20(param_1,0,0,iVar10);
    *(byte *)(param_1[2] + -4 + param_1[5]) = (byte)uVar8;
    bVar7 = (byte)(uVar8 >> 8);
    *(byte *)(param_1[2] + -3 + param_1[5]) = bVar7;
    *(byte *)(param_1[2] + -2 + param_1[5]) = ~(byte)uVar8;
    *(byte *)(param_1[2] + -1 + param_1[5]) = ~bVar7;
    iVar6 = *param_1;
    iVar2 = *(int *)(iVar6 + 0x1c);
    func_0x00e6e5e0(iVar2);
    uVar4 = *(uint *)(iVar6 + 0x10);
    if (*(uint *)(iVar2 + 0x14) <= *(uint *)(iVar6 + 0x10)) {
      uVar4 = *(size_t *)(iVar2 + 0x14);
    }
    if (uVar4 != 0) {
      memcpy(*(void **)(iVar6 + 0xc),*(void **)(iVar2 + 0x10),uVar4);
      *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + uVar4;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + uVar4;
      *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + uVar4;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - uVar4;
      piVar1 = (int *)(iVar2 + 0x14);
      *piVar1 = *piVar1 - uVar4;
      if (*piVar1 == 0) {
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
      }
    }
    if (_Size != 0) {
      if (uVar8 < _Size) {
        _Size = uVar8;
      }
      memcpy(*(void **)(*param_1 + 0xc),(void *)(param_1[0x17] + param_1[0xe]),_Size);
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + _Size;
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) - _Size;
      *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + _Size;
      param_1[0x17] = param_1[0x17] + _Size;
      uVar8 = uVar8 - _Size;
    }
    if (uVar8 != 0) {
      func_0x00e6d770(*param_1,*(undefined4 *)(*param_1 + 0xc),uVar8);
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + uVar8;
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) - uVar8;
      *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + uVar8;
    }
  } while (iVar10 == 0);
  uVar9 = iVar11 - ((int *)*param_1)[1];
  if (uVar9 != 0) {
    uVar4 = param_1[0xb];
    if (uVar9 < uVar4) {
      uVar8 = param_1[0x1b];
      if (param_1[0xf] - uVar8 <= uVar9) {
        param_1[0x1b] = uVar8 - uVar4;
        memcpy((void *)param_1[0xe],(void *)(param_1[0xe] + uVar4),uVar8 - uVar4);
        if ((uint)param_1[0x5ac] < 2) {
          param_1[0x5ac] = param_1[0x5ac] + 1;
        }
        uVar8 = param_1[0x1b];
        if (uVar8 < (uint)param_1[0x5ad]) {
          param_1[0x5ad] = uVar8;
        }
      }
      memcpy((void *)(param_1[0xe] + uVar8),(void *)(*(int *)*param_1 - uVar9),uVar9);
      uVar4 = param_1[0xb] - param_1[0x5ad];
      iVar11 = param_1[0x1b] + uVar9;
      if (uVar4 < uVar9) {
        uVar9 = uVar4;
      }
      iVar6 = param_1[0x5ad] + uVar9;
    }
    else {
      param_1[0x5ac] = 2;
      memcpy((void *)param_1[0xe],(void *)(*(int *)*param_1 - uVar4),uVar4);
      iVar6 = param_1[0xb];
      iVar11 = iVar6;
    }
    param_1[0x1b] = iVar11;
    param_1[0x5ad] = iVar6;
    param_1[0x17] = iVar11;
  }
  uVar9 = param_1[0x1b];
  if ((uint)param_1[0x5b0] < uVar9) {
    param_1[0x5b0] = uVar9;
  }
  if (iVar10 != 0) {
    return 3;
  }
  if ((((param_2 != 0) && (param_2 != 4)) && (*(int *)(*param_1 + 4) == 0)) &&
     (uVar9 == param_1[0x17])) {
    return 1;
  }
  uVar4 = param_1[0xf] - uVar9;
  if (uVar4 < *(uint *)(*param_1 + 4)) {
    iVar11 = param_1[0xb];
    if (iVar11 <= param_1[0x17]) {
      param_1[0x17] = param_1[0x17] - iVar11;
      param_1[0x1b] = uVar9 - iVar11;
      memcpy((void *)param_1[0xe],(void *)(iVar11 + param_1[0xe]),uVar9 - iVar11);
      if ((uint)param_1[0x5ac] < 2) {
        param_1[0x5ac] = param_1[0x5ac] + 1;
      }
      uVar4 = uVar4 + param_1[0xb];
      if ((uint)param_1[0x1b] < (uint)param_1[0x5ad]) {
        param_1[0x5ad] = param_1[0x1b];
      }
    }
  }
  param_1 = (int *)uVar4;
  uVar9 = *(uint *)(*piVar3 + 4);
  if (param_1 <= uVar9) {
    uVar9 = (uint)param_1;
  }
  if (uVar9 != 0) {
    func_0x00e6d770(*piVar3,piVar3[0x1b] + piVar3[0xe],uVar9);
    piVar3[0x1b] = piVar3[0x1b] + uVar9;
    uVar4 = piVar3[0xb] - piVar3[0x5ad];
    if (uVar4 < uVar9) {
      uVar9 = uVar4;
    }
    piVar3[0x5ad] = piVar3[0x5ad] + uVar9;
  }
  uVar9 = piVar3[0x1b];
  if ((uint)piVar3[0x5b0] < uVar9) {
    piVar3[0x5b0] = uVar9;
  }
  uVar4 = piVar3[3] - (piVar3[0x5af] + 0x2a >> 3);
  if (0xffff < uVar4) {
    uVar4 = 0xffff;
  }
  uVar9 = uVar9 - piVar3[0x17];
  uVar8 = piVar3[0xb];
  if (uVar4 <= (uint)piVar3[0xb]) {
    uVar8 = uVar4;
  }
  if (uVar9 < uVar8) {
    iVar11 = 0;
    if (uVar9 == 0) {
      if (param_2 != 4) goto LAB_00e6b472;
    }
    else if (param_2 == 0) goto LAB_00e6b472;
    if ((*(int *)(*piVar3 + 4) != 0) || (uVar4 < uVar9)) goto LAB_00e6b472;
  }
  uVar8 = uVar9;
  if (uVar4 < uVar9) {
    uVar8 = uVar4;
  }
  if (((param_2 == 4) && (*(int *)(*piVar3 + 4) == 0)) && (uVar8 == uVar9)) {
    iVar11 = 1;
  }
  else {
    iVar11 = 0;
  }
  func_0x00e6ea20(piVar3,piVar3[0xe] + piVar3[0x17],uVar8,iVar11);
  piVar3[0x17] = piVar3[0x17] + uVar8;
  func_0x00e6d560(*piVar3);
LAB_00e6b472:
  return -(iVar11 != 0) & 2;
}



char FUN_00e6b490(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint *puVar10;
  bool bVar11;
  
  piVar2 = param_1;
  do {
    uVar7 = piVar2[0x1d];
    if (uVar7 < 0x106) {
      func_0x00e6d330(piVar2);
      uVar7 = piVar2[0x1d];
      if ((uVar7 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar7 == 0) {
        uVar7 = piVar2[0x1b];
        uVar8 = 2;
        if (uVar7 < 2) {
          uVar8 = uVar7;
        }
        piVar2[0x5ad] = uVar8;
        if (param_2 == 4) {
          iVar5 = piVar2[0x17];
          if (iVar5 < 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = piVar2[0xe] + iVar5;
          }
          func_0x00e6e5f0(piVar2,iVar6,uVar7 - iVar5,1);
          iVar5 = *piVar2;
          piVar2[0x17] = piVar2[0x1b];
          iVar6 = *(int *)(iVar5 + 0x1c);
          func_0x00e6e5e0(iVar6);
          uVar7 = *(uint *)(iVar5 + 0x10);
          if (*(uint *)(iVar6 + 0x14) <= *(uint *)(iVar5 + 0x10)) {
            uVar7 = *(size_t *)(iVar6 + 0x14);
          }
          if (uVar7 != 0) {
            memcpy(*(void **)(iVar5 + 0xc),*(void **)(iVar6 + 0x10),uVar7);
            *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + uVar7;
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + uVar7;
            *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + uVar7;
            *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) - uVar7;
            piVar1 = (int *)(iVar6 + 0x14);
            *piVar1 = *piVar1 - uVar7;
            if (*piVar1 == 0) {
              *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 8);
            }
          }
          return (*(int *)(*piVar2 + 0x10) != 0) + '\x02';
        }
        if (piVar2[0x5a8] != 0) {
          iVar5 = piVar2[0x17];
          if (iVar5 < 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = piVar2[0xe] + iVar5;
          }
          func_0x00e6e5f0(piVar2,iVar6,uVar7 - iVar5,0);
          iVar5 = *piVar2;
          piVar2[0x17] = piVar2[0x1b];
          iVar6 = *(int *)(iVar5 + 0x1c);
          func_0x00e6e5e0(iVar6);
          uVar7 = *(uint *)(iVar5 + 0x10);
          if (*(uint *)(iVar6 + 0x14) <= *(uint *)(iVar5 + 0x10)) {
            uVar7 = *(size_t *)(iVar6 + 0x14);
          }
          if (uVar7 != 0) {
            memcpy(*(void **)(iVar5 + 0xc),*(void **)(iVar6 + 0x10),uVar7);
            *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + uVar7;
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + uVar7;
            *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + uVar7;
            *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) - uVar7;
            piVar1 = (int *)(iVar6 + 0x14);
            *piVar1 = *piVar1 - uVar7;
            if (*piVar1 == 0) {
              *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 8);
            }
          }
          if (*(int *)(*piVar2 + 0x10) == 0) {
            return '\0';
          }
        }
        return '\x01';
      }
    }
    puVar10 = (uint *)(piVar2 + 0x1b);
    if (2 < uVar7) {
      uVar7 = (piVar2[0x12] << ((byte)piVar2[0x16] & 0x1f) ^
              (uint)*(byte *)(*puVar10 + 2 + piVar2[0xe])) & piVar2[0x15];
      piVar2[0x12] = uVar7;
      *(undefined2 *)(piVar2[0x10] + (*puVar10 & piVar2[0xd]) * 2) =
           *(undefined2 *)(piVar2[0x11] + uVar7 * 2);
      uVar7 = (uint)*(ushort *)(piVar2[0x10] + (*puVar10 & piVar2[0xd]) * 2);
      *(short *)(piVar2[0x11] + piVar2[0x12] * 2) = (short)*puVar10;
      if ((uVar7 != 0) && (*puVar10 - uVar7 <= piVar2[0xb] - 0x106U)) {
        iVar5 = func_0x00e6d5b0(piVar2,uVar7);
        piVar2[0x18] = iVar5;
      }
    }
    if ((uint)piVar2[0x18] < 3) {
      bVar3 = *(byte *)(piVar2[0xe] + *puVar10);
      *(undefined1 *)(piVar2[0x5a6] + piVar2[0x5a8]) = 0;
      iVar5 = piVar2[0x5a8];
      piVar2[0x5a8] = iVar5 + 1;
      *(undefined1 *)(iVar5 + 1 + piVar2[0x5a6]) = 0;
      iVar5 = piVar2[0x5a8];
      piVar2[0x5a8] = iVar5 + 1;
      *(byte *)(iVar5 + 1 + piVar2[0x5a6]) = bVar3;
      piVar2[0x5a8] = piVar2[0x5a8] + 1;
      *(short *)(piVar2 + bVar3 + 0x25) = (short)piVar2[bVar3 + 0x25] + 1;
      bVar11 = piVar2[0x5a8] == piVar2[0x5a9];
      piVar2[0x1d] = piVar2[0x1d] + -1;
      *puVar10 = *puVar10 + 1;
      uVar7 = *puVar10;
    }
    else {
      bVar3 = (char)piVar2[0x18] - 3;
      sVar4 = (short)*puVar10 - (short)piVar2[0x1c];
      *(char *)(piVar2[0x5a6] + piVar2[0x5a8]) = (char)sVar4;
      iVar5 = piVar2[0x5a8];
      uVar9 = sVar4 - 1;
      piVar2[0x5a8] = iVar5 + 1;
      *(char *)(iVar5 + 1 + piVar2[0x5a6]) = (char)((ushort)sVar4 >> 8);
      iVar5 = piVar2[0x5a8];
      piVar2[0x5a8] = iVar5 + 1;
      *(byte *)(iVar5 + 1 + piVar2[0x5a6]) = bVar3;
      piVar2[0x5a8] = piVar2[0x5a8] + 1;
      *(short *)(piVar2 + (byte)(&DAT_01116f98)[bVar3] + 0x126) =
           (short)piVar2[(byte)(&DAT_01116f98)[bVar3] + 0x126] + 1;
      if (uVar9 < 0x100) {
        bVar3 = (&DAT_01117098)[uVar9];
      }
      else {
        bVar3 = (&DAT_01117198)[uVar9 >> 7];
      }
      *(short *)(piVar2 + bVar3 + 0x262) = (short)piVar2[bVar3 + 0x262] + 1;
      bVar11 = piVar2[0x5a8] == piVar2[0x5a9];
      iVar5 = piVar2[0x1d];
      uVar7 = piVar2[0x18];
      piVar2[0x1d] = iVar5 - uVar7;
      if (((uint)piVar2[0x20] < uVar7) || (iVar5 - uVar7 < 3)) {
        uVar7 = piVar2[0x1b] + uVar7;
        piVar2[0x1b] = uVar7;
        piVar2[0x18] = 0;
        uVar8 = (uint)*(byte *)(piVar2[0xe] + uVar7);
        piVar2[0x12] = uVar8;
        piVar2[0x12] = (uVar8 << ((byte)piVar2[0x16] & 0x1f) ^
                       (uint)*(byte *)(piVar2[0xe] + 1 + uVar7)) & piVar2[0x15];
      }
      else {
        piVar2[0x18] = uVar7 - 1;
        do {
          piVar2[0x1b] = piVar2[0x1b] + 1;
          uVar7 = ((uint)*(byte *)(piVar2[0xe] + 2 + piVar2[0x1b]) ^
                  piVar2[0x12] << ((byte)piVar2[0x16] & 0x1f)) & piVar2[0x15];
          piVar2[0x12] = uVar7;
          *(undefined2 *)(piVar2[0x10] + (piVar2[0xd] & piVar2[0x1b]) * 2) =
               *(undefined2 *)(piVar2[0x11] + uVar7 * 2);
          *(short *)(piVar2[0x11] + piVar2[0x12] * 2) = (short)piVar2[0x1b];
          piVar1 = piVar2 + 0x18;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        uVar7 = piVar2[0x1b] + 1;
        piVar2[0x1b] = uVar7;
      }
    }
    param_1 = piVar2 + 0xe;
    if (bVar11) {
      iVar5 = piVar2[0x17];
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *param_1 + iVar5;
      }
      func_0x00e6e5f0(piVar2,iVar6,uVar7 - iVar5,0);
      iVar5 = *piVar2;
      piVar2[0x17] = piVar2[0x1b];
      iVar6 = *(int *)(iVar5 + 0x1c);
      func_0x00e6e5e0(iVar6);
      uVar7 = *(uint *)(iVar5 + 0x10);
      if (*(uint *)(iVar6 + 0x14) <= *(uint *)(iVar5 + 0x10)) {
        uVar7 = *(size_t *)(iVar6 + 0x14);
      }
      if (uVar7 != 0) {
        memcpy(*(void **)(iVar5 + 0xc),*(void **)(iVar6 + 0x10),uVar7);
        *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + uVar7;
        *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + uVar7;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + uVar7;
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) - uVar7;
        piVar1 = (int *)(iVar6 + 0x14);
        *piVar1 = *piVar1 - uVar7;
        if (*piVar1 == 0) {
          *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 8);
        }
      }
      if (*(int *)(*piVar2 + 0x10) == 0) {
        return '\0';
      }
    }
  } while( true );
}



char FUN_00e6b8e0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  
  do {
    puVar10 = (uint *)(param_1 + 0x1b);
    uVar12 = param_1[0x1d];
    if (uVar12 < 0x106) {
      func_0x00e6d330(param_1);
      uVar12 = param_1[0x1d];
      if ((uVar12 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar12 == 0) {
        if (param_1[0x1a] != 0) {
          bVar8 = *(byte *)(param_1[0xe] + -1 + param_1[0x1b]);
          *(undefined1 *)(param_1[0x5a6] + param_1[0x5a8]) = 0;
          param_1[0x5a8] = param_1[0x5a8] + 1;
          *(undefined1 *)(param_1[0x5a8] + param_1[0x5a6]) = 0;
          param_1[0x5a8] = param_1[0x5a8] + 1;
          *(byte *)(param_1[0x5a8] + param_1[0x5a6]) = bVar8;
          param_1[0x5a8] = param_1[0x5a8] + 1;
          *(short *)(param_1 + bVar8 + 0x25) = (short)param_1[bVar8 + 0x25] + 1;
          param_1[0x1a] = 0;
        }
        uVar12 = param_1[0x1b];
        uVar11 = 2;
        if (uVar12 < 2) {
          uVar11 = uVar12;
        }
        param_1[0x5ad] = uVar11;
        if (param_2 == 4) {
          iVar2 = param_1[0x17];
          if (iVar2 < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = param_1[0xe] + iVar2;
          }
          func_0x00e6e5f0(param_1,iVar4,uVar12 - iVar2,1);
          iVar2 = *param_1;
          param_1[0x17] = param_1[0x1b];
          iVar4 = *(int *)(iVar2 + 0x1c);
          func_0x00e6e5e0(iVar4);
          uVar12 = *(uint *)(iVar2 + 0x10);
          if (*(uint *)(iVar4 + 0x14) <= *(uint *)(iVar2 + 0x10)) {
            uVar12 = *(size_t *)(iVar4 + 0x14);
          }
          if (uVar12 != 0) {
            memcpy(*(void **)(iVar2 + 0xc),*(void **)(iVar4 + 0x10),uVar12);
            *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + uVar12;
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + uVar12;
            *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + uVar12;
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) - uVar12;
            piVar1 = (int *)(iVar4 + 0x14);
            *piVar1 = *piVar1 - uVar12;
            if (*piVar1 == 0) {
              *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 8);
            }
          }
          return (*(int *)(*param_1 + 0x10) != 0) + '\x02';
        }
        if (param_1[0x5a8] != 0) {
          iVar2 = param_1[0x17];
          if (iVar2 < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = param_1[0xe] + iVar2;
          }
          func_0x00e6e5f0(param_1,iVar4,uVar12 - iVar2,0);
          iVar2 = *param_1;
          param_1[0x17] = param_1[0x1b];
          iVar4 = *(int *)(iVar2 + 0x1c);
          func_0x00e6e5e0(iVar4);
          uVar12 = *(uint *)(iVar2 + 0x10);
          if (*(uint *)(iVar4 + 0x14) <= *(uint *)(iVar2 + 0x10)) {
            uVar12 = *(size_t *)(iVar4 + 0x14);
          }
          if (uVar12 != 0) {
            memcpy(*(void **)(iVar2 + 0xc),*(void **)(iVar4 + 0x10),uVar12);
            *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + uVar12;
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + uVar12;
            *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + uVar12;
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) - uVar12;
            piVar1 = (int *)(iVar4 + 0x14);
            *piVar1 = *piVar1 - uVar12;
            if (*piVar1 == 0) {
              *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 8);
            }
          }
          if (*(int *)(*param_1 + 0x10) == 0) {
            return '\0';
          }
        }
        return '\x01';
      }
    }
    uVar11 = 0;
    if (2 < uVar12) {
      uVar12 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
               (uint)*(byte *)(param_1[0xe] + 2 + *puVar10)) & param_1[0x15];
      param_1[0x12] = uVar12;
      *(undefined2 *)(param_1[0x10] + (param_1[0xd] & *puVar10) * 2) =
           *(undefined2 *)(param_1[0x11] + uVar12 * 2);
      uVar11 = (uint)*(ushort *)(param_1[0x10] + (param_1[0xd] & *puVar10) * 2);
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)*puVar10;
    }
    uVar12 = param_1[0x18];
    uVar7 = 2;
    param_1[0x1e] = uVar12;
    param_1[0x19] = param_1[0x1c];
    param_1[0x18] = 2;
    if (((uVar11 != 0) && (uVar12 < (uint)param_1[0x20])) &&
       (*puVar10 - uVar11 <= param_1[0xb] - 0x106U)) {
      uVar7 = func_0x00e6d5b0(param_1,uVar11);
      param_1[0x18] = uVar7;
      if ((uVar7 < 6) &&
         ((param_1[0x22] == 1 || ((uVar7 == 3 && (0x1000 < (uint)(param_1[0x1b] - param_1[0x1c])))))
         )) {
        param_1[0x18] = 2;
        uVar7 = 2;
      }
    }
    uVar12 = param_1[0x1e];
    if ((uVar12 < 3) || (uVar12 < uVar7)) {
      piVar1 = param_1 + 0x1b;
      if (param_1[0x1a] == 0) {
        *piVar1 = *piVar1 + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        param_1[0x1a] = 1;
      }
      else {
        bVar8 = *(byte *)(param_1[0xe] + -1 + *piVar1);
        *(undefined1 *)(param_1[0x5a6] + param_1[0x5a8]) = 0;
        param_1[0x5a8] = param_1[0x5a8] + 1;
        *(undefined1 *)(param_1[0x5a8] + param_1[0x5a6]) = 0;
        param_1[0x5a8] = param_1[0x5a8] + 1;
        *(byte *)(param_1[0x5a8] + param_1[0x5a6]) = bVar8;
        param_1[0x5a8] = param_1[0x5a8] + 1;
        *(short *)(param_1 + bVar8 + 0x25) = (short)param_1[bVar8 + 0x25] + 1;
        if (param_1[0x5a8] == param_1[0x5a9]) {
          iVar2 = param_1[0x17];
          if (iVar2 < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = param_1[0xe] + iVar2;
          }
          func_0x00e6e5f0(param_1,iVar4,*piVar1 - iVar2,0);
          iVar2 = *param_1;
          param_1[0x17] = *piVar1;
          iVar4 = *(int *)(iVar2 + 0x1c);
          func_0x00e6e5e0(iVar4);
          uVar12 = *(uint *)(iVar2 + 0x10);
          if (*(uint *)(iVar4 + 0x14) <= *(uint *)(iVar2 + 0x10)) {
            uVar12 = *(size_t *)(iVar4 + 0x14);
          }
          if (uVar12 != 0) {
            memcpy(*(void **)(iVar2 + 0xc),*(void **)(iVar4 + 0x10),uVar12);
            *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + uVar12;
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + uVar12;
            *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + uVar12;
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) - uVar12;
            piVar1 = (int *)(iVar4 + 0x14);
            *piVar1 = *piVar1 - uVar12;
            if (*piVar1 == 0) {
              *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 8);
            }
          }
        }
        param_1[0x1b] = param_1[0x1b] + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        if (*(int *)(*param_1 + 0x10) == 0) {
          return '\0';
        }
      }
    }
    else {
      iVar2 = param_1[0x1d];
      puVar10 = (uint *)(param_1 + 0x1b);
      uVar11 = *puVar10;
      sVar5 = (short)uVar11 - (short)param_1[0x19];
      bVar8 = (char)uVar12 - 3;
      sVar6 = sVar5 + -1;
      *(char *)(param_1[0x5a6] + param_1[0x5a8]) = (char)sVar6;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      uVar9 = sVar5 - 2;
      *(char *)(param_1[0x5a8] + param_1[0x5a6]) = (char)((ushort)sVar6 >> 8);
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(byte *)(param_1[0x5a8] + param_1[0x5a6]) = bVar8;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&DAT_01116f98)[bVar8] + 0x126) =
           (short)param_1[(byte)(&DAT_01116f98)[bVar8] + 0x126] + 1;
      if (uVar9 < 0x100) {
        bVar8 = (&DAT_01117098)[uVar9];
      }
      else {
        bVar8 = (&DAT_01117198)[uVar9 >> 7];
      }
      *(short *)(param_1 + bVar8 + 0x262) = (short)param_1[bVar8 + 0x262] + 1;
      iVar4 = param_1[0x5a8];
      iVar3 = param_1[0x5a9];
      param_1[0x1d] = param_1[0x1d] + (1 - param_1[0x1e]);
      param_1[0x1e] = param_1[0x1e] + -2;
      do {
        uVar12 = *puVar10;
        uVar7 = uVar12 + 1;
        *puVar10 = uVar7;
        if (uVar7 <= iVar2 + -3 + uVar11) {
          uVar12 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
                   (uint)*(byte *)(uVar12 + 3 + param_1[0xe])) & param_1[0x15];
          param_1[0x12] = uVar12;
          *(undefined2 *)(param_1[0x10] + (param_1[0xd] & uVar7) * 2) =
               *(undefined2 *)(param_1[0x11] + uVar12 * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)*puVar10;
          uVar7 = *puVar10;
        }
        piVar1 = param_1 + 0x1e;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      param_1[0x1a] = 0;
      param_1[0x18] = 2;
      param_1[0x1b] = uVar7 + 1;
      if (iVar4 == iVar3) {
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0xe] + iVar2;
        }
        func_0x00e6e5f0(param_1,iVar4,(uVar7 + 1) - iVar2,0);
        iVar2 = *param_1;
        param_1[0x17] = param_1[0x1b];
        iVar4 = *(int *)(iVar2 + 0x1c);
        func_0x00e6e5e0(iVar4);
        uVar12 = *(uint *)(iVar2 + 0x10);
        if (*(uint *)(iVar4 + 0x14) <= *(uint *)(iVar2 + 0x10)) {
          uVar12 = *(size_t *)(iVar4 + 0x14);
        }
        if (uVar12 != 0) {
          memcpy(*(void **)(iVar2 + 0xc),*(void **)(iVar4 + 0x10),uVar12);
          *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + uVar12;
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + uVar12;
          *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + uVar12;
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) - uVar12;
          piVar1 = (int *)(iVar4 + 0x14);
          *piVar1 = *piVar1 - uVar12;
          if (*piVar1 == 0) {
            *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 8);
          }
        }
        if (*(int *)(*param_1 + 0x10) == 0) {
          return '\0';
        }
      }
    }
  } while( true );
}



void FUN_00e6d890(undefined4 param_1,int param_2,int param_3)

{
  func_0x008aafe4(param_2 * param_3);
  return;
}



void FUN_00e6d8b0(undefined4 param_1,void *param_2)

{
  free(param_2);
  return;
}



undefined4 * __thiscall FUN_00e70010(undefined4 *param_1,undefined4 param_2)

{
  FUN_00463100(param_2);
  *param_1 = std::bad_function_call::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00e70040(undefined4 *param_1,int param_2)

{
  FUN_00463100(param_2);
  *param_1 = std::regex_error::vftable;
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



undefined4 * __thiscall FUN_00e700a0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::exception::vftable;
  func_0x008ab0a6(param_1 + 1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e700d0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::exception::vftable;
  func_0x008ab0a6(param_1 + 1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



char * FUN_00e70280(void)

{
  return "bad function call";
}



undefined4 __thiscall FUN_00e703c0(undefined4 param_1,byte param_2)

{
  func_0x00e70386();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



void __fastcall FUN_00e70650(undefined4 param_1)

{
  func_0x00e6ff8c(0,param_1);
  func_0x00e7060b(&DAT_0145c31c);
  DAT_0145c31c = 0;
  func_0x00e6ffe4();
  return;
}



void FUN_00e73eb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}



void FUN_00e73ed0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  public: __thiscall std::bad_alloc::bad_alloc(class std::bad_alloc const &)
//  public: __thiscall std::bad_exception::bad_exception(class std::bad_exception const &)
// 
// Library: Visual Studio 2019 Release

undefined4 * __thiscall FID_conflict_bad_exception(undefined4 *param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6f4ab;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_00463100(param_2);
  *param_1 = std::bad_exception::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



// Library Function - Multiple Matches With Different Base Names
//  public: virtual __thiscall std::bad_alloc::~bad_alloc(void)
//  public: virtual __thiscall std::bad_exception::~bad_exception(void)
// 
// Library: Visual Studio 2019 Release

void __fastcall FID_conflict__bad_alloc(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6f4d5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = std::exception::vftable;
  func_0x008ab0a6(param_1 + 1,uVar1,param_1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_00e74c00(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6f5b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  FUN_004632a0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00e74c60(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6f5dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  FID_conflict__bad_alloc(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00e74ce0(undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x60);
  }
  return param_1;
}



// Library Function - Multiple Matches With Different Base Names
//  public: virtual void * __thiscall std::bad_alloc::`scalar deleting destructor'(unsigned int)
//  public: virtual void * __thiscall std::bad_exception::`scalar deleting destructor'(unsigned int)
// 
// Library: Visual Studio 2019 Release

undefined4 __thiscall FID_conflict__scalar_deleting_destructor_(undefined4 param_1,byte param_2)

{
  FID_conflict__bad_alloc();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined * Catch_00e74de0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  uint uVar5;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  piVar1 = (int *)func_0x00e87d1c();
  piVar1 = (int *)*piVar1;
  if ((*piVar1 == -0x1fbcb0b3) || (*piVar1 == -0x1fbcbcae)) {
    free(*(void **)(unaff_EBP + -0x14));
    uVar3 = func_0x00e75168(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    func_0x00e74b17(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      func_0x00463fb0();
    }
    return &LAB_00e74dcc;
  }
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((piVar1[5] == 0x19930520 ||
      (((piVar1[5] == 0x19930521 || (piVar1[5] == 0x19930522)) || (piVar1[5] == 0x1994000)))))) {
    iVar4 = *(int *)(*(int *)(piVar1[7] + 0xc) + 4);
    uVar5 = *(int *)(iVar4 + 0x14) + 0x60;
    if (*(uint *)(unaff_EBP + -0x1c) < uVar5) {
      free(*(void **)(unaff_EBP + -0x14));
      iVar2 = func_0x008aafe4(uVar5);
      *(int *)(unaff_EBP + -0x14) = iVar2;
      if (iVar2 == 0) {
        uVar3 = func_0x00e7510a(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        func_0x00e74b17(uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          func_0x00463fb0();
        }
        return &DAT_00e74e9a;
      }
    }
    else {
      iVar2 = *(int *)(unaff_EBP + -0x14);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    func_0x00e74fae(iVar2 + 0x60,piVar1[6],iVar4);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    iVar4 = func_0x00e74926(piVar1);
    *(int *)(iVar4 + 0x24) = iVar2 + 0x60;
    piVar1 = *(int **)(unaff_EBP + 8);
    *piVar1 = iVar4 + 0xc;
    piVar1[1] = iVar4;
    return &DAT_00e74edc;
  }
  iVar4 = func_0x00e74926(piVar1);
  piVar1 = *(int **)(unaff_EBP + 8);
  *piVar1 = iVar4 + 0xc;
  piVar1[1] = iVar4;
  return &DAT_00e74f43;
}



undefined1 * Catch_00e74ee1(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  free(*(void **)(unaff_EBP + -0x14));
  uVar1 = func_0x00e75168(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  func_0x00e74b17(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x00463fb0();
  }
  return &LAB_00e74f17;
}



void __fastcall FUN_00e75020(void *param_1)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  free(param_1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// Library Function - Single Match
//  private: virtual void __thiscall `anonymous namespace'::_ExceptionPtr_normal::_Destroy(void)
// 
// Library: Visual Studio 2019 Release

void __fastcall __Destroy__ExceptionPtr_normal__A0x026ba49f__EAEXXZ(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((*(int *)(param_1 + 0xc) == -0x1f928c9d) && (*(int *)(param_1 + 0x1c) == 3)) &&
     ((iVar1 = *(int *)(param_1 + 0x20), iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x00e879b9(uVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    piVar2 = *(int **)(param_1 + 0x24);
    if (piVar2 != (int *)0x0) {
      if (*(int *)(iVar1 + 4) == 0) {
        if (((**(byte **)(*(int *)(iVar1 + 0xc) + 4) & 8) != 0) &&
           (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) {
          pcVar3 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar3)();
        }
      }
      else {
        func_0x00e74f7e(piVar2,*(undefined4 *)(iVar1 + 4));
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00e75720(PTP_CALLBACK_INSTANCE param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  HMODULE mod;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar3 = func_0x00e7567d(uVar2);
  if (iVar3 != 1) {
    func_0x005700c0();
    DAT_0145c668 = DAT_0145c668 + 1;
    func_0x00e730b2(&DAT_012bac48);
  }
  iVar3 = func_0x00e7567d(uVar2);
  if (iVar3 != 0) {
    mod = (HMODULE)func_0x00e75660(6,*(undefined4 *)(param_2 + 4));
    if (mod != (HMODULE)0x0) {
      FreeLibraryWhenCallbackReturns(param_1,mod);
    }
  }
  pcVar1 = *(code **)(param_2 + 4);
  _guard_check_icall(*(undefined4 *)(param_2 + 8));
  (*pcVar1)();
  iVar3 = func_0x00e7567d();
  if (iVar3 != 1) {
    func_0x005700c0();
    iVar3 = DAT_0145c668 + -1;
    DAT_0145c668 = iVar3;
    func_0x00e730b2(&DAT_012bac48);
    if (iVar3 == 0) {
      func_0x00e7323d(&DAT_0145c66c);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00e75af0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleW(L"kernel32.dll");
  DAT_0145c6e4 = GetProcAddress(hModule,"GetSystemTimePreciseAsFileTime");
  _DAT_0145c6e8 = GetProcAddress(hModule,"GetTempPath2W");
  return 0;
}



undefined4 * __thiscall FUN_00e7a0a0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Mpunct<>::vftable;
  func_0x00e7ed5f();
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e7a0d0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Mpunct<wchar_t>::vftable;
  func_0x00e7ed5f();
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e7a100(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  return param_1;
}



undefined4 __thiscall FUN_00e7a130(undefined4 param_1,byte param_2)

{
  func_0x00e79e88();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00e7a160(undefined4 param_1,byte param_2)

{
  func_0x00e79ea2();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00e7a190(undefined4 param_1,byte param_2)

{
  func_0x00e79ebc();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e7a1c0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e7a1f0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::numpunct<>::vftable;
  func_0x00e7ed87();
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e7a220(undefined4 *param_1,byte param_2)

{
  *param_1 = std::time_get<>::vftable;
  func_0x00e7eda7();
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e7a250(undefined4 *param_1,byte param_2)

{
  *param_1 = std::time_get<>::vftable;
  func_0x00e7eda7();
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



undefined4 __thiscall FUN_00e7a280(undefined4 param_1,byte param_2)

{
  func_0x00e79ee5();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 __thiscall FUN_00e7a2b0(undefined4 param_1,byte param_2)

{
  func_0x00e79eff();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



uint __thiscall
FUN_00e7ef60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00e76b3a(param_2,param_3,param_4,param_5,param_1 + 8);
  uVar2 = (uint)(iVar1 != 0);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



uint __thiscall
FUN_00e7ef90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00e874a5(param_2,param_3,param_4,param_5,param_1 + 8);
  uVar2 = (uint)(iVar1 != 0);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 __thiscall FUN_00e7efc0(int param_1,undefined4 param_2)

{
  func_0x00e79d69(*(undefined4 *)(param_1 + 0x10),param_1);
  return param_2;
}



undefined4 __thiscall FUN_00e7efe0(int param_1,undefined4 param_2)

{
  func_0x005dd330(*(undefined4 *)(param_1 + 0x10),param_1);
  return param_2;
}



undefined4 __thiscall FUN_00e7f000(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_00000014;
  
  func_0x00e79d33(in_stack_00000014,param_1);
  return param_2;
}



undefined4 __thiscall FUN_00e7f020(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_00000014;
  
  func_0x00589010(in_stack_00000014,param_1);
  return param_2;
}



void FUN_00e7f040(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  int unaff_EBP;
  int iVar5;
  float10 fVar6;
  
  func_0x00e88497(0x48);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = *(uint **)(unaff_EBP + 0x24);
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x28);
  func_0x00e7b1cb(unaff_EBP + -0x40,unaff_EBP + 0xc,unaff_EBP + 0x14,
                  *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                  unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    iVar5 = unaff_EBP + -0x40;
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      iVar5 = *(int *)(unaff_EBP + -0x40);
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    fVar6 = (float10)func_0x0047d710(iVar5,unaff_EBP + -0x48,unaff_EBP + -0x44);
    *(double *)(unaff_EBP + -0x54) = (double)fVar6;
    if ((*(int *)(unaff_EBP + -0x48) != iVar5) && (*(int *)(unaff_EBP + -0x44) == 0)) {
      **(undefined8 **)(unaff_EBP + -0x4c) = *(undefined8 *)(unaff_EBP + -0x54);
      goto LAB_00e7f0d0;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_00e7f0d0:
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar3;
  FUN_00469ba0();
  func_0x00e88455();
  return;
}



void FUN_00e7f0f0(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBP;
  uint uVar9;
  
  func_0x00e88497(0x3c);
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  puVar2 = *(undefined4 **)(unaff_EBP + 0x28);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 8);
  func_0x00e7b1cb(unaff_EBP + -0x40,unaff_EBP + 0xc,unaff_EBP + 0x14,
                  *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                  unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x30);
  uVar9 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x44) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    uVar3 = *(uint *)(unaff_EBP + -0x44);
    func_0x00e83a2d(uVar3,0);
    pcVar6 = (char *)(unaff_EBP + -0x40);
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      pcVar6 = *(char **)(unaff_EBP + -0x40);
    }
    if (*pcVar6 == '-') {
      puVar8 = puVar2;
      if (7 < (uint)puVar2[5]) {
        puVar8 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)puVar8 = *(undefined2 *)(unaff_EBP + -0x14);
      uVar9 = 1;
    }
    for (; uVar9 < uVar3; uVar9 = uVar9 + 1) {
      iVar7 = unaff_EBP + -0x40;
      if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
        iVar7 = *(int *)(unaff_EBP + -0x40);
      }
      puVar8 = puVar2;
      if (7 < (uint)puVar2[5]) {
        puVar8 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)((int)puVar8 + uVar9 * 2) =
           *(undefined2 *)(unaff_EBP + -0x88 + *(char *)(iVar7 + uVar9) * 2);
    }
  }
  puVar2 = *(undefined4 **)(unaff_EBP + -0x48);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = uVar4;
  FUN_00469ba0();
  func_0x00e88455();
  return;
}



void FUN_00e7f1d0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  int unaff_EBP;
  int iVar5;
  float10 fVar6;
  
  func_0x00e88497(0x48);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = *(uint **)(unaff_EBP + 0x24);
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x28);
  func_0x00e7bed6(unaff_EBP + -0x40,unaff_EBP + 0xc,unaff_EBP + 0x14,
                  *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                  unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    iVar5 = unaff_EBP + -0x40;
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      iVar5 = *(int *)(unaff_EBP + -0x40);
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    fVar6 = (float10)func_0x0047d710(iVar5,unaff_EBP + -0x48,unaff_EBP + -0x44);
    *(double *)(unaff_EBP + -0x54) = (double)fVar6;
    if ((*(int *)(unaff_EBP + -0x48) != iVar5) && (*(int *)(unaff_EBP + -0x44) == 0)) {
      **(undefined8 **)(unaff_EBP + -0x4c) = *(undefined8 *)(unaff_EBP + -0x54);
      goto LAB_00e7f260;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_00e7f260:
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar3;
  FUN_00469ba0();
  func_0x00e88455();
  return;
}



void FUN_00e7f280(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBP;
  uint uVar9;
  
  func_0x00e88497(0x3c);
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  puVar2 = *(undefined4 **)(unaff_EBP + 0x28);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 8);
  func_0x00e7bed6(unaff_EBP + -0x40,unaff_EBP + 0xc,unaff_EBP + 0x14,
                  *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                  unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x30);
  uVar9 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x44) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    uVar3 = *(uint *)(unaff_EBP + -0x44);
    func_0x00588e50(uVar3,0);
    pcVar6 = (char *)(unaff_EBP + -0x40);
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      pcVar6 = *(char **)(unaff_EBP + -0x40);
    }
    if (*pcVar6 == '-') {
      puVar8 = puVar2;
      if (7 < (uint)puVar2[5]) {
        puVar8 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)puVar8 = *(undefined2 *)(unaff_EBP + -0x14);
      uVar9 = 1;
    }
    for (; uVar9 < uVar3; uVar9 = uVar9 + 1) {
      iVar7 = unaff_EBP + -0x40;
      if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
        iVar7 = *(int *)(unaff_EBP + -0x40);
      }
      puVar8 = puVar2;
      if (7 < (uint)puVar2[5]) {
        puVar8 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)((int)puVar8 + uVar9 * 2) =
           *(undefined2 *)(unaff_EBP + -0x88 + *(char *)(iVar7 + uVar9) * 2);
    }
  }
  puVar2 = *(undefined4 **)(unaff_EBP + -0x48);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = uVar4;
  FUN_00469ba0();
  func_0x00e88455();
  return;
}



void FUN_00e7f360(void)

{
  uint *puVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  int unaff_EBP;
  int iVar8;
  bool bVar9;
  
  func_0x00e88497(0x3c);
  iVar8 = *(int *)(unaff_EBP + 0x1c);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  psVar2 = *(short **)(unaff_EBP + 0x24);
  uVar3 = *(undefined4 *)(iVar8 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 8);
  func_0x00464280(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e7823f(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar8 + 0x14),unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x38) = uVar6;
  func_0x004642b0();
  cVar5 = (char)*(undefined2 *)(unaff_EBP + -0x38);
  if (cVar5 < '\0') {
    *puVar1 = 2;
    *psVar2 = 0;
  }
  else {
    bVar9 = *(char *)(unaff_EBP + -0x30) == '-';
    *(bool *)(unaff_EBP + -0x31) = bVar9;
    iVar8 = unaff_EBP + -0x2f;
    if (!bVar9) {
      iVar8 = unaff_EBP + -0x30;
    }
    uVar7 = func_0x00e72aff(iVar8,unaff_EBP + -0x44,(int)cVar5,unaff_EBP + -0x3c);
    *psVar2 = (short)uVar7;
    if (((*(int *)(unaff_EBP + -0x44) == iVar8) || (*(int *)(unaff_EBP + -0x3c) != 0)) ||
       (0xffff < uVar7)) {
      *puVar1 = 2;
      *psVar2 = -1;
    }
    else if (*(char *)(unaff_EBP + -0x31) != '\0') {
      *psVar2 = -(short)uVar7;
    }
    if (*(char *)(unaff_EBP + -0x37) != '\0') {
      *puVar1 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  puVar4 = *(undefined4 **)(unaff_EBP + -0x48);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar4[1] = uVar3;
  func_0x00e88455();
  return;
}



void FUN_00e7f460(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  
  puVar3 = (undefined4 *)
           FUN_00e7f570(auStack_10,param_2,param_3,param_4,param_5,param_6,param_7,&uStack_8);
  uVar1 = puVar3[1];
  uVar2 = *puVar3;
  *param_8 = uStack_8;
  param_1[1] = uVar1;
  *param_1 = uVar2;
  return;
}



void FUN_00e7f4a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int unaff_EBP;
  
  func_0x00e88497(0x38);
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  puVar3 = *(uint **)(unaff_EBP + 0x20);
  uVar7 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 0x24);
  func_0x00464280(uVar7);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e7823f(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar1 + 0x14),unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar6;
  func_0x004642b0();
  cVar5 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar5 < '\0') {
    puVar4 = *(undefined4 **)(unaff_EBP + -0x38);
    *puVar3 = 2;
    *puVar4 = 0;
  }
  else {
    uVar7 = func_0x00e72a4c(unaff_EBP + -0x30,unaff_EBP + -0x44,(int)cVar5,unaff_EBP + -0x3c);
    **(undefined4 **)(unaff_EBP + -0x38) = uVar7;
    if (((*(int *)(unaff_EBP + -0x44) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x3c) != 0))
       || (*(char *)(unaff_EBP + -0x33) != '\0')) {
      *puVar3 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar3 = *puVar3 | 1;
  }
  uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = uVar7;
  func_0x00e88455();
  return;
}



void FUN_00e7f570(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int unaff_EBP;
  
  func_0x00e88497(0x38);
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  puVar3 = *(uint **)(unaff_EBP + 0x20);
  uVar7 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 0x24);
  func_0x00464280(uVar7);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e7823f(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar1 + 0x14),unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar6;
  func_0x004642b0();
  cVar5 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar5 < '\0') {
    puVar4 = *(undefined4 **)(unaff_EBP + -0x38);
    *puVar3 = 2;
    *puVar4 = 0;
  }
  else {
    uVar7 = func_0x00e72aff(unaff_EBP + -0x30,unaff_EBP + -0x44,(int)cVar5,unaff_EBP + -0x3c);
    **(undefined4 **)(unaff_EBP + -0x38) = uVar7;
    if (((*(int *)(unaff_EBP + -0x44) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x3c) != 0))
       || (*(char *)(unaff_EBP + -0x33) != '\0')) {
      *puVar3 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar3 = *puVar3 | 1;
  }
  uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = uVar7;
  func_0x00e88455();
  return;
}



void FUN_00e7f640(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  char cVar5;
  undefined2 uVar6;
  int unaff_EBP;
  float10 fVar7;
  
  func_0x00e88497(0x32c);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  pfVar3 = *(float **)(unaff_EBP + 0x24);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e76c8b(unaff_EBP + -0x328,0x300,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          unaff_EBP + -0x334);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x32c) = uVar6;
  func_0x004642b0();
  if (*(char *)(unaff_EBP + -0x32c) == '\0') {
    *puVar2 = 2;
    *pfVar3 = 0.0;
  }
  else {
    fVar7 = (float10)func_0x0047d780(unaff_EBP + -0x328,unaff_EBP + -0x338,unaff_EBP + -0x330);
    *pfVar3 = (float)fVar7;
    if (((*(int *)(unaff_EBP + -0x338) == unaff_EBP + -0x328) || (*(int *)(unaff_EBP + -0x330) != 0)
        ) || (*(char *)(unaff_EBP + -0x32b) != '\0')) {
      *puVar2 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar4;
  func_0x00e88455();
  return;
}



void FUN_00e7f730(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  double *pdVar3;
  undefined4 uVar4;
  char cVar5;
  undefined2 uVar6;
  int unaff_EBP;
  float10 fVar7;
  
  func_0x00e88497(0x32c);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  pdVar3 = *(double **)(unaff_EBP + 0x24);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e76c8b(unaff_EBP + -0x328,0x300,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          unaff_EBP + -0x334);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x32c) = uVar6;
  func_0x004642b0();
  if (*(char *)(unaff_EBP + -0x32c) == '\0') {
    *puVar2 = 2;
    *pdVar3 = 0.0;
  }
  else {
    fVar7 = (float10)func_0x0047d710(unaff_EBP + -0x328,unaff_EBP + -0x338,unaff_EBP + -0x330);
    *pdVar3 = (double)fVar7;
    if (((*(int *)(unaff_EBP + -0x338) == unaff_EBP + -0x328) || (*(int *)(unaff_EBP + -0x330) != 0)
        ) || (*(char *)(unaff_EBP + -0x32b) != '\0')) {
      *puVar2 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar4;
  func_0x00e88455();
  return;
}



void FUN_00e7f820(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  puVar3 = (undefined4 *)
           FUN_00e7f730(auStack_14,param_2,param_3,param_4,param_5,param_6,param_7,&uStack_c);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  *param_8 = uStack_c;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



void FUN_00e7f870(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int unaff_EBP;
  
  func_0x00e88497(0x34);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  puVar3 = *(undefined4 **)(unaff_EBP + 0x24);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = func_0x00e7823f(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,0x800,unaff_EBP + -0x3c
                         );
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar5;
  func_0x004642b0();
  cVar4 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar4 < '\0') {
    *puVar2 = 2;
    *puVar3 = 0;
  }
  else {
    uVar6 = func_0x00e72aff(unaff_EBP + -0x30,unaff_EBP + -0x40,(int)cVar4,unaff_EBP + -0x38);
    *puVar3 = uVar6;
    if ((*(int *)(unaff_EBP + -0x40) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x38) != 0)) {
      *puVar2 = 2;
      *puVar3 = 0;
    }
    if (*(char *)(unaff_EBP + -0x33) != '\0') {
      *puVar2 = 2;
    }
  }
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  uVar6 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar6;
  func_0x00e88455();
  return;
}



void FUN_00e7f940(void)

{
  int iVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined2 uVar7;
  int unaff_EBP;
  undefined8 uVar8;
  
  func_0x00e88497(0x38);
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  puVar3 = *(undefined8 **)(unaff_EBP + 0x24);
  uVar4 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 8);
  func_0x00464280(uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar7 = func_0x00e7823f(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar1 + 0x14),unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar7;
  func_0x004642b0();
  cVar6 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar6 < '\0') {
    *puVar2 = 2;
    *(undefined4 *)puVar3 = 0;
    *(undefined4 *)((int)puVar3 + 4) = 0;
  }
  else {
    uVar8 = func_0x00e7296c(unaff_EBP + -0x30,unaff_EBP + -0x40,(int)cVar6,unaff_EBP + -0x38);
    *puVar3 = uVar8;
    if (((*(int *)(unaff_EBP + -0x40) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x38) != 0))
       || (*(char *)(unaff_EBP + -0x33) != '\0')) {
      *puVar2 = 2;
    }
  }
  cVar6 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar6 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  puVar5 = *(undefined4 **)(unaff_EBP + -0x44);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar5[1] = uVar4;
  func_0x00e88455();
  return;
}



void FUN_00e7fa10(void)

{
  int iVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined2 uVar7;
  int unaff_EBP;
  undefined8 uVar8;
  
  func_0x00e88497(0x38);
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  puVar3 = *(undefined8 **)(unaff_EBP + 0x24);
  uVar4 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 8);
  func_0x00464280(uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar7 = func_0x00e7823f(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar1 + 0x14),unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar7;
  func_0x004642b0();
  cVar6 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar6 < '\0') {
    *puVar2 = 2;
    *(undefined4 *)puVar3 = 0;
    *(undefined4 *)((int)puVar3 + 4) = 0;
  }
  else {
    uVar8 = func_0x00e72d2c(unaff_EBP + -0x30,unaff_EBP + -0x40,(int)cVar6,unaff_EBP + -0x38);
    *puVar3 = uVar8;
    if (((*(int *)(unaff_EBP + -0x40) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x38) != 0))
       || (*(char *)(unaff_EBP + -0x33) != '\0')) {
      *puVar2 = 2;
    }
  }
  cVar6 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar6 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  puVar5 = *(undefined4 **)(unaff_EBP + -0x44);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar5[1] = uVar4;
  func_0x00e88455();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e7fbc2)
// WARNING: Removing unreachable block (ram,0x00e7fbda)
// WARNING: Removing unreachable block (ram,0x00e7fbdd)
// WARNING: Removing unreachable block (ram,0x00e7fbdf)
// WARNING: Removing unreachable block (ram,0x00e7fbe2)
// WARNING: Removing unreachable block (ram,0x00e7fcb1)
// WARNING: Removing unreachable block (ram,0x00e7fcd1)
// WARNING: Removing unreachable block (ram,0x00e7fcd4)
// WARNING: Removing unreachable block (ram,0x00e7fcd6)
// WARNING: Removing unreachable block (ram,0x00e7fcd9)

void FUN_00e7fae0(void)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int unaff_EBP;
  int *piVar11;
  
  func_0x00e88497(0x70);
  iVar9 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(undefined1 **)(unaff_EBP + 0x24);
  puVar3 = *(uint **)(unaff_EBP + 0x20);
  uVar10 = *(uint *)(iVar9 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 8);
  uVar8 = *(undefined4 *)(iVar9 + 0x30);
  *(undefined1 **)(unaff_EBP + -0x68) = puVar2;
  if ((uVar10 & 0x4000) == 0) {
    func_0x00464280(uVar8);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    uVar7 = func_0x00e7823f(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                            *(undefined4 *)(iVar9 + 0x14),unaff_EBP + -0x7c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined2 *)(unaff_EBP + -100) = uVar7;
    func_0x004642b0();
    cVar6 = (char)*(undefined2 *)(unaff_EBP + -100);
    if (cVar6 < '\0') {
      *puVar2 = 0;
    }
    else {
      iVar9 = func_0x00e72a4c(unaff_EBP + -0x30,unaff_EBP + -0x6c,(int)cVar6,unaff_EBP + -0x70);
      if (((*(int *)(unaff_EBP + -0x6c) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x70) != 0))
         || (*(char *)(unaff_EBP + -99) != '\0')) {
        *puVar2 = 1;
      }
      else {
        *puVar2 = iVar9 != 0;
        if ((iVar9 == 0) || (iVar9 == 1)) goto LAB_00e7fdaf;
      }
    }
    *puVar3 = 2;
  }
  else {
    func_0x00464280(uVar8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar8 = func_0x00e79a4a(unaff_EBP + -0x7c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -100) = uVar8;
    func_0x004642b0();
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    func_0x00e75c80(0,1);
    piVar11 = *(int **)(unaff_EBP + -100);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    pcVar4 = *(code **)(*piVar11 + 0x18);
    _guard_check_icall(unaff_EBP + -0x60);
    (*pcVar4)();
    iVar9 = unaff_EBP + -0x60;
    if (7 < *(uint *)(unaff_EBP + -0x4c)) {
      iVar9 = *(int *)(unaff_EBP + -0x60);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    func_0x00e7eee7(iVar9,*(undefined4 *)(unaff_EBP + -0x50));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    func_0x00e7edc7();
    uVar10 = *(uint *)(unaff_EBP + -0x38);
    *(uint *)(unaff_EBP + -0x70) = uVar10;
    if (uVar10 < *(uint *)(unaff_EBP + -0x34)) {
      uVar1 = uVar10 + 1;
      *(uint *)(unaff_EBP + -0x6c) = uVar1;
      if (uVar10 != uVar1) {
        piVar11 = *(int **)(unaff_EBP + -100);
      }
      *(uint *)(unaff_EBP + -0x38) = uVar1;
      iVar9 = unaff_EBP + -0x48;
      if (7 < *(uint *)(unaff_EBP + -0x34)) {
        iVar9 = *(int *)(unaff_EBP + -0x48);
      }
      *(undefined4 *)(iVar9 + uVar10 * 2) = 0;
    }
    else {
      func_0x00e78f3e(1,*(undefined4 *)(unaff_EBP + -0x74),0);
    }
    pcVar4 = *(code **)(*piVar11 + 0x1c);
    _guard_check_icall(unaff_EBP + -0x60);
    (*pcVar4)();
    iVar9 = unaff_EBP + -0x60;
    if (7 < *(uint *)(unaff_EBP + -0x4c)) {
      iVar9 = *(int *)(unaff_EBP + -0x60);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    func_0x00e7eee7(iVar9,*(undefined4 *)(unaff_EBP + -0x50));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    func_0x00e7edc7();
    iVar9 = unaff_EBP + -0x48;
    if (7 < *(uint *)(unaff_EBP + -0x34)) {
      iVar9 = *(int *)(unaff_EBP + -0x48);
    }
    iVar9 = func_0x00e765ca(unaff_EBP + 0xc,unaff_EBP + 0x14,2,iVar9,1);
    if (iVar9 == 0) {
      **(undefined1 **)(unaff_EBP + -0x68) = 0;
    }
    else if (iVar9 == 1) {
      **(undefined1 **)(unaff_EBP + -0x68) = 1;
    }
    else {
      **(undefined1 **)(unaff_EBP + -0x68) = 0;
      *puVar3 = 2;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (7 < *(uint *)(unaff_EBP + -0x34)) {
      uVar8 = *(undefined4 *)(unaff_EBP + -0x48);
      uVar10 = *(uint *)(unaff_EBP + -0x34) * 2 + 2;
      *(uint *)(unaff_EBP + -0x68) = uVar10;
      *(undefined4 *)(unaff_EBP + -100) = uVar8;
      if (0xfff < uVar10) {
        func_0x00463540(unaff_EBP + -100,unaff_EBP + -0x68);
        uVar10 = *(uint *)(unaff_EBP + -0x68);
        uVar8 = *(undefined4 *)(unaff_EBP + -100);
      }
      func_0x008ab812(uVar8,uVar10);
    }
  }
LAB_00e7fdaf:
  cVar6 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar6 != '\0') {
    *puVar3 = *puVar3 | 1;
  }
  puVar5 = *(undefined4 **)(unaff_EBP + -0x74);
  uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar5[1] = uVar8;
  func_0x00e88455();
  return;
}



void FUN_00e7fde0(void)

{
  uint *puVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  int unaff_EBP;
  int iVar8;
  bool bVar9;
  
  func_0x00e88497(0x3c);
  iVar8 = *(int *)(unaff_EBP + 0x1c);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  psVar2 = *(short **)(unaff_EBP + 0x24);
  uVar3 = *(undefined4 *)(iVar8 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 8);
  func_0x00464280(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e787c5(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar8 + 0x14),unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x38) = uVar6;
  func_0x004642b0();
  cVar5 = (char)*(undefined2 *)(unaff_EBP + -0x38);
  if (cVar5 < '\0') {
    *puVar1 = 2;
    *psVar2 = 0;
  }
  else {
    bVar9 = *(char *)(unaff_EBP + -0x30) == '-';
    *(bool *)(unaff_EBP + -0x31) = bVar9;
    iVar8 = unaff_EBP + -0x2f;
    if (!bVar9) {
      iVar8 = unaff_EBP + -0x30;
    }
    uVar7 = func_0x00e72aff(iVar8,unaff_EBP + -0x44,(int)cVar5,unaff_EBP + -0x3c);
    *psVar2 = (short)uVar7;
    if (((*(int *)(unaff_EBP + -0x44) == iVar8) || (*(int *)(unaff_EBP + -0x3c) != 0)) ||
       (0xffff < uVar7)) {
      *puVar1 = 2;
      *psVar2 = -1;
    }
    else if (*(char *)(unaff_EBP + -0x31) != '\0') {
      *psVar2 = -(short)uVar7;
    }
    if (*(char *)(unaff_EBP + -0x37) != '\0') {
      *puVar1 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  puVar4 = *(undefined4 **)(unaff_EBP + -0x48);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar4[1] = uVar3;
  func_0x00e88455();
  return;
}



void FUN_00e7fee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  
  puVar3 = (undefined4 *)
           FUN_00e7fff0(auStack_10,param_2,param_3,param_4,param_5,param_6,param_7,&uStack_8);
  uVar1 = puVar3[1];
  uVar2 = *puVar3;
  *param_8 = uStack_8;
  param_1[1] = uVar1;
  *param_1 = uVar2;
  return;
}



void FUN_00e7ff20(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int unaff_EBP;
  
  func_0x00e88497(0x38);
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  puVar3 = *(uint **)(unaff_EBP + 0x20);
  uVar7 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 0x24);
  func_0x00464280(uVar7);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e787c5(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar1 + 0x14),unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar6;
  func_0x004642b0();
  cVar5 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar5 < '\0') {
    puVar4 = *(undefined4 **)(unaff_EBP + -0x38);
    *puVar3 = 2;
    *puVar4 = 0;
  }
  else {
    uVar7 = func_0x00e72a4c(unaff_EBP + -0x30,unaff_EBP + -0x44,(int)cVar5,unaff_EBP + -0x3c);
    **(undefined4 **)(unaff_EBP + -0x38) = uVar7;
    if (((*(int *)(unaff_EBP + -0x44) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x3c) != 0))
       || (*(char *)(unaff_EBP + -0x33) != '\0')) {
      *puVar3 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar3 = *puVar3 | 1;
  }
  uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = uVar7;
  func_0x00e88455();
  return;
}



void FUN_00e7fff0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int unaff_EBP;
  
  func_0x00e88497(0x38);
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  puVar3 = *(uint **)(unaff_EBP + 0x20);
  uVar7 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 0x24);
  func_0x00464280(uVar7);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e787c5(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar1 + 0x14),unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar6;
  func_0x004642b0();
  cVar5 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar5 < '\0') {
    puVar4 = *(undefined4 **)(unaff_EBP + -0x38);
    *puVar3 = 2;
    *puVar4 = 0;
  }
  else {
    uVar7 = func_0x00e72aff(unaff_EBP + -0x30,unaff_EBP + -0x44,(int)cVar5,unaff_EBP + -0x3c);
    **(undefined4 **)(unaff_EBP + -0x38) = uVar7;
    if (((*(int *)(unaff_EBP + -0x44) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x3c) != 0))
       || (*(char *)(unaff_EBP + -0x33) != '\0')) {
      *puVar3 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar3 = *puVar3 | 1;
  }
  uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = uVar7;
  func_0x00e88455();
  return;
}



void FUN_00e800c0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  char cVar5;
  undefined2 uVar6;
  int unaff_EBP;
  float10 fVar7;
  
  func_0x00e88497(0x32c);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  pfVar3 = *(float **)(unaff_EBP + 0x24);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e77765(unaff_EBP + -0x328,0x300,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          unaff_EBP + -0x334);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x32c) = uVar6;
  func_0x004642b0();
  if (*(char *)(unaff_EBP + -0x32c) == '\0') {
    *puVar2 = 2;
    *pfVar3 = 0.0;
  }
  else {
    fVar7 = (float10)func_0x0047d780(unaff_EBP + -0x328,unaff_EBP + -0x338,unaff_EBP + -0x330);
    *pfVar3 = (float)fVar7;
    if (((*(int *)(unaff_EBP + -0x338) == unaff_EBP + -0x328) || (*(int *)(unaff_EBP + -0x330) != 0)
        ) || (*(char *)(unaff_EBP + -0x32b) != '\0')) {
      *puVar2 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar4;
  func_0x00e88455();
  return;
}



void FUN_00e801b0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  double *pdVar3;
  undefined4 uVar4;
  char cVar5;
  undefined2 uVar6;
  int unaff_EBP;
  float10 fVar7;
  
  func_0x00e88497(0x32c);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  pdVar3 = *(double **)(unaff_EBP + 0x24);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = func_0x00e77765(unaff_EBP + -0x328,0x300,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          unaff_EBP + -0x334);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x32c) = uVar6;
  func_0x004642b0();
  if (*(char *)(unaff_EBP + -0x32c) == '\0') {
    *puVar2 = 2;
    *pdVar3 = 0.0;
  }
  else {
    fVar7 = (float10)func_0x0047d710(unaff_EBP + -0x328,unaff_EBP + -0x338,unaff_EBP + -0x330);
    *pdVar3 = (double)fVar7;
    if (((*(int *)(unaff_EBP + -0x338) == unaff_EBP + -0x328) || (*(int *)(unaff_EBP + -0x330) != 0)
        ) || (*(char *)(unaff_EBP + -0x32b) != '\0')) {
      *puVar2 = 2;
    }
  }
  cVar5 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar4;
  func_0x00e88455();
  return;
}



void FUN_00e802a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  puVar3 = (undefined4 *)
           FUN_00e801b0(auStack_14,param_2,param_3,param_4,param_5,param_6,param_7,&uStack_c);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  *param_8 = uStack_c;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



void FUN_00e802f0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int unaff_EBP;
  
  func_0x00e88497(0x34);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  puVar3 = *(undefined4 **)(unaff_EBP + 0x24);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = func_0x00e787c5(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,0x800,unaff_EBP + -0x3c
                         );
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar5;
  func_0x004642b0();
  cVar4 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar4 < '\0') {
    *puVar2 = 2;
    *puVar3 = 0;
  }
  else {
    uVar6 = func_0x00e72aff(unaff_EBP + -0x30,unaff_EBP + -0x40,(int)cVar4,unaff_EBP + -0x38);
    *puVar3 = uVar6;
    if ((*(int *)(unaff_EBP + -0x40) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x38) != 0)) {
      *puVar2 = 2;
      *puVar3 = 0;
    }
    if (*(char *)(unaff_EBP + -0x33) != '\0') {
      *puVar2 = 2;
    }
  }
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  uVar6 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar6;
  func_0x00e88455();
  return;
}



void FUN_00e803c0(void)

{
  int iVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined2 uVar7;
  int unaff_EBP;
  undefined8 uVar8;
  
  func_0x00e88497(0x38);
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  puVar3 = *(undefined8 **)(unaff_EBP + 0x24);
  uVar4 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 8);
  func_0x00464280(uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar7 = func_0x00e787c5(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar1 + 0x14),unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar7;
  func_0x004642b0();
  cVar6 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar6 < '\0') {
    *puVar2 = 2;
    *(undefined4 *)puVar3 = 0;
    *(undefined4 *)((int)puVar3 + 4) = 0;
  }
  else {
    uVar8 = func_0x00e7296c(unaff_EBP + -0x30,unaff_EBP + -0x40,(int)cVar6,unaff_EBP + -0x38);
    *puVar3 = uVar8;
    if (((*(int *)(unaff_EBP + -0x40) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x38) != 0))
       || (*(char *)(unaff_EBP + -0x33) != '\0')) {
      *puVar2 = 2;
    }
  }
  cVar6 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar6 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  puVar5 = *(undefined4 **)(unaff_EBP + -0x44);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar5[1] = uVar4;
  func_0x00e88455();
  return;
}



void FUN_00e80490(void)

{
  int iVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined2 uVar7;
  int unaff_EBP;
  undefined8 uVar8;
  
  func_0x00e88497(0x38);
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  puVar3 = *(undefined8 **)(unaff_EBP + 0x24);
  uVar4 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 8);
  func_0x00464280(uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar7 = func_0x00e787c5(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                          *(undefined4 *)(iVar1 + 0x14),unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined2 *)(unaff_EBP + -0x34) = uVar7;
  func_0x004642b0();
  cVar6 = (char)*(undefined2 *)(unaff_EBP + -0x34);
  if (cVar6 < '\0') {
    *puVar2 = 2;
    *(undefined4 *)puVar3 = 0;
    *(undefined4 *)((int)puVar3 + 4) = 0;
  }
  else {
    uVar8 = func_0x00e72d2c(unaff_EBP + -0x30,unaff_EBP + -0x40,(int)cVar6,unaff_EBP + -0x38);
    *puVar3 = uVar8;
    if (((*(int *)(unaff_EBP + -0x40) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x38) != 0))
       || (*(char *)(unaff_EBP + -0x33) != '\0')) {
      *puVar2 = 2;
    }
  }
  cVar6 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar6 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  puVar5 = *(undefined4 **)(unaff_EBP + -0x44);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar5[1] = uVar4;
  func_0x00e88455();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e80642)
// WARNING: Removing unreachable block (ram,0x00e8065a)
// WARNING: Removing unreachable block (ram,0x00e8065d)
// WARNING: Removing unreachable block (ram,0x00e8065f)
// WARNING: Removing unreachable block (ram,0x00e80662)
// WARNING: Removing unreachable block (ram,0x00e80731)
// WARNING: Removing unreachable block (ram,0x00e80751)
// WARNING: Removing unreachable block (ram,0x00e80754)
// WARNING: Removing unreachable block (ram,0x00e80756)
// WARNING: Removing unreachable block (ram,0x00e80759)

void FUN_00e80560(void)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int unaff_EBP;
  int *piVar11;
  
  func_0x00e88497(0x70);
  iVar9 = *(int *)(unaff_EBP + 0x1c);
  puVar2 = *(undefined1 **)(unaff_EBP + 0x24);
  puVar3 = *(uint **)(unaff_EBP + 0x20);
  uVar10 = *(uint *)(iVar9 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 8);
  uVar8 = *(undefined4 *)(iVar9 + 0x30);
  *(undefined1 **)(unaff_EBP + -0x68) = puVar2;
  if ((uVar10 & 0x4000) == 0) {
    func_0x00464280(uVar8);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    uVar7 = func_0x00e787c5(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,
                            *(undefined4 *)(iVar9 + 0x14),unaff_EBP + -0x7c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined2 *)(unaff_EBP + -100) = uVar7;
    func_0x004642b0();
    cVar6 = (char)*(undefined2 *)(unaff_EBP + -100);
    if (cVar6 < '\0') {
      *puVar2 = 0;
    }
    else {
      iVar9 = func_0x00e72a4c(unaff_EBP + -0x30,unaff_EBP + -0x6c,(int)cVar6,unaff_EBP + -0x70);
      if (((*(int *)(unaff_EBP + -0x6c) == unaff_EBP + -0x30) || (*(int *)(unaff_EBP + -0x70) != 0))
         || (*(char *)(unaff_EBP + -99) != '\0')) {
        *puVar2 = 1;
      }
      else {
        *puVar2 = iVar9 != 0;
        if ((iVar9 == 0) || (iVar9 == 1)) goto LAB_00e8082f;
      }
    }
    *puVar3 = 2;
  }
  else {
    func_0x00464280(uVar8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar8 = func_0x009bbd40(unaff_EBP + -0x7c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -100) = uVar8;
    func_0x004642b0();
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    func_0x009bb030(0,1);
    piVar11 = *(int **)(unaff_EBP + -100);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    pcVar4 = *(code **)(*piVar11 + 0x18);
    _guard_check_icall(unaff_EBP + -0x60);
    (*pcVar4)();
    iVar9 = unaff_EBP + -0x60;
    if (7 < *(uint *)(unaff_EBP + -0x4c)) {
      iVar9 = *(int *)(unaff_EBP + -0x60);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    func_0x00588e80(iVar9,*(undefined4 *)(unaff_EBP + -0x50));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    func_0x00588fe0();
    uVar10 = *(uint *)(unaff_EBP + -0x38);
    *(uint *)(unaff_EBP + -0x70) = uVar10;
    if (uVar10 < *(uint *)(unaff_EBP + -0x34)) {
      uVar1 = uVar10 + 1;
      *(uint *)(unaff_EBP + -0x6c) = uVar1;
      if (uVar10 != uVar1) {
        piVar11 = *(int **)(unaff_EBP + -100);
      }
      *(uint *)(unaff_EBP + -0x38) = uVar1;
      iVar9 = unaff_EBP + -0x48;
      if (7 < *(uint *)(unaff_EBP + -0x34)) {
        iVar9 = *(int *)(unaff_EBP + -0x48);
      }
      *(undefined4 *)(iVar9 + uVar10 * 2) = 0;
    }
    else {
      func_0x00609330(1,*(undefined4 *)(unaff_EBP + -0x74),0);
    }
    pcVar4 = *(code **)(*piVar11 + 0x1c);
    _guard_check_icall(unaff_EBP + -0x60);
    (*pcVar4)();
    iVar9 = unaff_EBP + -0x60;
    if (7 < *(uint *)(unaff_EBP + -0x4c)) {
      iVar9 = *(int *)(unaff_EBP + -0x60);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    func_0x00588e80(iVar9,*(undefined4 *)(unaff_EBP + -0x50));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    func_0x00588fe0();
    iVar9 = unaff_EBP + -0x48;
    if (7 < *(uint *)(unaff_EBP + -0x34)) {
      iVar9 = *(int *)(unaff_EBP + -0x48);
    }
    iVar9 = func_0x00e76815(unaff_EBP + 0xc,unaff_EBP + 0x14,2,iVar9,1);
    if (iVar9 == 0) {
      **(undefined1 **)(unaff_EBP + -0x68) = 0;
    }
    else if (iVar9 == 1) {
      **(undefined1 **)(unaff_EBP + -0x68) = 1;
    }
    else {
      **(undefined1 **)(unaff_EBP + -0x68) = 0;
      *puVar3 = 2;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (7 < *(uint *)(unaff_EBP + -0x34)) {
      uVar8 = *(undefined4 *)(unaff_EBP + -0x48);
      uVar10 = *(uint *)(unaff_EBP + -0x34) * 2 + 2;
      *(uint *)(unaff_EBP + -0x68) = uVar10;
      *(undefined4 *)(unaff_EBP + -100) = uVar8;
      if (0xfff < uVar10) {
        func_0x00463540(unaff_EBP + -100,unaff_EBP + -0x68);
        uVar10 = *(uint *)(unaff_EBP + -0x68);
        uVar8 = *(undefined4 *)(unaff_EBP + -100);
      }
      func_0x008ab812(uVar8,uVar10);
    }
  }
LAB_00e8082f:
  cVar6 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar6 != '\0') {
    *puVar3 = *puVar3 | 1;
  }
  puVar5 = *(undefined4 **)(unaff_EBP + -0x74);
  uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar5[1] = uVar8;
  func_0x00e88455();
  return;
}



void FUN_00e80860(void)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  
  func_0x00e88464(0xc);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  iVar5 = *(int *)(unaff_EBP + 0x1c);
  func_0x00464280(*(undefined4 *)(iVar5 + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = func_0x00e79224(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  cVar3 = *(char *)(unaff_EBP + 0x28);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *puVar2 = 0;
  if (cVar3 < 'b') {
    if (cVar3 != 'a') {
      if (cVar3 < 'S') {
        if (cVar3 == 'R') {
          pcVar11 = "%H : %M";
        }
        else {
          if (cVar3 == 'A') goto LAB_00e80a3a;
          if (cVar3 == 'B') goto LAB_00e80b44;
          if (cVar3 == 'C') {
            uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,99,unaff_EBP + -0x10,
                                    unaff_EBP + -0x18,uVar4);
            uVar7 = *puVar2;
            *puVar2 = uVar7 | uVar6;
            if (((uVar7 | uVar6) & 2) != 0) goto LAB_00e80c22;
            iVar5 = (*(int *)(unaff_EBP + -0x10) + -0x13) * 100;
            goto LAB_00e8099f;
          }
          if (cVar3 != 'D') {
            if (cVar3 == 'H') {
              iVar5 = *(int *)(unaff_EBP + 0x24) + 8;
              uVar10 = 0x17;
            }
            else {
              if (cVar3 == 'I') {
                uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,unaff_EBP + -0x10,
                                        unaff_EBP + -0x18,uVar4);
                uVar7 = *puVar2;
                *puVar2 = uVar7 | uVar6;
                if (((uVar7 | uVar6) & 2) == 0) {
                  iVar5 = *(int *)(unaff_EBP + -0x10);
                  if (iVar5 == 0xc) {
                    iVar5 = 0;
                  }
                  *(int *)(*(int *)(unaff_EBP + 0x24) + 8) = iVar5;
                }
                goto LAB_00e80c22;
              }
              if (cVar3 != 'M') goto LAB_00e80b86;
              iVar5 = *(int *)(unaff_EBP + 0x24) + 4;
              uVar10 = 0x3b;
            }
            goto LAB_00e8095b;
          }
          pcVar11 = "%m / %d / %y";
        }
        goto LAB_00e80b22;
      }
      if (cVar3 == 'S') {
        iVar5 = *(int *)(unaff_EBP + 0x24);
        uVar10 = 0x3c;
LAB_00e8095b:
        uVar9 = 0;
        goto LAB_00e80b06;
      }
      if (cVar3 != 'T') {
        if ((cVar3 == 'U') || (cVar3 == 'W')) {
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0x1c;
          uVar10 = 0x35;
          goto LAB_00e8095b;
        }
        if (cVar3 != 'X') {
          if (cVar3 != 'Y') goto LAB_00e80b86;
          uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,9999,unaff_EBP + -0x10,
                                  unaff_EBP + -0x18,uVar4);
          uVar7 = *puVar2;
          *puVar2 = uVar7 | uVar6;
          if (((uVar7 | uVar6) & 2) != 0) goto LAB_00e80c22;
          iVar5 = *(int *)(unaff_EBP + -0x10) + -0x76c;
LAB_00e8099f:
          *(int *)(*(int *)(unaff_EBP + 0x24) + 0x14) = iVar5;
          goto LAB_00e80c22;
        }
      }
      pcVar11 = "%H : %M : %S";
      goto LAB_00e80b22;
    }
LAB_00e80a3a:
    puVar8 = (undefined4 *)
             func_0x00e838ed(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                             *(undefined4 *)(unaff_EBP + 0x18),iVar5,puVar2,
                             *(undefined4 *)(unaff_EBP + 0x24));
  }
  else {
    if (cVar3 < 'o') {
      if (cVar3 != 'n') {
        if (cVar3 == 'b') {
LAB_00e80b44:
          puVar8 = (undefined4 *)
                   func_0x00e838b5(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),
                                   *(undefined4 *)(unaff_EBP + 0x10),
                                   *(undefined4 *)(unaff_EBP + 0x14),
                                   *(undefined4 *)(unaff_EBP + 0x18),iVar5,puVar2,
                                   *(undefined4 *)(unaff_EBP + 0x24));
          goto LAB_00e80a57;
        }
        if (cVar3 == 'c') {
          pcVar11 = "%b %d %H : %M : %S %Y";
          goto LAB_00e80b22;
        }
        if ((cVar3 == 'd') || (cVar3 == 'e')) {
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0xc;
          uVar10 = 0x1f;
        }
        else {
          if (cVar3 == 'h') goto LAB_00e80b44;
          if (cVar3 != 'j') {
            if (cVar3 == 'm') {
              uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,unaff_EBP + -0x10,
                                      unaff_EBP + -0x18,uVar4);
              uVar7 = *puVar2;
              *puVar2 = uVar7 | uVar6;
              if (((uVar7 | uVar6) & 2) == 0) {
                *(int *)(*(int *)(unaff_EBP + 0x24) + 0x10) = *(int *)(unaff_EBP + -0x10) + -1;
              }
              goto LAB_00e80c22;
            }
            goto LAB_00e80b86;
          }
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0x1c;
          uVar10 = 0x16e;
        }
        uVar9 = 1;
LAB_00e80b06:
        uVar7 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,uVar9,uVar10,iVar5,
                                unaff_EBP + -0x18,uVar4);
        *puVar2 = *puVar2 | uVar7;
        goto LAB_00e80c22;
      }
LAB_00e80be2:
      pcVar11 = " ";
    }
    else {
      if (cVar3 == 'p') {
        iVar5 = func_0x00e7638d(unaff_EBP + 0xc,unaff_EBP + 0x14,0,":AM:am:PM:pm",0);
        if (iVar5 < 0) {
          *puVar2 = *puVar2 | 2;
        }
        else if (1 < iVar5) {
          piVar1 = (int *)(*(int *)(unaff_EBP + 0x24) + 8);
          *piVar1 = *piVar1 + 0xc;
        }
        goto LAB_00e80c22;
      }
      if (cVar3 == 'r') {
        pcVar11 = "%I : %M : %S %p";
      }
      else {
        if (cVar3 == 't') goto LAB_00e80be2;
        if (cVar3 == 'w') {
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0x18;
          uVar10 = 6;
          goto LAB_00e8095b;
        }
        if (cVar3 != 'x') {
          if (cVar3 == 'y') {
            uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,99,unaff_EBP + -0x10,
                                    unaff_EBP + -0x18,uVar4);
            uVar7 = *puVar2;
            *puVar2 = uVar7 | uVar6;
            if (((uVar7 | uVar6) & 2) != 0) goto LAB_00e80c22;
            iVar5 = *(int *)(unaff_EBP + -0x10);
            if (iVar5 < 0x45) {
              iVar5 = iVar5 + 100;
            }
            goto LAB_00e8099f;
          }
LAB_00e80b86:
          *puVar2 = 2;
          goto LAB_00e80c22;
        }
        pcVar11 = "%d / %m / %y";
      }
    }
LAB_00e80b22:
    puVar8 = (undefined4 *)
             func_0x00e7aefb(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                             *(undefined4 *)(unaff_EBP + 0x18),iVar5,puVar2,
                             *(undefined4 *)(unaff_EBP + 0x24),pcVar11);
  }
LAB_00e80a57:
  uVar4 = puVar8[1];
  *(undefined4 *)(unaff_EBP + 0xc) = *puVar8;
  *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
LAB_00e80c22:
  cVar3 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar3 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  puVar8 = *(undefined4 **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar8 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar8[1] = uVar4;
  func_0x00e88441();
  return;
}



void FUN_00e80c50(void)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  
  func_0x00e88464(0xc);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  iVar5 = *(int *)(unaff_EBP + 0x1c);
  func_0x00464280(*(undefined4 *)(iVar5 + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = func_0x009bba00(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  cVar3 = *(char *)(unaff_EBP + 0x28);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *puVar2 = 0;
  if (cVar3 < 'b') {
    if (cVar3 != 'a') {
      if (cVar3 < 'S') {
        if (cVar3 == 'R') {
          pcVar11 = "%H : %M";
        }
        else {
          if (cVar3 == 'A') goto LAB_00e80e2a;
          if (cVar3 == 'B') goto LAB_00e80f34;
          if (cVar3 == 'C') {
            uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,99,unaff_EBP + -0x10,
                                    unaff_EBP + -0x18,uVar4);
            uVar7 = *puVar2;
            *puVar2 = uVar7 | uVar6;
            if (((uVar7 | uVar6) & 2) != 0) goto LAB_00e81012;
            iVar5 = (*(int *)(unaff_EBP + -0x10) + -0x13) * 100;
            goto LAB_00e80d8f;
          }
          if (cVar3 != 'D') {
            if (cVar3 == 'H') {
              iVar5 = *(int *)(unaff_EBP + 0x24) + 8;
              uVar10 = 0x17;
            }
            else {
              if (cVar3 == 'I') {
                uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,unaff_EBP + -0x10,
                                        unaff_EBP + -0x18,uVar4);
                uVar7 = *puVar2;
                *puVar2 = uVar7 | uVar6;
                if (((uVar7 | uVar6) & 2) == 0) {
                  iVar5 = *(int *)(unaff_EBP + -0x10);
                  if (iVar5 == 0xc) {
                    iVar5 = 0;
                  }
                  *(int *)(*(int *)(unaff_EBP + 0x24) + 8) = iVar5;
                }
                goto LAB_00e81012;
              }
              if (cVar3 != 'M') goto LAB_00e80f76;
              iVar5 = *(int *)(unaff_EBP + 0x24) + 4;
              uVar10 = 0x3b;
            }
            goto LAB_00e80d4b;
          }
          pcVar11 = "%m / %d / %y";
        }
        goto LAB_00e80f12;
      }
      if (cVar3 == 'S') {
        iVar5 = *(int *)(unaff_EBP + 0x24);
        uVar10 = 0x3c;
LAB_00e80d4b:
        uVar9 = 0;
        goto LAB_00e80ef6;
      }
      if (cVar3 != 'T') {
        if ((cVar3 == 'U') || (cVar3 == 'W')) {
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0x1c;
          uVar10 = 0x35;
          goto LAB_00e80d4b;
        }
        if (cVar3 != 'X') {
          if (cVar3 != 'Y') goto LAB_00e80f76;
          uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,9999,unaff_EBP + -0x10,
                                  unaff_EBP + -0x18,uVar4);
          uVar7 = *puVar2;
          *puVar2 = uVar7 | uVar6;
          if (((uVar7 | uVar6) & 2) != 0) goto LAB_00e81012;
          iVar5 = *(int *)(unaff_EBP + -0x10) + -0x76c;
LAB_00e80d8f:
          *(int *)(*(int *)(unaff_EBP + 0x24) + 0x14) = iVar5;
          goto LAB_00e81012;
        }
      }
      pcVar11 = "%H : %M : %S";
      goto LAB_00e80f12;
    }
LAB_00e80e2a:
    puVar8 = (undefined4 *)
             func_0x00e838ed(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                             *(undefined4 *)(unaff_EBP + 0x18),iVar5,puVar2,
                             *(undefined4 *)(unaff_EBP + 0x24));
  }
  else {
    if (cVar3 < 'o') {
      if (cVar3 != 'n') {
        if (cVar3 == 'b') {
LAB_00e80f34:
          puVar8 = (undefined4 *)
                   func_0x00e838b5(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),
                                   *(undefined4 *)(unaff_EBP + 0x10),
                                   *(undefined4 *)(unaff_EBP + 0x14),
                                   *(undefined4 *)(unaff_EBP + 0x18),iVar5,puVar2,
                                   *(undefined4 *)(unaff_EBP + 0x24));
          goto LAB_00e80e47;
        }
        if (cVar3 == 'c') {
          pcVar11 = "%b %d %H : %M : %S %Y";
          goto LAB_00e80f12;
        }
        if ((cVar3 == 'd') || (cVar3 == 'e')) {
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0xc;
          uVar10 = 0x1f;
        }
        else {
          if (cVar3 == 'h') goto LAB_00e80f34;
          if (cVar3 != 'j') {
            if (cVar3 == 'm') {
              uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,unaff_EBP + -0x10,
                                      unaff_EBP + -0x18,uVar4);
              uVar7 = *puVar2;
              *puVar2 = uVar7 | uVar6;
              if (((uVar7 | uVar6) & 2) == 0) {
                *(int *)(*(int *)(unaff_EBP + 0x24) + 0x10) = *(int *)(unaff_EBP + -0x10) + -1;
              }
              goto LAB_00e81012;
            }
            goto LAB_00e80f76;
          }
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0x1c;
          uVar10 = 0x16e;
        }
        uVar9 = 1;
LAB_00e80ef6:
        uVar7 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,uVar9,uVar10,iVar5,
                                unaff_EBP + -0x18,uVar4);
        *puVar2 = *puVar2 | uVar7;
        goto LAB_00e81012;
      }
LAB_00e80fd2:
      pcVar11 = " ";
    }
    else {
      if (cVar3 == 'p') {
        iVar5 = func_0x00e7638d(unaff_EBP + 0xc,unaff_EBP + 0x14,0,":AM:am:PM:pm",0);
        if (iVar5 < 0) {
          *puVar2 = *puVar2 | 2;
        }
        else if (1 < iVar5) {
          piVar1 = (int *)(*(int *)(unaff_EBP + 0x24) + 8);
          *piVar1 = *piVar1 + 0xc;
        }
        goto LAB_00e81012;
      }
      if (cVar3 == 'r') {
        pcVar11 = "%I : %M : %S %p";
      }
      else {
        if (cVar3 == 't') goto LAB_00e80fd2;
        if (cVar3 == 'w') {
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0x18;
          uVar10 = 6;
          goto LAB_00e80d4b;
        }
        if (cVar3 != 'x') {
          if (cVar3 == 'y') {
            uVar6 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,99,unaff_EBP + -0x10,
                                    unaff_EBP + -0x18,uVar4);
            uVar7 = *puVar2;
            *puVar2 = uVar7 | uVar6;
            if (((uVar7 | uVar6) & 2) != 0) goto LAB_00e81012;
            iVar5 = *(int *)(unaff_EBP + -0x10);
            if (iVar5 < 0x45) {
              iVar5 = iVar5 + 100;
            }
            goto LAB_00e80d8f;
          }
LAB_00e80f76:
          *puVar2 = 2;
          goto LAB_00e81012;
        }
        pcVar11 = "%d / %m / %y";
      }
    }
LAB_00e80f12:
    puVar8 = (undefined4 *)
             func_0x00e7b063(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                             *(undefined4 *)(unaff_EBP + 0x18),iVar5,puVar2,
                             *(undefined4 *)(unaff_EBP + 0x24),pcVar11);
  }
LAB_00e80e47:
  uVar4 = puVar8[1];
  *(undefined4 *)(unaff_EBP + 0xc) = *puVar8;
  *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
LAB_00e81012:
  cVar3 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar3 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  puVar8 = *(undefined4 **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar8 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar8[1] = uVar4;
  func_0x00e88441();
  return;
}



void FUN_00e81040(void)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int *piVar9;
  
  func_0x00e88464(0x18);
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar5 = (int *)func_0x00e79224(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  iVar6 = FUN_00835310();
  if (iVar6 == 0) {
    iVar6 = 2;
  }
  *(int *)(unaff_EBP + -0x10) = iVar6;
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(4,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    if (cVar4 == '\0') {
      puVar7 = (undefined4 *)
               func_0x00e838b5(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),
                               *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                               *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                               puVar1,*(undefined4 *)(unaff_EBP + 0x24));
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
LAB_00e81170:
      uVar3 = *puVar7;
      *(undefined4 *)(unaff_EBP + 0x10) = puVar7[1];
      *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    }
    else if (*(int *)(unaff_EBP + -0x10) == 2) {
      piVar9 = (int *)(*(int *)(unaff_EBP + 0x24) + 0x10);
      uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,piVar9,unaff_EBP + -0x18,piVar5
                             );
      *puVar1 = *puVar1 | uVar8;
      *piVar9 = *piVar9 + -1;
    }
    else {
      if (*(int *)(unaff_EBP + -0x10) != 1) {
        puVar7 = (undefined4 *)
                 func_0x00e83925(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),
                                 *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14)
                                 ,*(undefined4 *)(unaff_EBP + 0x18),
                                 *(undefined4 *)(unaff_EBP + 0x1c),puVar1,
                                 *(undefined4 *)(unaff_EBP + 0x24));
        goto LAB_00e81170;
      }
      uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0x1f,
                              *(int *)(unaff_EBP + 0x24) + 0xc,unaff_EBP + -0x18,piVar5);
      *puVar1 = *puVar1 | uVar8;
    }
  }
  while (cVar4 = func_0x00e83863(unaff_EBP + 0x14), cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(0x48,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    if (cVar4 == '\0') break;
    func_0x00e7cc85();
  }
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') goto LAB_00e8122e;
  if (*(char *)(unaff_EBP + 0x10) == '\0') {
    func_0x00e7de93();
  }
  pcVar2 = *(code **)(*piVar5 + 0x38);
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x12),0);
  cVar4 = (*pcVar2)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_00e8122e;
  do {
    func_0x00e7cc85();
LAB_00e8122e:
    cVar4 = func_0x00e83863(unaff_EBP + 0x14);
    if (cVar4 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(0x48,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
  } while (cVar4 != '\0');
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(4,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    iVar6 = *(int *)(unaff_EBP + -0x10);
    if (cVar4 == '\0') {
      if (iVar6 == 2) {
        *puVar1 = *puVar1 | 2;
      }
      else {
        puVar7 = (undefined4 *)
                 func_0x00e838b5(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),
                                 *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14)
                                 ,*(undefined4 *)(unaff_EBP + 0x18),
                                 *(undefined4 *)(unaff_EBP + 0x1c),puVar1,
                                 *(undefined4 *)(unaff_EBP + 0x24));
        uVar3 = puVar7[1];
        *(undefined4 *)(unaff_EBP + 0xc) = *puVar7;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar3;
        if (iVar6 == 4) {
          *(undefined4 *)(unaff_EBP + -0x10) = 3;
        }
      }
    }
    else if ((iVar6 == 1) || (iVar6 == 3)) {
      piVar9 = (int *)(*(int *)(unaff_EBP + 0x24) + 0x10);
      uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,piVar9,unaff_EBP + -0x18,piVar5
                             );
      *puVar1 = *puVar1 | uVar8;
      *piVar9 = *piVar9 + -1;
    }
    else {
      uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0x1f,
                              *(int *)(unaff_EBP + 0x24) + 0xc,unaff_EBP + -0x18,piVar5);
      *puVar1 = *puVar1 | uVar8;
    }
  }
  while (cVar4 = func_0x00e83863(unaff_EBP + 0x14), cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(0x48,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    if (cVar4 == '\0') break;
    func_0x00e7cc85();
  }
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') goto LAB_00e813cc;
  if (*(char *)(unaff_EBP + 0x10) == '\0') {
    func_0x00e7de93();
  }
  pcVar2 = *(code **)(*piVar5 + 0x38);
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x12),0);
  cVar4 = (*pcVar2)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_00e813cc;
  do {
    func_0x00e7cc85();
LAB_00e813cc:
    cVar4 = func_0x00e83863(unaff_EBP + 0x14);
    if (cVar4 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(0x48,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
  } while (cVar4 != '\0');
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(4,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    if (cVar4 == '\0') {
      if (*(int *)(unaff_EBP + -0x10) != 4) goto LAB_00e813ec;
      puVar7 = (undefined4 *)
               func_0x00e838b5(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),
                               *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                               *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                               puVar1,*(undefined4 *)(unaff_EBP + 0x24));
    }
    else {
      if (*(int *)(unaff_EBP + -0x10) == 4) {
        piVar9 = (int *)(*(int *)(unaff_EBP + 0x24) + 0x10);
        uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,piVar9,unaff_EBP + -0x18,
                                piVar5);
        *puVar1 = *puVar1 | uVar8;
        *piVar9 = *piVar9 + -1;
        goto LAB_00e814c4;
      }
      if (*(int *)(unaff_EBP + -0x10) == 3) {
        uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0x1f,
                                *(int *)(unaff_EBP + 0x24) + 0xc,unaff_EBP + -0x18,piVar5);
        *puVar1 = *puVar1 | uVar8;
        goto LAB_00e814c4;
      }
      puVar7 = (undefined4 *)
               func_0x00e83925(unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + 0xc),
                               *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                               *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                               puVar1,*(undefined4 *)(unaff_EBP + 0x24));
    }
    uVar3 = *puVar7;
    *(undefined4 *)(unaff_EBP + 0x10) = puVar7[1];
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
  }
  else {
LAB_00e813ec:
    *puVar1 = *puVar1 | 2;
  }
LAB_00e814c4:
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  puVar7 = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar7 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar7[1] = uVar3;
  func_0x00e88441();
  return;
}



void FUN_00e814f0(void)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int *piVar9;
  
  func_0x00e88464(0x18);
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar5 = (int *)func_0x009bba00(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  iVar6 = FUN_00835310();
  if (iVar6 == 0) {
    iVar6 = 2;
  }
  *(int *)(unaff_EBP + -0x10) = iVar6;
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(4,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    if (cVar4 == '\0') {
      puVar7 = (undefined4 *)
               func_0x00e838b5(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),
                               *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                               *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                               puVar1,*(undefined4 *)(unaff_EBP + 0x24));
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
LAB_00e81620:
      uVar3 = *puVar7;
      *(undefined4 *)(unaff_EBP + 0x10) = puVar7[1];
      *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    }
    else if (*(int *)(unaff_EBP + -0x10) == 2) {
      piVar9 = (int *)(*(int *)(unaff_EBP + 0x24) + 0x10);
      uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,piVar9,unaff_EBP + -0x18,piVar5
                             );
      *puVar1 = *puVar1 | uVar8;
      *piVar9 = *piVar9 + -1;
    }
    else {
      if (*(int *)(unaff_EBP + -0x10) != 1) {
        puVar7 = (undefined4 *)
                 func_0x00e83925(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),
                                 *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14)
                                 ,*(undefined4 *)(unaff_EBP + 0x18),
                                 *(undefined4 *)(unaff_EBP + 0x1c),puVar1,
                                 *(undefined4 *)(unaff_EBP + 0x24));
        goto LAB_00e81620;
      }
      uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0x1f,
                              *(int *)(unaff_EBP + 0x24) + 0xc,unaff_EBP + -0x18,piVar5);
      *puVar1 = *puVar1 | uVar8;
    }
  }
  while (cVar4 = func_0x00e83863(unaff_EBP + 0x14), cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(0x48,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    if (cVar4 == '\0') break;
    func_0x00e7cc85();
  }
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') goto LAB_00e816de;
  if (*(char *)(unaff_EBP + 0x10) == '\0') {
    func_0x00e7de93();
  }
  pcVar2 = *(code **)(*piVar5 + 0x38);
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x12),0);
  cVar4 = (*pcVar2)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_00e816de;
  do {
    func_0x00e7cc85();
LAB_00e816de:
    cVar4 = func_0x00e83863(unaff_EBP + 0x14);
    if (cVar4 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(0x48,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
  } while (cVar4 != '\0');
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(4,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    iVar6 = *(int *)(unaff_EBP + -0x10);
    if (cVar4 == '\0') {
      if (iVar6 == 2) {
        *puVar1 = *puVar1 | 2;
      }
      else {
        puVar7 = (undefined4 *)
                 func_0x00e838b5(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),
                                 *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14)
                                 ,*(undefined4 *)(unaff_EBP + 0x18),
                                 *(undefined4 *)(unaff_EBP + 0x1c),puVar1,
                                 *(undefined4 *)(unaff_EBP + 0x24));
        uVar3 = puVar7[1];
        *(undefined4 *)(unaff_EBP + 0xc) = *puVar7;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar3;
        if (iVar6 == 4) {
          *(undefined4 *)(unaff_EBP + -0x10) = 3;
        }
      }
    }
    else if ((iVar6 == 1) || (iVar6 == 3)) {
      piVar9 = (int *)(*(int *)(unaff_EBP + 0x24) + 0x10);
      uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,piVar9,unaff_EBP + -0x18,piVar5
                             );
      *puVar1 = *puVar1 | uVar8;
      *piVar9 = *piVar9 + -1;
    }
    else {
      uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0x1f,
                              *(int *)(unaff_EBP + 0x24) + 0xc,unaff_EBP + -0x18,piVar5);
      *puVar1 = *puVar1 | uVar8;
    }
  }
  while (cVar4 = func_0x00e83863(unaff_EBP + 0x14), cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(0x48,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    if (cVar4 == '\0') break;
    func_0x00e7cc85();
  }
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') goto LAB_00e8187c;
  if (*(char *)(unaff_EBP + 0x10) == '\0') {
    func_0x00e7de93();
  }
  pcVar2 = *(code **)(*piVar5 + 0x38);
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x12),0);
  cVar4 = (*pcVar2)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_00e8187c;
  do {
    func_0x00e7cc85();
LAB_00e8187c:
    cVar4 = func_0x00e83863(unaff_EBP + 0x14);
    if (cVar4 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(0x48,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
  } while (cVar4 != '\0');
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(4,*(undefined4 *)(unaff_EBP + 0x12));
    cVar4 = (*pcVar2)();
    if (cVar4 == '\0') {
      if (*(int *)(unaff_EBP + -0x10) != 4) goto LAB_00e8189c;
      puVar7 = (undefined4 *)
               func_0x00e838b5(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),
                               *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                               *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                               puVar1,*(undefined4 *)(unaff_EBP + 0x24));
    }
    else {
      if (*(int *)(unaff_EBP + -0x10) == 4) {
        piVar9 = (int *)(*(int *)(unaff_EBP + 0x24) + 0x10);
        uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,piVar9,unaff_EBP + -0x18,
                                piVar5);
        *puVar1 = *puVar1 | uVar8;
        *piVar9 = *piVar9 + -1;
        goto LAB_00e81974;
      }
      if (*(int *)(unaff_EBP + -0x10) == 3) {
        uVar8 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0x1f,
                                *(int *)(unaff_EBP + 0x24) + 0xc,unaff_EBP + -0x18,piVar5);
        *puVar1 = *puVar1 | uVar8;
        goto LAB_00e81974;
      }
      puVar7 = (undefined4 *)
               func_0x00e83925(unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + 0xc),
                               *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                               *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                               puVar1,*(undefined4 *)(unaff_EBP + 0x24));
    }
    uVar3 = *puVar7;
    *(undefined4 *)(unaff_EBP + 0x10) = puVar7[1];
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
  }
  else {
LAB_00e8189c:
    *puVar1 = *puVar1 | 2;
  }
LAB_00e81974:
  cVar4 = func_0x00e83863(unaff_EBP + 0x14);
  if (cVar4 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  puVar7 = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar7 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar7[1] = uVar3;
  func_0x00e88441();
  return;
}



void __thiscall FUN_00e819a0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = func_0x00e765ca(&param_3,&stack0x00000010,0,*(undefined4 *)(param_1 + 0xc),0);
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x10) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



void __thiscall FUN_00e819f0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = func_0x00e76815(&param_3,&stack0x00000010,0,*(undefined4 *)(param_1 + 0xc),0);
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x10) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



void FUN_00e81a40(void)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  int unaff_EBP;
  
  func_0x00e88464(8);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar6 = (int *)func_0x00e79224(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  uVar7 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,0x17,*(int *)(unaff_EBP + 0x24) + 8,
                          unaff_EBP + -0x10,piVar6);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *puVar1 = *puVar1 | uVar7;
  if (*puVar1 == 0) {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar6 + 0x38);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x12),0);
    cVar5 = (*pcVar2)();
    if (cVar5 != ':') goto LAB_00e81af1;
    func_0x00e7cc85();
    uVar7 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,0x3b,*(int *)(unaff_EBP + 0x24) + 4,
                            unaff_EBP + -0x10,piVar6);
    *puVar1 = *puVar1 | uVar7;
  }
  else {
LAB_00e81af1:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar6 + 0x38);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x12),0);
    cVar5 = (*pcVar2)();
    if (cVar5 == ':') {
      func_0x00e7cc85();
      uVar7 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,0x3c,
                              *(undefined4 *)(unaff_EBP + 0x24),unaff_EBP + -0x10,piVar6);
      *puVar1 = *puVar1 | uVar7;
      goto LAB_00e81b4c;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00e81b4c:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = uVar4;
  func_0x00e88441();
  return;
}



void FUN_00e81b70(void)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  int unaff_EBP;
  
  func_0x00e88464(8);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar6 = (int *)func_0x009bba00(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  uVar7 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,0x17,*(int *)(unaff_EBP + 0x24) + 8,
                          unaff_EBP + -0x10,piVar6);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *puVar1 = *puVar1 | uVar7;
  if (*puVar1 == 0) {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar6 + 0x38);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x12),0);
    cVar5 = (*pcVar2)();
    if (cVar5 != ':') goto LAB_00e81c21;
    func_0x00e7cc85();
    uVar7 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,0x3b,*(int *)(unaff_EBP + 0x24) + 4,
                            unaff_EBP + -0x10,piVar6);
    *puVar1 = *puVar1 | uVar7;
  }
  else {
LAB_00e81c21:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x00e7de93();
    }
    pcVar2 = *(code **)(*piVar6 + 0x38);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x12),0);
    cVar5 = (*pcVar2)();
    if (cVar5 == ':') {
      func_0x00e7cc85();
      uVar7 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,0x3c,
                              *(undefined4 *)(unaff_EBP + 0x24),unaff_EBP + -0x10,piVar6);
      *puVar1 = *puVar1 | uVar7;
      goto LAB_00e81c7c;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00e81c7c:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = uVar4;
  func_0x00e88441();
  return;
}



void __thiscall FUN_00e81ca0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = func_0x00e765ca(&param_3,&stack0x00000010,0,*(undefined4 *)(param_1 + 8),0);
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x18) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



void __thiscall FUN_00e81cf0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = func_0x00e76815(&param_3,&stack0x00000010,0,*(undefined4 *)(param_1 + 8),0);
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x18) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



void FUN_00e81d40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  func_0x00e88464(0xc);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = func_0x00e79224(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar3 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,9999,unaff_EBP + -0x10,
                          unaff_EBP + -0x14,uVar2);
  **(uint **)(unaff_EBP + 0x20) = **(uint **)(unaff_EBP + 0x20) | uVar3;
  if ((uVar3 & 2) == 0) {
    iVar4 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x14) < 3) {
      if (iVar4 < 0x45) {
        iVar4 = iVar4 + 100;
      }
      else if (99 < iVar4) goto LAB_00e81dc9;
    }
    else {
      iVar4 = iVar4 + -0x76c;
    }
    *(int *)(*(int *)(unaff_EBP + 0x24) + 0x14) = iVar4;
  }
LAB_00e81dc9:
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar2;
  func_0x00e88441();
  return;
}



void FUN_00e81de0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  func_0x00e88464(0xc);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = func_0x009bba00(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar3 = func_0x00e76157(unaff_EBP + 0xc,unaff_EBP + 0x14,0,9999,unaff_EBP + -0x10,
                          unaff_EBP + -0x14,uVar2);
  **(uint **)(unaff_EBP + 0x20) = **(uint **)(unaff_EBP + 0x20) | uVar3;
  if ((uVar3 & 2) == 0) {
    iVar4 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x14) < 3) {
      if (iVar4 < 0x45) {
        iVar4 = iVar4 + 100;
      }
      else if (99 < iVar4) goto LAB_00e81e69;
    }
    else {
      iVar4 = iVar4 + -0x76c;
    }
    *(int *)(*(int *)(unaff_EBP + 0x24) + 0x14) = iVar4;
  }
LAB_00e81e69:
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar2;
  func_0x00e88441();
  return;
}



undefined4 __thiscall FUN_00e81e80(int param_1,undefined4 param_2)

{
  func_0x00469d30(*(undefined4 *)(param_1 + 8),param_1);
  return param_2;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual long __thiscall std::collate<unsigned short>::do_hash(unsigned short const
// *,unsigned short const *)const 
//  protected: virtual long __thiscall std::collate<wchar_t>::do_hash(wchar_t const *,wchar_t const
// *)const 
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void do_hash(int param_1,int param_2)

{
  func_0x00463040(0x811c9dc5,param_1,param_2 - param_1 & 0xfffffffe);
  return;
}



undefined4 __thiscall
FUN_00e81ed0(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  undefined8 uStack_c;
  
  uStack_c = 0;
  *param_5 = param_3;
  *param_8 = param_6;
  while( true ) {
    iVar1 = *param_5;
    if (iVar1 == param_4) {
      return 0;
    }
    if ((param_6 == param_7) ||
       (iVar1 = func_0x00e73ee4(param_6,iVar1,param_4 - iVar1,&uStack_c,param_1 + 8), iVar1 == -2))
    break;
    if (iVar1 == -1) {
      return 2;
    }
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    *param_5 = *param_5 + iVar1;
    *param_8 = *param_8 + 2;
    param_6 = *param_8;
  }
  return 1;
}



void __thiscall FUN_00e81f50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00e7551d(param_2,param_3,param_4,param_1 + 8);
  return;
}



bool __thiscall FUN_00e81f70(int param_1,ushort param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = func_0x00e754fd(param_3,param_1 + 8);
  return (param_2 & uVar1) != 0;
}



int __thiscall FUN_00e81f90(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iStack_8;
  
  iVar2 = param_3;
  iStack_8 = param_1;
  if (param_5 != 0) {
    do {
      if ((iVar2 == param_4) ||
         (iVar1 = func_0x00e73ee4(&iStack_8,iVar2,param_4 - iVar2,param_2,param_1 + 8), iVar1 < 0))
      break;
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      iVar2 = iVar2 + iVar1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return iVar2 - param_3;
}



void __thiscall FUN_00e81ff0(int param_1,undefined4 param_2)

{
  undefined8 uStack_18;
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  uStack_18 = 0;
  func_0x00e72f9e(auStack_10,param_2,&uStack_18,param_1 + 0x18);
  FUN_008ab370();
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual unsigned short const * __thiscall std::ctype<unsigned
// short>::do_narrow(unsigned short const *,unsigned short const *,char,char *)const 
//  protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_narrow(wchar_t const
// *,wchar_t const *,char,char *)const 
// 
// Library: Visual Studio 2019 Release

undefined2 *
do_narrow(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    do {
      uVar1 = func_0x00e7a36c(*param_1,param_3);
      *param_4 = uVar1;
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}



void __thiscall FUN_00e82040(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  return;
}



undefined4 __thiscall FUN_00e82050(int param_1,undefined4 param_2)

{
  func_0x00e79d69(*(undefined4 *)(param_1 + 0x18),param_1);
  return param_2;
}



undefined4 __thiscall FUN_00e82070(int param_1,undefined4 param_2)

{
  func_0x005dd330(*(undefined4 *)(param_1 + 0x18),param_1);
  return param_2;
}



void __thiscall
FUN_00e82090(int param_1,undefined4 *param_2,int param_3,undefined2 *param_4,int *param_5,
            int param_6,int param_7,int *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  size_t _Size;
  undefined2 *puVar4;
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *param_5 = param_3;
  *param_8 = param_6;
  puVar4 = (undefined2 *)*param_5;
  if ((puVar4 == param_4) || (param_6 == param_7)) {
LAB_00e82163:
    FUN_008ab370();
    return;
  }
  do {
    if (param_7 - param_6 < 5) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      _Size = func_0x00e72f9e(auStack_10,*puVar4,param_2,param_1 + 8);
      if ((int)_Size < 0) goto LAB_00e82163;
      if (param_7 - *param_8 < (int)_Size) {
        *param_2 = uVar1;
        param_2[1] = uVar2;
        goto LAB_00e82163;
      }
      memcpy((void *)*param_8,auStack_10,_Size);
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + _Size;
    }
    else {
      iVar3 = func_0x00e72f9e(param_6,*puVar4,param_2,param_1 + 8);
      if (iVar3 < 0) goto LAB_00e82163;
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + iVar3;
    }
    puVar4 = (undefined2 *)*param_5;
    param_6 = *param_8;
    if ((puVar4 == param_4) || (param_6 == param_7)) goto LAB_00e82163;
  } while( true );
}



void __thiscall FUN_00e82190(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  return;
}



undefined4 __thiscall FUN_00e821a0(int param_1,undefined4 param_2)

{
  func_0x00e79d69(*(undefined4 *)(param_1 + 0x14),param_1);
  return param_2;
}



undefined4 __thiscall FUN_00e821c0(int param_1,undefined4 param_2)

{
  func_0x005dd330(*(undefined4 *)(param_1 + 0x14),param_1);
  return param_2;
}



void FUN_00e821e0(void)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  short *psVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  short *psVar7;
  int unaff_EBP;
  uint uVar8;
  
  func_0x00e88497(0x4c);
  *(undefined4 *)(unaff_EBP + -0x58) = extraout_ECX;
  psVar7 = *(short **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + 0x18);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x30));
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar3 = (int *)func_0x00e79224(unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  pcVar1 = *(code **)(*piVar3 + 0x2c);
  _guard_check_icall("0123456789-","%.0Lf",unaff_EBP + -0x28);
  (*pcVar1)();
  uVar2 = *(uint *)(psVar7 + 8);
  uVar6 = 0;
  *(undefined1 *)(unaff_EBP + -0x48) = 0;
  if (uVar2 != 0) {
    psVar4 = psVar7;
    if (7 < *(uint *)(psVar7 + 10)) {
      psVar4 = *(short **)psVar7;
    }
    if (*psVar4 == *(short *)(unaff_EBP + -0x14)) {
      *(undefined1 *)(unaff_EBP + -0x48) = 1;
      uVar6 = 1;
      *(undefined4 *)(unaff_EBP + -0x44) = 1;
    }
  }
  uVar8 = uVar6;
  if (uVar6 < uVar2) {
    do {
      psVar4 = psVar7;
      if (7 < *(uint *)(psVar7 + 10)) {
        psVar4 = *(short **)psVar7;
      }
      uVar5 = func_0x00e75d99(unaff_EBP + -0x28,psVar4[uVar6]);
      uVar8 = uVar6;
    } while ((uVar5 < 10) && (uVar6 = uVar6 + 1, uVar8 = uVar6, uVar6 < uVar2));
    uVar6 = *(uint *)(unaff_EBP + -0x44);
  }
  if (7 < *(uint *)(psVar7 + 10)) {
    psVar7 = *(short **)psVar7;
  }
  func_0x00e79da8(psVar7 + uVar6,uVar8 - uVar6);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    func_0x00e839e2(*(undefined4 *)(unaff_EBP + -0x28));
  }
  func_0x00e79d33(unaff_EBP + -0x40);
  func_0x00e7df68(*(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + 0xc),
                  *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                  *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + 0x1c),
                  *(undefined4 *)(unaff_EBP + -0x48));
  func_0x00e7edc7();
  func_0x00e88455();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e82487)
// WARNING: Removing unreachable block (ram,0x00e824a7)
// WARNING: Removing unreachable block (ram,0x00e824aa)
// WARNING: Removing unreachable block (ram,0x00e824ac)
// WARNING: Removing unreachable block (ram,0x00e824af)

void FUN_00e82310(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  int unaff_EBP;
  double dVar7;
  
  func_0x00e88497(0x68);
  *(undefined4 *)(unaff_EBP + -0x74) = extraout_ECX;
  dVar7 = *(double *)(unaff_EBP + 0x20);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x58) = puVar1;
  *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 0x18);
  *(undefined1 *)(unaff_EBP + -0x54) = 0;
  if (dVar7 < 0.0) {
    dVar7 = -dVar7;
    *(undefined1 *)(unaff_EBP + -0x54) = 1;
  }
  uVar3 = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  if (1e+35 <= dVar7) {
    do {
      if (4999 < uVar3) break;
      dVar7 = dVar7 / 10000000000.0;
      uVar3 = uVar3 + 10;
    } while (1e+35 <= dVar7);
    *(uint *)(unaff_EBP + -0x60) = uVar3;
  }
  iVar4 = sprintf_s((char *)(unaff_EBP + -0x38),0x28,"%.0Lf",dVar7);
  *(int *)(unaff_EBP + -0x5c) = iVar4;
  if (iVar4 < 0) {
    uVar6 = *(undefined4 *)(unaff_EBP + 0x10);
    *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
    puVar1[1] = uVar6;
  }
  else {
    func_0x00464280();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar5 = (int *)func_0x00e79224(unaff_EBP + -0x68);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(unaff_EBP + -0x6c) = piVar5;
    func_0x004642b0();
    pcVar2 = *(code **)(*piVar5 + 0x30);
    _guard_check_icall(0x30);
    uVar3 = (*pcVar2)();
    *(uint *)(unaff_EBP + -100) = uVar3 & 0xffff;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    func_0x00e75c80(0,*(undefined4 *)(unaff_EBP + -0x5c));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar4 = unaff_EBP + -0x50;
    if (7 < *(uint *)(unaff_EBP + -0x3c)) {
      iVar4 = *(int *)(unaff_EBP + -0x50);
    }
    pcVar2 = *(code **)(**(int **)(unaff_EBP + -0x6c) + 0x2c);
    _guard_check_icall(unaff_EBP + -0x38,*(int *)(unaff_EBP + -0x5c) + unaff_EBP + -0x38,iVar4);
    (*pcVar2)();
    func_0x00e7ee79(*(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -100));
    func_0x00e79d33(unaff_EBP + -0x50);
    func_0x00e7df68(*(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + 0xc),
                    *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                    *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + 0x1c),
                    *(undefined4 *)(unaff_EBP + -0x54));
    if (7 < *(uint *)(unaff_EBP + -0x3c)) {
      uVar6 = *(undefined4 *)(unaff_EBP + -0x50);
      uVar3 = *(uint *)(unaff_EBP + -0x3c) * 2 + 2;
      *(uint *)(unaff_EBP + -0x58) = uVar3;
      *(undefined4 *)(unaff_EBP + -0x54) = uVar6;
      if (0xfff < uVar3) {
        func_0x00463540(unaff_EBP + -0x54,unaff_EBP + -0x58);
        uVar3 = *(uint *)(unaff_EBP + -0x58);
        uVar6 = *(undefined4 *)(unaff_EBP + -0x54);
      }
      func_0x008ab812(uVar6,uVar3);
    }
  }
  func_0x00e88455();
  return;
}



void FUN_00e82500(void)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  short *psVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  short *psVar7;
  int unaff_EBP;
  uint uVar8;
  
  func_0x00e88497(0x4c);
  *(undefined4 *)(unaff_EBP + -0x58) = extraout_ECX;
  psVar7 = *(short **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + 0x18);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x30));
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar3 = (int *)func_0x009bba00(unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  pcVar1 = *(code **)(*piVar3 + 0x2c);
  _guard_check_icall("0123456789-","0123456789-",unaff_EBP + -0x28);
  (*pcVar1)();
  uVar2 = *(uint *)(psVar7 + 8);
  uVar6 = 0;
  *(undefined1 *)(unaff_EBP + -0x48) = 0;
  if (uVar2 != 0) {
    psVar4 = psVar7;
    if (7 < *(uint *)(psVar7 + 10)) {
      psVar4 = *(short **)psVar7;
    }
    if (*psVar4 == *(short *)(unaff_EBP + -0x14)) {
      *(undefined1 *)(unaff_EBP + -0x48) = 1;
      uVar6 = 1;
      *(undefined4 *)(unaff_EBP + -0x44) = 1;
    }
  }
  uVar8 = uVar6;
  if (uVar6 < uVar2) {
    do {
      psVar4 = psVar7;
      if (7 < *(uint *)(psVar7 + 10)) {
        psVar4 = *(short **)psVar7;
      }
      uVar5 = func_0x00e75d99(unaff_EBP + -0x28,psVar4[uVar6]);
      uVar8 = uVar6;
    } while ((uVar5 < 10) && (uVar6 = uVar6 + 1, uVar8 = uVar6, uVar6 < uVar2));
    uVar6 = *(uint *)(unaff_EBP + -0x44);
  }
  if (7 < *(uint *)(psVar7 + 10)) {
    psVar7 = *(short **)psVar7;
  }
  func_0x00e79dd2(psVar7 + uVar6,uVar8 - uVar6);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    func_0x00607860(*(undefined4 *)(unaff_EBP + -0x28));
  }
  func_0x00589010(unaff_EBP + -0x40);
  func_0x00e7e5ee(*(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + 0xc),
                  *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                  *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + 0x1c),
                  *(undefined4 *)(unaff_EBP + -0x48));
  func_0x00588fe0();
  func_0x00e88455();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e827a7)
// WARNING: Removing unreachable block (ram,0x00e827c7)
// WARNING: Removing unreachable block (ram,0x00e827ca)
// WARNING: Removing unreachable block (ram,0x00e827cc)
// WARNING: Removing unreachable block (ram,0x00e827cf)

void FUN_00e82630(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  int unaff_EBP;
  double dVar7;
  
  func_0x00e88497(0x68);
  *(undefined4 *)(unaff_EBP + -0x74) = extraout_ECX;
  dVar7 = *(double *)(unaff_EBP + 0x20);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x58) = puVar1;
  *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 0x18);
  *(undefined1 *)(unaff_EBP + -0x54) = 0;
  if (dVar7 < 0.0) {
    dVar7 = -dVar7;
    *(undefined1 *)(unaff_EBP + -0x54) = 1;
  }
  uVar3 = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  if (1e+35 <= dVar7) {
    do {
      if (4999 < uVar3) break;
      dVar7 = dVar7 / 10000000000.0;
      uVar3 = uVar3 + 10;
    } while (1e+35 <= dVar7);
    *(uint *)(unaff_EBP + -0x60) = uVar3;
  }
  iVar4 = sprintf_s((char *)(unaff_EBP + -0x38),0x28,"%.0Lf",dVar7);
  *(int *)(unaff_EBP + -0x5c) = iVar4;
  if (iVar4 < 0) {
    uVar6 = *(undefined4 *)(unaff_EBP + 0x10);
    *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
    puVar1[1] = uVar6;
  }
  else {
    func_0x00464280();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar5 = (int *)func_0x009bba00(unaff_EBP + -0x68);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(unaff_EBP + -0x6c) = piVar5;
    func_0x004642b0();
    pcVar2 = *(code **)(*piVar5 + 0x30);
    _guard_check_icall(0x30);
    uVar3 = (*pcVar2)();
    *(uint *)(unaff_EBP + -100) = uVar3 & 0xffff;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    func_0x009bb030(0,*(undefined4 *)(unaff_EBP + -0x5c));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar4 = unaff_EBP + -0x50;
    if (7 < *(uint *)(unaff_EBP + -0x3c)) {
      iVar4 = *(int *)(unaff_EBP + -0x50);
    }
    pcVar2 = *(code **)(**(int **)(unaff_EBP + -0x6c) + 0x2c);
    _guard_check_icall(unaff_EBP + -0x38,*(int *)(unaff_EBP + -0x5c) + unaff_EBP + -0x38,iVar4);
    (*pcVar2)();
    func_0x00589430(*(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -100));
    func_0x00589010(unaff_EBP + -0x50);
    func_0x00e7e5ee(*(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + 0xc),
                    *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                    *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + 0x1c),
                    *(undefined4 *)(unaff_EBP + -0x54));
    if (7 < *(uint *)(unaff_EBP + -0x3c)) {
      uVar6 = *(undefined4 *)(unaff_EBP + -0x50);
      uVar3 = *(uint *)(unaff_EBP + -0x3c) * 2 + 2;
      *(uint *)(unaff_EBP + -0x58) = uVar3;
      *(undefined4 *)(unaff_EBP + -0x54) = uVar6;
      if (0xfff < uVar3) {
        func_0x00463540(unaff_EBP + -0x54,unaff_EBP + -0x58);
        uVar3 = *(uint *)(unaff_EBP + -0x58);
        uVar6 = *(undefined4 *)(unaff_EBP + -0x54);
      }
      func_0x008ab812(uVar6,uVar3);
    }
  }
  func_0x00e88455();
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
// &,char,long)const 
//  protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
// &,char,unsigned long)const 
//  protected: virtual class std::ostreambuf_iterator<unsigned short,struct
// std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
// std::ios_base &,unsigned short,long)const 
//  protected: virtual class std::ostreambuf_iterator<unsigned short,struct
// std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
// std::ios_base &,unsigned short,unsigned long)const 
//   6 names - too many to list
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall
do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
      undefined4 param_6,undefined4 param_7)

{
  char *_Format;
  int iVar1;
  char acStack_50 [64];
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  _Format = (char *)func_0x00e7cc10(param_1,auStack_10,&DAT_0113c6b0,*(undefined4 *)(param_5 + 0x14)
                                    ,param_7);
  iVar1 = sprintf_s(acStack_50,0x40,_Format);
  func_0x00e7d102(param_1,param_2,param_3,param_4,param_5,param_6,acStack_50,iVar1);
  FUN_008ab370();
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
// &,char,long)const 
//  protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
// &,char,unsigned long)const 
//  protected: virtual class std::ostreambuf_iterator<unsigned short,struct
// std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
// std::ios_base &,unsigned short,long)const 
//  protected: virtual class std::ostreambuf_iterator<unsigned short,struct
// std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
// std::ios_base &,unsigned short,unsigned long)const 
//   6 names - too many to list
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall
do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
      undefined4 param_6,undefined4 param_7)

{
  char *_Format;
  int iVar1;
  char acStack_50 [64];
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  _Format = (char *)func_0x00e7cc10(param_1,auStack_10,&DAT_0113c6b4,*(undefined4 *)(param_5 + 0x14)
                                    ,param_7);
  iVar1 = sprintf_s(acStack_50,0x40,_Format);
  func_0x00e7d102(param_1,param_2,param_3,param_4,param_5,param_6,acStack_50,iVar1);
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e829dd)
// WARNING: Removing unreachable block (ram,0x00e829f3)
// WARNING: Removing unreachable block (ram,0x00e829f6)
// WARNING: Removing unreachable block (ram,0x00e829f8)
// WARNING: Removing unreachable block (ram,0x00e829fb)
// WARNING: Removing unreachable block (ram,0x00e82abe)
// WARNING: Removing unreachable block (ram,0x00e82ad8)
// WARNING: Removing unreachable block (ram,0x00e82adb)
// WARNING: Removing unreachable block (ram,0x00e82add)
// WARNING: Removing unreachable block (ram,0x00e82ae0)

void FUN_00e82900(void)

{
  double dVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char *_Format;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  char *_DstBuf;
  int iVar7;
  int unaff_EBP;
  uint uVar8;
  uint uVar9;
  
  func_0x00e88497(0x3c);
  *(undefined4 *)(unaff_EBP + -0x48) = extraout_ECX;
  iVar4 = *(int *)(unaff_EBP + 0x14);
  uVar8 = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(int *)(unaff_EBP + -0x44) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x30) = 0;
  uVar9 = *(uint *)(iVar4 + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar9 = uVar9 & 0x3000;
  if (uVar9 == 0x3000) {
    uVar3 = 0xffffffff;
    uVar6 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(iVar4 + 0x18);
    uVar6 = *(undefined4 *)(iVar4 + 0x1c);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
  iVar4 = func_0x00484880(uVar3,uVar6,uVar9);
  *(int *)(unaff_EBP + -0x3c) = iVar4;
  if (uVar9 == 0x2000) {
    dVar1 = *(double *)(unaff_EBP + 0x1c);
    if (10000000000.0 < ABS(dVar1)) {
      func_0x008aaf90(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),unaff_EBP + -0x40);
      uVar9 = (int)*(uint *)(unaff_EBP + -0x40) >> 0x1f;
      uVar8 = *(uint *)(unaff_EBP + -0x20);
      iVar4 = *(int *)(unaff_EBP + -0x3c) +
              (int)(((*(uint *)(unaff_EBP + -0x40) ^ uVar9) - uVar9) * 0x7597) / 100000;
    }
  }
  uVar9 = iVar4 + 0x32;
  if (uVar8 < uVar9) {
    func_0x0046a730(uVar9 - uVar8,0);
  }
  else {
    if (uVar9 != uVar8) {
      iVar4 = unaff_EBP + -0x30;
      if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
        iVar4 = *(int *)(unaff_EBP + -0x30);
      }
      *(int *)(unaff_EBP + -0x3c) = iVar4;
    }
    *(uint *)(unaff_EBP + -0x20) = uVar9;
    iVar4 = unaff_EBP + -0x30;
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      iVar4 = *(int *)(unaff_EBP + -0x30);
    }
    *(undefined1 *)(iVar4 + uVar9) = 0;
  }
  sVar2 = func_0x008ab08e((int)*(undefined8 *)(unaff_EBP + 0x1c),
                          (int)((ulonglong)*(undefined8 *)(unaff_EBP + 0x1c) >> 0x20));
  iVar4 = *(int *)(unaff_EBP + -0x44);
  *(bool *)(unaff_EBP + -0x3c) = sVar2 < 1;
  uVar9 = *(uint *)(iVar4 + 0x14);
  if (sVar2 >= 1) {
    uVar9 = uVar9 & 0xffffffef;
  }
  _Format = (char *)func_0x00e7a41e(*(undefined4 *)(unaff_EBP + -0x48),unaff_EBP + -0x18,0,uVar9);
  _DstBuf = (char *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    _DstBuf = *(char **)(unaff_EBP + -0x30);
  }
  iVar5 = sprintf_s(_DstBuf,*(size_t *)(unaff_EBP + -0x20),_Format,
                    *(undefined4 *)(unaff_EBP + -0x34),(int)*(undefined8 *)(unaff_EBP + 0x1c),
                    (int)((ulonglong)*(undefined8 *)(unaff_EBP + 0x1c) >> 0x20));
  iVar7 = unaff_EBP + -0x30;
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    iVar7 = *(int *)(unaff_EBP + -0x30);
  }
  func_0x00e75db4(*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + 0xc),
                  *(undefined4 *)(unaff_EBP + 0x10),iVar4,*(undefined4 *)(unaff_EBP + 0x18),iVar7,
                  iVar5,*(undefined4 *)(unaff_EBP + -0x3c));
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    uVar3 = *(undefined4 *)(unaff_EBP + -0x30);
    uVar9 = *(uint *)(unaff_EBP + -0x1c) + 1;
    *(uint *)(unaff_EBP + -0x38) = uVar9;
    *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
    if (0xfff < uVar9) {
      func_0x00463540(unaff_EBP + -0x34,unaff_EBP + -0x38);
      uVar9 = *(uint *)(unaff_EBP + -0x38);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x34);
    }
    func_0x008ab812(uVar3,uVar9);
  }
  func_0x00e88455();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e82c0d)
// WARNING: Removing unreachable block (ram,0x00e82c23)
// WARNING: Removing unreachable block (ram,0x00e82c26)
// WARNING: Removing unreachable block (ram,0x00e82c28)
// WARNING: Removing unreachable block (ram,0x00e82c2b)
// WARNING: Removing unreachable block (ram,0x00e82cee)
// WARNING: Removing unreachable block (ram,0x00e82d08)
// WARNING: Removing unreachable block (ram,0x00e82d0b)
// WARNING: Removing unreachable block (ram,0x00e82d0d)
// WARNING: Removing unreachable block (ram,0x00e82d10)

void FUN_00e82b30(void)

{
  double dVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char *_Format;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  char *_DstBuf;
  int iVar7;
  int unaff_EBP;
  uint uVar8;
  uint uVar9;
  
  func_0x00e88497(0x3c);
  *(undefined4 *)(unaff_EBP + -0x48) = extraout_ECX;
  iVar4 = *(int *)(unaff_EBP + 0x14);
  uVar8 = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(int *)(unaff_EBP + -0x44) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x30) = 0;
  uVar9 = *(uint *)(iVar4 + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar9 = uVar9 & 0x3000;
  if (uVar9 == 0x3000) {
    uVar3 = 0xffffffff;
    uVar6 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(iVar4 + 0x18);
    uVar6 = *(undefined4 *)(iVar4 + 0x1c);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
  iVar4 = func_0x00484880(uVar3,uVar6,uVar9);
  *(int *)(unaff_EBP + -0x3c) = iVar4;
  if (uVar9 == 0x2000) {
    dVar1 = *(double *)(unaff_EBP + 0x1c);
    if (10000000000.0 < ABS(dVar1)) {
      func_0x008aaf90(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),unaff_EBP + -0x40);
      uVar9 = (int)*(uint *)(unaff_EBP + -0x40) >> 0x1f;
      uVar8 = *(uint *)(unaff_EBP + -0x20);
      iVar4 = *(int *)(unaff_EBP + -0x3c) +
              (int)(((*(uint *)(unaff_EBP + -0x40) ^ uVar9) - uVar9) * 0x7597) / 100000;
    }
  }
  uVar9 = iVar4 + 0x32;
  if (uVar8 < uVar9) {
    func_0x0046a730(uVar9 - uVar8,0);
  }
  else {
    if (uVar9 != uVar8) {
      iVar4 = unaff_EBP + -0x30;
      if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
        iVar4 = *(int *)(unaff_EBP + -0x30);
      }
      *(int *)(unaff_EBP + -0x3c) = iVar4;
    }
    *(uint *)(unaff_EBP + -0x20) = uVar9;
    iVar4 = unaff_EBP + -0x30;
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      iVar4 = *(int *)(unaff_EBP + -0x30);
    }
    *(undefined1 *)(iVar4 + uVar9) = 0;
  }
  sVar2 = func_0x008ab094((int)*(undefined8 *)(unaff_EBP + 0x1c),
                          (int)((ulonglong)*(undefined8 *)(unaff_EBP + 0x1c) >> 0x20));
  iVar4 = *(int *)(unaff_EBP + -0x44);
  *(bool *)(unaff_EBP + -0x3c) = sVar2 < 1;
  uVar9 = *(uint *)(iVar4 + 0x14);
  if (sVar2 >= 1) {
    uVar9 = uVar9 & 0xffffffef;
  }
  _Format = (char *)func_0x00e7a41e(*(undefined4 *)(unaff_EBP + -0x48),unaff_EBP + -0x18,0x4c,uVar9)
  ;
  _DstBuf = (char *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    _DstBuf = *(char **)(unaff_EBP + -0x30);
  }
  iVar5 = sprintf_s(_DstBuf,*(size_t *)(unaff_EBP + -0x20),_Format,
                    *(undefined4 *)(unaff_EBP + -0x34),(int)*(undefined8 *)(unaff_EBP + 0x1c),
                    (int)((ulonglong)*(undefined8 *)(unaff_EBP + 0x1c) >> 0x20));
  iVar7 = unaff_EBP + -0x30;
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    iVar7 = *(int *)(unaff_EBP + -0x30);
  }
  func_0x00e75db4(*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + 0xc),
                  *(undefined4 *)(unaff_EBP + 0x10),iVar4,*(undefined4 *)(unaff_EBP + 0x18),iVar7,
                  iVar5,*(undefined4 *)(unaff_EBP + -0x3c));
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    uVar3 = *(undefined4 *)(unaff_EBP + -0x30);
    uVar9 = *(uint *)(unaff_EBP + -0x1c) + 1;
    *(uint *)(unaff_EBP + -0x38) = uVar9;
    *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
    if (0xfff < uVar9) {
      func_0x00463540(unaff_EBP + -0x34,unaff_EBP + -0x38);
      uVar9 = *(uint *)(unaff_EBP + -0x38);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x34);
    }
    func_0x008ab812(uVar3,uVar9);
  }
  func_0x00e88455();
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
// &,char,void const *)const 
//  protected: virtual class std::ostreambuf_iterator<unsigned short,struct
// std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
// std::ios_base &,unsigned short,void const *)const 
//  protected: virtual class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
// __thiscall std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct
// std::char_traits<wchar_t> > >::do_put(class std::ostreambuf_iterator<wchar_t,struct
// std::char_traits<wchar_t> >,class std::ios_base &,wchar_t,void const *)const 
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall
do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
      undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char acStack_48 [64];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  iVar1 = sprintf_s(acStack_48,0x40,"%p",param_7);
  func_0x00e7d102(param_1,param_2,param_3,param_4,param_5,param_6,acStack_48,iVar1);
  FUN_008ab370();
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
// &,char,__int64)const 
//  protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
// &,char,unsigned __int64)const 
//  protected: virtual class std::ostreambuf_iterator<unsigned short,struct
// std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
// std::ios_base &,unsigned short,__int64)const 
//  protected: virtual class std::ostreambuf_iterator<unsigned short,struct
// std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
// std::ios_base &,unsigned short,unsigned __int64)const 
//   6 names - too many to list
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall
do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
      undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *_Format;
  int iVar1;
  char acStack_50 [64];
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  _Format = (char *)func_0x00e7cc10(param_1,auStack_10,&DAT_0113c6a8,*(undefined4 *)(param_5 + 0x14)
                                    ,param_7,param_8);
  iVar1 = sprintf_s(acStack_50,0x40,_Format);
  func_0x00e7d102(param_1,param_2,param_3,param_4,param_5,param_6,acStack_50,iVar1);
  FUN_008ab370();
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
// &,char,__int64)const 
//  protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
// >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
// &,char,unsigned __int64)const 
//  protected: virtual class std::ostreambuf_iterator<unsigned short,struct
// std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
// std::ios_base &,unsigned short,__int64)const 
//  protected: virtual class std::ostreambuf_iterator<unsigned short,struct
// std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
// std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
// std::ios_base &,unsigned short,unsigned __int64)const 
//   6 names - too many to list
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall
do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
      undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *_Format;
  int iVar1;
  char acStack_50 [64];
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  _Format = (char *)func_0x00e7cc10(param_1,auStack_10,&DAT_0113c6ac,*(undefined4 *)(param_5 + 0x14)
                                    ,param_7,param_8);
  iVar1 = sprintf_s(acStack_50,0x40,_Format);
  func_0x00e7d102(param_1,param_2,param_3,param_4,param_5,param_6,acStack_50,iVar1);
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e830b9)
// WARNING: Removing unreachable block (ram,0x00e830d9)
// WARNING: Removing unreachable block (ram,0x00e830dc)
// WARNING: Removing unreachable block (ram,0x00e830de)
// WARNING: Removing unreachable block (ram,0x00e830e1)

void FUN_00e82ea0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *extraout_ECX;
  undefined4 uVar8;
  int unaff_EBP;
  int iVar9;
  undefined4 uVar10;
  
  func_0x00e88497(0x4c);
  *(int **)(unaff_EBP + -0x54) = extraout_ECX;
  iVar1 = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + 8);
  uVar7 = *(uint *)(iVar1 + 0x14);
  *(uint *)(unaff_EBP + -0x50) = (uint)*(ushort *)(unaff_EBP + 0x18);
  if ((uVar7 & 0x4000) == 0) {
    iVar9 = *extraout_ECX;
    _guard_check_icall(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + 0x10),iVar1,(uint)*(ushort *)(unaff_EBP + 0x18),
                       *(undefined1 *)(unaff_EBP + 0x1c));
    (**(code **)(iVar9 + 0x24))();
    goto LAB_00e83127;
  }
  func_0x00464280(*(undefined4 *)(iVar1 + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar4 = (int *)func_0x00e79a4a(unaff_EBP + -0x48);
  func_0x004642b0();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)(unaff_EBP + -0x28) = 0;
  iVar9 = *piVar4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(char *)(unaff_EBP + 0x1c) == '\0') {
    _guard_check_icall(unaff_EBP + -0x40);
    (**(code **)(iVar9 + 0x18))();
    if (7 < *(uint *)(unaff_EBP + -0x14)) {
      func_0x00e7ec74();
      uVar8 = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x4c) = uVar8;
      uVar7 = *(int *)(unaff_EBP + -0x14) * 2 + 2;
      *(uint *)(unaff_EBP + -0x44) = uVar7;
      if (0xfff < uVar7) {
        func_0x00463540(unaff_EBP + -0x4c,unaff_EBP + -0x44);
        uVar7 = *(uint *)(unaff_EBP + -0x44);
        uVar8 = *(undefined4 *)(unaff_EBP + -0x4c);
      }
      goto LAB_00e82fe0;
    }
  }
  else {
    _guard_check_icall(unaff_EBP + -0x40);
    (**(code **)(iVar9 + 0x1c))();
    if (7 < *(uint *)(unaff_EBP + -0x14)) {
      func_0x00e7ec74();
      uVar8 = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x44) = uVar8;
      uVar7 = *(int *)(unaff_EBP + -0x14) * 2 + 2;
      *(uint *)(unaff_EBP + -0x4c) = uVar7;
      if (0xfff < uVar7) {
        func_0x00463540(unaff_EBP + -0x44,unaff_EBP + -0x4c);
        uVar7 = *(uint *)(unaff_EBP + -0x4c);
        uVar8 = *(undefined4 *)(unaff_EBP + -0x44);
      }
LAB_00e82fe0:
      func_0x008ab812(uVar8,uVar7);
    }
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)(unaff_EBP + -0x28) = 0;
  func_0x00e7ed12(unaff_EBP + -0x40);
  func_0x00e7edc7();
  uVar7 = *(uint *)(unaff_EBP + -0x18);
  if ((*(int *)(iVar1 + 0x24) < 0) ||
     (((*(int *)(iVar1 + 0x24) < 1 && (*(int *)(iVar1 + 0x20) == 0)) ||
      (*(uint *)(iVar1 + 0x20) <= uVar7)))) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(uint *)(iVar1 + 0x20) - uVar7;
  }
  if ((*(uint *)(iVar1 + 0x14) & 0x1c0) == 0x40) {
    uVar10 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar8 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    puVar5 = (undefined4 *)
             func_0x00e7ece6(*(undefined4 *)(unaff_EBP + -0x54),unaff_EBP + -0x48,
                             *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                             *(undefined4 *)(unaff_EBP + -0x50),iVar9);
    uVar7 = *(uint *)(unaff_EBP + -0x18);
    iVar9 = 0;
    uVar8 = *puVar5;
    uVar10 = puVar5[1];
    *(undefined4 *)(unaff_EBP + 0xc) = uVar8;
    *(undefined4 *)(unaff_EBP + 0x10) = uVar10;
  }
  iVar6 = unaff_EBP + -0x28;
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    iVar6 = *(int *)(unaff_EBP + -0x28);
  }
  uVar2 = *(undefined4 *)(unaff_EBP + -0x54);
  puVar5 = (undefined4 *)func_0x00e7df33(uVar2,unaff_EBP + -0x48,uVar8,uVar10,iVar6,uVar7);
  uVar8 = *(undefined4 *)(unaff_EBP + -0x50);
  uVar10 = *puVar5;
  uVar3 = puVar5[1];
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = uVar10;
  *(undefined4 *)(unaff_EBP + 0x10) = uVar3;
  func_0x00e7ece6(uVar2,*(undefined4 *)(unaff_EBP + -0x58),uVar10,uVar3,uVar8,iVar9);
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    uVar8 = *(undefined4 *)(unaff_EBP + -0x28);
    uVar7 = *(uint *)(unaff_EBP + -0x14) * 2 + 2;
    *(uint *)(unaff_EBP + -0x50) = uVar7;
    *(undefined4 *)(unaff_EBP + -0x44) = uVar8;
    if (0xfff < uVar7) {
      func_0x00463540(unaff_EBP + -0x44,unaff_EBP + -0x50);
      uVar7 = *(uint *)(unaff_EBP + -0x50);
      uVar8 = *(undefined4 *)(unaff_EBP + -0x44);
    }
    func_0x008ab812(uVar8,uVar7);
  }
LAB_00e83127:
  func_0x00e88455();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e83215)
// WARNING: Removing unreachable block (ram,0x00e83235)
// WARNING: Removing unreachable block (ram,0x00e83238)
// WARNING: Removing unreachable block (ram,0x00e8323a)
// WARNING: Removing unreachable block (ram,0x00e8323d)
// WARNING: Removing unreachable block (ram,0x00e832c0)
// WARNING: Removing unreachable block (ram,0x00e832e0)
// WARNING: Removing unreachable block (ram,0x00e832e3)
// WARNING: Removing unreachable block (ram,0x00e832e5)
// WARNING: Removing unreachable block (ram,0x00e832e8)

void FUN_00e83130(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  int unaff_EBP;
  
  func_0x00e88497(0x38);
  *(undefined4 *)(unaff_EBP + -0x3c) = extraout_ECX;
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0x250021;
  *(undefined4 *)(unaff_EBP + -0x18) = 0x78;
  *(undefined2 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 7;
  *(undefined2 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x24) == '\0') {
    *(short *)(unaff_EBP + -0x18) = (short)*(char *)(unaff_EBP + 0x20);
  }
  else {
    *(short *)(unaff_EBP + -0x16) = (short)*(char *)(unaff_EBP + 0x20);
    *(short *)(unaff_EBP + -0x18) = (short)*(char *)(unaff_EBP + 0x24);
  }
  piVar2 = (int *)func_0x008aaf8a();
  iVar4 = 0x10;
  *(int *)(unaff_EBP + -0x44) = *piVar2;
  while( true ) {
    func_0x00589430(iVar4,0);
    iVar3 = unaff_EBP + -0x34;
    if (7 < *(uint *)(unaff_EBP + -0x20)) {
      iVar3 = *(int *)(unaff_EBP + -0x34);
    }
    iVar3 = func_0x00e87d04(iVar3,*(undefined4 *)(unaff_EBP + -0x24),unaff_EBP + -0x1c,
                            *(undefined4 *)(unaff_EBP + -0x38),
                            *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 8));
    if (iVar3 != 0) break;
    if (*piVar2 == 0x16) {
      func_0x00464710(*(uint *)(*(int *)(unaff_EBP + -0x40) + 0xc) | 4,0);
      uVar6 = *(uint *)(unaff_EBP + -0x20);
      uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
      *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
      puVar1[1] = uVar7;
      if (7 < uVar6) {
        uVar7 = *(undefined4 *)(unaff_EBP + -0x34);
        uVar6 = uVar6 * 2 + 2;
        *(uint *)(unaff_EBP + -0x38) = uVar6;
        *(undefined4 *)(unaff_EBP + -0x3c) = uVar7;
        if (0xfff < uVar6) {
          func_0x00463540(unaff_EBP + -0x3c,unaff_EBP + -0x38);
          uVar6 = *(uint *)(unaff_EBP + -0x38);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x3c);
        }
LAB_00e83323:
        func_0x008ab812(uVar7,uVar6);
      }
LAB_00e8332c:
      func_0x00e88455();
      return;
    }
    iVar4 = iVar4 * 2;
  }
  *piVar2 = *(int *)(unaff_EBP + -0x44);
  iVar4 = unaff_EBP + -0x34;
  if (7 < *(uint *)(unaff_EBP + -0x20)) {
    iVar4 = *(int *)(unaff_EBP + -0x34);
  }
  iVar5 = unaff_EBP + -0x34;
  if (7 < *(uint *)(unaff_EBP + -0x20)) {
    iVar5 = *(int *)(unaff_EBP + -0x34);
  }
  func_0x00e7900d(puVar1,iVar5 + 2,iVar4 + iVar3 * 2,*(undefined4 *)(unaff_EBP + 0xc),
                  *(undefined4 *)(unaff_EBP + 0x10));
  if (*(uint *)(unaff_EBP + -0x20) < 8) goto LAB_00e8332c;
  uVar7 = *(undefined4 *)(unaff_EBP + -0x34);
  uVar6 = *(uint *)(unaff_EBP + -0x20) * 2 + 2;
  *(uint *)(unaff_EBP + -0x3c) = uVar6;
  *(undefined4 *)(unaff_EBP + -0x38) = uVar7;
  if (0xfff < uVar6) {
    func_0x00463540(unaff_EBP + -0x38,unaff_EBP + -0x3c);
    uVar6 = *(uint *)(unaff_EBP + -0x3c);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x38);
  }
  goto LAB_00e83323;
}



// WARNING: Removing unreachable block (ram,0x00e83425)
// WARNING: Removing unreachable block (ram,0x00e83445)
// WARNING: Removing unreachable block (ram,0x00e83448)
// WARNING: Removing unreachable block (ram,0x00e8344a)
// WARNING: Removing unreachable block (ram,0x00e8344d)
// WARNING: Removing unreachable block (ram,0x00e834d0)
// WARNING: Removing unreachable block (ram,0x00e834f0)
// WARNING: Removing unreachable block (ram,0x00e834f3)
// WARNING: Removing unreachable block (ram,0x00e834f5)
// WARNING: Removing unreachable block (ram,0x00e834f8)

void FUN_00e83340(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  int unaff_EBP;
  
  func_0x00e88497(0x38);
  *(undefined4 *)(unaff_EBP + -0x3c) = extraout_ECX;
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0x250021;
  *(undefined4 *)(unaff_EBP + -0x18) = 0x78;
  *(undefined2 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 7;
  *(undefined2 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x24) == '\0') {
    *(short *)(unaff_EBP + -0x18) = (short)*(char *)(unaff_EBP + 0x20);
  }
  else {
    *(short *)(unaff_EBP + -0x16) = (short)*(char *)(unaff_EBP + 0x20);
    *(short *)(unaff_EBP + -0x18) = (short)*(char *)(unaff_EBP + 0x24);
  }
  piVar2 = (int *)func_0x008aaf8a();
  iVar4 = 0x10;
  *(int *)(unaff_EBP + -0x44) = *piVar2;
  while( true ) {
    func_0x00589430(iVar4,0);
    iVar3 = unaff_EBP + -0x34;
    if (7 < *(uint *)(unaff_EBP + -0x20)) {
      iVar3 = *(int *)(unaff_EBP + -0x34);
    }
    iVar3 = func_0x00e87d04(iVar3,*(undefined4 *)(unaff_EBP + -0x24),unaff_EBP + -0x1c,
                            *(undefined4 *)(unaff_EBP + -0x38),
                            *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 8));
    if (iVar3 != 0) break;
    if (*piVar2 == 0x16) {
      func_0x00464710(*(uint *)(*(int *)(unaff_EBP + -0x40) + 0xc) | 4,0);
      uVar6 = *(uint *)(unaff_EBP + -0x20);
      uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
      *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
      puVar1[1] = uVar7;
      if (7 < uVar6) {
        uVar7 = *(undefined4 *)(unaff_EBP + -0x34);
        uVar6 = uVar6 * 2 + 2;
        *(uint *)(unaff_EBP + -0x38) = uVar6;
        *(undefined4 *)(unaff_EBP + -0x3c) = uVar7;
        if (0xfff < uVar6) {
          func_0x00463540(unaff_EBP + -0x3c,unaff_EBP + -0x38);
          uVar6 = *(uint *)(unaff_EBP + -0x38);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x3c);
        }
LAB_00e83533:
        func_0x008ab812(uVar7,uVar6);
      }
LAB_00e8353c:
      func_0x00e88455();
      return;
    }
    iVar4 = iVar4 * 2;
  }
  *piVar2 = *(int *)(unaff_EBP + -0x44);
  iVar4 = unaff_EBP + -0x34;
  if (7 < *(uint *)(unaff_EBP + -0x20)) {
    iVar4 = *(int *)(unaff_EBP + -0x34);
  }
  iVar5 = unaff_EBP + -0x34;
  if (7 < *(uint *)(unaff_EBP + -0x20)) {
    iVar5 = *(int *)(unaff_EBP + -0x34);
  }
  func_0x00e79039(puVar1,iVar5 + 2,iVar4 + iVar3 * 2,*(undefined4 *)(unaff_EBP + 0xc),
                  *(undefined4 *)(unaff_EBP + 0x10));
  if (*(uint *)(unaff_EBP + -0x20) < 8) goto LAB_00e8353c;
  uVar7 = *(undefined4 *)(unaff_EBP + -0x34);
  uVar6 = *(uint *)(unaff_EBP + -0x20) * 2 + 2;
  *(uint *)(unaff_EBP + -0x3c) = uVar6;
  *(undefined4 *)(unaff_EBP + -0x38) = uVar7;
  if (0xfff < uVar6) {
    func_0x00463540(unaff_EBP + -0x38,unaff_EBP + -0x3c);
    uVar6 = *(uint *)(unaff_EBP + -0x3c);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x38);
  }
  goto LAB_00e83533;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual unsigned short const * __thiscall std::ctype<unsigned
// short>::do_scan_is(short,unsigned short const *,unsigned short const *)const 
//  protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_scan_is(short,wchar_t
// const *,wchar_t const *)const 
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined2 * __thiscall
do_scan_is(int *param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  code *pcVar1;
  char cVar2;
  
  if (param_3 != param_4) {
    do {
      pcVar1 = *(code **)(*param_1 + 0x10);
      _guard_check_icall(param_2,*param_3);
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  return param_3;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual unsigned short const * __thiscall std::ctype<unsigned
// short>::do_scan_not(short,unsigned short const *,unsigned short const *)const 
//  protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_scan_not(short,wchar_t
// const *,wchar_t const *)const 
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined2 * __thiscall
do_scan_not(int *param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  code *pcVar1;
  char cVar2;
  
  if (param_3 != param_4) {
    do {
      pcVar1 = *(code **)(*param_1 + 0x10);
      _guard_check_icall(param_2,*param_3);
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  return param_3;
}



void __thiscall FUN_00e835d0(int param_1,undefined4 param_2)

{
  func_0x00e7553c(param_2,param_1 + 8);
  return;
}



undefined2 * __thiscall FUN_00e835f0(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = func_0x00e7553c(*param_2,param_1 + 8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}



void __thiscall FUN_00e83620(int param_1,undefined4 param_2)

{
  func_0x00e7559c(param_2,param_1 + 8);
  return;
}



undefined2 * __thiscall FUN_00e83640(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = func_0x00e7559c(*param_2,param_1 + 8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}



void FUN_00e83670(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  int unaff_EBP;
  
  func_0x00e88464(4);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  uVar2 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc) >> 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  if (uVar2 != 0) {
    do {
      func_0x00e83a2d(uVar2,0);
      puVar4 = puVar1;
      if (7 < (uint)puVar1[5]) {
        puVar4 = (undefined4 *)*puVar1;
      }
      puVar3 = puVar1;
      if (7 < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      uVar2 = func_0x00e76b81(puVar3,(undefined2 *)((int)puVar4 + puVar1[4] * 2),
                              *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                              extraout_ECX + 8);
    } while (((uint)puVar1[4] < uVar2) && (uVar2 != 0));
  }
  func_0x00e83a2d(uVar2,0);
  func_0x00e88441();
  return;
}



void FUN_00e83700(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  int unaff_EBP;
  
  func_0x00e88464(4);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  uVar2 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc) >> 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  if (uVar2 != 0) {
    do {
      func_0x00588e50(uVar2,0);
      puVar4 = puVar1;
      if (7 < (uint)puVar1[5]) {
        puVar4 = (undefined4 *)*puVar1;
      }
      puVar3 = puVar1;
      if (7 < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      uVar2 = func_0x00e87529(puVar3,(undefined2 *)((int)puVar4 + puVar1[4] * 2),
                              *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                              extraout_ECX + 8);
    } while (((uint)puVar1[4] < uVar2) && (uVar2 != 0));
  }
  func_0x00588e50(uVar2,0);
  func_0x00e88441();
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual int __thiscall std::codecvt<unsigned short,char,struct
// _Mbstatet>::do_unshift(struct _Mbstatet &,char *,char *,char * &)const 
//  protected: virtual int __thiscall std::codecvt<wchar_t,char,struct _Mbstatet>::do_unshift(struct
// _Mbstatet &,char *,char *,char * &)const 
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall do_unshift(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  size_t _Size;
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *param_5 = param_3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar3 = func_0x00e72f9e(auStack_10,0,param_2,param_1 + 8);
  if (0 < iVar3) {
    _Size = iVar3 - 1;
    if (param_4 - *param_5 < (int)_Size) {
      *param_2 = uVar1;
      param_2[1] = uVar2;
    }
    else if (0 < (int)_Size) {
      memcpy((void *)*param_5,auStack_10,_Size);
      *param_5 = *param_5 + _Size;
    }
  }
  FUN_008ab370();
  return;
}



undefined2 __fastcall FUN_00e83820(int param_1)

{
  int iVar1;
  undefined8 uStack_10;
  undefined2 auStack_8 [2];
  
  uStack_10 = 0;
  iVar1 = func_0x00e73ee4(auStack_8,&stack0x00000004,1,&uStack_10,param_1 + 0x18);
  if (iVar1 < 0) {
    auStack_8[0] = 0xffff;
  }
  return auStack_8[0];
}



// Library Function - Multiple Matches With Same Base Name
//  protected: virtual char const * __thiscall std::ctype<unsigned short>::do_widen(char const
// *,char const *,unsigned short *)const 
//  protected: virtual char const * __thiscall std::ctype<wchar_t>::do_widen(char const *,char const
// *,wchar_t *)const 
// 
// Library: Visual Studio 2019 Release

undefined1 * do_widen(undefined1 *param_1,undefined1 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_1 != param_2) {
    do {
      uVar1 = func_0x00e7a3b9(*param_1);
      param_1 = param_1 + 1;
      *param_3 = uVar1;
      param_3 = param_3 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e842a0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Mpunct<char>::vftable;
  func_0x00e7ed5f();
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e842d0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::time_get<>::vftable;
  func_0x00e7eda7();
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



undefined4 __thiscall FUN_00e84300(undefined4 param_1,byte param_2)

{
  func_0x00e84284();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 __thiscall FUN_00e85fe0(int param_1,undefined4 param_2)

{
  func_0x00469d30(*(undefined4 *)(param_1 + 0x10),param_1);
  return param_2;
}



undefined4 __thiscall FUN_00e86000(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_00000014;
  
  func_0x00469da0(in_stack_00000014,param_1);
  return param_2;
}



void FUN_00e86020(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  int unaff_EBP;
  int iVar5;
  float10 fVar6;
  
  func_0x00e88497(0x3c);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = *(uint **)(unaff_EBP + 0x24);
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0x28);
  func_0x00e84789(unaff_EBP + -0x34,unaff_EBP + 0xc,unaff_EBP + 0x14,
                  *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                  unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar4 = func_0x0048bc90(unaff_EBP + 0x14);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    iVar5 = unaff_EBP + -0x34;
    if (0xf < *(uint *)(unaff_EBP + -0x20)) {
      iVar5 = *(int *)(unaff_EBP + -0x34);
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    fVar6 = (float10)func_0x0047d710(iVar5,unaff_EBP + -0x3c,unaff_EBP + -0x38);
    *(double *)(unaff_EBP + -0x48) = (double)fVar6;
    if ((*(int *)(unaff_EBP + -0x3c) != iVar5) && (*(int *)(unaff_EBP + -0x38) == 0)) {
      **(undefined8 **)(unaff_EBP + -0x40) = *(undefined8 *)(unaff_EBP + -0x48);
      goto LAB_00e860b0;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_00e860b0:
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar3;
  FUN_00469ba0();
  func_0x00e88455();
  return;
}



void FUN_00e860d0(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBP;
  uint uVar9;
  
  func_0x00e88497(0x30);
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  puVar2 = *(undefined4 **)(unaff_EBP + 0x28);
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + 8);
  func_0x00e84789(unaff_EBP + -0x34,unaff_EBP + 0xc,unaff_EBP + 0x14,
                  *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                  unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x24);
  uVar9 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar5 = func_0x0048bc90(unaff_EBP + 0x14);
  if (cVar5 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    uVar3 = *(uint *)(unaff_EBP + -0x38);
    func_0x004698c0(uVar3,0);
    pcVar6 = (char *)(unaff_EBP + -0x34);
    if (0xf < *(uint *)(unaff_EBP + -0x20)) {
      pcVar6 = *(char **)(unaff_EBP + -0x34);
    }
    if (*pcVar6 == '-') {
      puVar8 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar8 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)puVar8 = *(undefined1 *)(unaff_EBP + -0x12);
      uVar9 = 1;
    }
    for (; uVar9 < uVar3; uVar9 = uVar9 + 1) {
      iVar7 = unaff_EBP + -0x34;
      if (0xf < *(uint *)(unaff_EBP + -0x20)) {
        iVar7 = *(int *)(unaff_EBP + -0x34);
      }
      puVar8 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar8 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)((int)puVar8 + uVar9) =
           *(undefined1 *)(unaff_EBP + -0x4c + (int)*(char *)(iVar7 + uVar9));
    }
  }
  puVar2 = *(undefined4 **)(unaff_EBP + -0x3c);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = uVar4;
  FUN_00469ba0();
  func_0x00e88455();
  return;
}



void FUN_00e861a0(void)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  
  func_0x00e88464(0xc);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  iVar5 = *(int *)(unaff_EBP + 0x1c);
  func_0x00464280(*(undefined4 *)(iVar5 + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = func_0x0046b3b0(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  cVar3 = *(char *)(unaff_EBP + 0x28);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *puVar2 = 0;
  if (cVar3 < 'b') {
    if (cVar3 != 'a') {
      if (cVar3 < 'S') {
        if (cVar3 == 'R') {
          pcVar11 = "%H : %M";
        }
        else {
          if (cVar3 == 'A') goto LAB_00e8637a;
          if (cVar3 == 'B') goto LAB_00e86484;
          if (cVar3 == 'C') {
            uVar6 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,0,99,unaff_EBP + -0x10,
                                    unaff_EBP + -0x18,uVar4);
            uVar7 = *puVar2;
            *puVar2 = uVar7 | uVar6;
            if (((uVar7 | uVar6) & 2) != 0) goto LAB_00e86562;
            iVar5 = (*(int *)(unaff_EBP + -0x10) + -0x13) * 100;
            goto LAB_00e862df;
          }
          if (cVar3 != 'D') {
            if (cVar3 == 'H') {
              iVar5 = *(int *)(unaff_EBP + 0x24) + 8;
              uVar10 = 0x17;
            }
            else {
              if (cVar3 == 'I') {
                uVar6 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,unaff_EBP + -0x10,
                                        unaff_EBP + -0x18,uVar4);
                uVar7 = *puVar2;
                *puVar2 = uVar7 | uVar6;
                if (((uVar7 | uVar6) & 2) == 0) {
                  iVar5 = *(int *)(unaff_EBP + -0x10);
                  if (iVar5 == 0xc) {
                    iVar5 = 0;
                  }
                  *(int *)(*(int *)(unaff_EBP + 0x24) + 8) = iVar5;
                }
                goto LAB_00e86562;
              }
              if (cVar3 != 'M') goto LAB_00e864c6;
              iVar5 = *(int *)(unaff_EBP + 0x24) + 4;
              uVar10 = 0x3b;
            }
            goto LAB_00e8629b;
          }
          pcVar11 = "%m / %d / %y";
        }
        goto LAB_00e86462;
      }
      if (cVar3 == 'S') {
        iVar5 = *(int *)(unaff_EBP + 0x24);
        uVar10 = 0x3c;
LAB_00e8629b:
        uVar9 = 0;
        goto LAB_00e86446;
      }
      if (cVar3 != 'T') {
        if ((cVar3 == 'U') || (cVar3 == 'W')) {
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0x1c;
          uVar10 = 0x35;
          goto LAB_00e8629b;
        }
        if (cVar3 != 'X') {
          if (cVar3 != 'Y') goto LAB_00e864c6;
          uVar6 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,0,9999,unaff_EBP + -0x10,
                                  unaff_EBP + -0x18,uVar4);
          uVar7 = *puVar2;
          *puVar2 = uVar7 | uVar6;
          if (((uVar7 | uVar6) & 2) != 0) goto LAB_00e86562;
          iVar5 = *(int *)(unaff_EBP + -0x10) + -0x76c;
LAB_00e862df:
          *(int *)(*(int *)(unaff_EBP + 0x24) + 0x14) = iVar5;
          goto LAB_00e86562;
        }
      }
      pcVar11 = "%H : %M : %S";
      goto LAB_00e86462;
    }
LAB_00e8637a:
    puVar8 = (undefined4 *)
             func_0x00e838ed(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                             *(undefined4 *)(unaff_EBP + 0x18),iVar5,puVar2,
                             *(undefined4 *)(unaff_EBP + 0x24));
  }
  else {
    if (cVar3 < 'o') {
      if (cVar3 != 'n') {
        if (cVar3 == 'b') {
LAB_00e86484:
          puVar8 = (undefined4 *)
                   func_0x00e838b5(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),
                                   *(undefined4 *)(unaff_EBP + 0x10),
                                   *(undefined4 *)(unaff_EBP + 0x14),
                                   *(undefined4 *)(unaff_EBP + 0x18),iVar5,puVar2,
                                   *(undefined4 *)(unaff_EBP + 0x24));
          goto LAB_00e86397;
        }
        if (cVar3 == 'c') {
          pcVar11 = "%b %d %H : %M : %S %Y";
          goto LAB_00e86462;
        }
        if ((cVar3 == 'd') || (cVar3 == 'e')) {
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0xc;
          uVar10 = 0x1f;
        }
        else {
          if (cVar3 == 'h') goto LAB_00e86484;
          if (cVar3 != 'j') {
            if (cVar3 == 'm') {
              uVar6 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,unaff_EBP + -0x10,
                                      unaff_EBP + -0x18,uVar4);
              uVar7 = *puVar2;
              *puVar2 = uVar7 | uVar6;
              if (((uVar7 | uVar6) & 2) == 0) {
                *(int *)(*(int *)(unaff_EBP + 0x24) + 0x10) = *(int *)(unaff_EBP + -0x10) + -1;
              }
              goto LAB_00e86562;
            }
            goto LAB_00e864c6;
          }
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0x1c;
          uVar10 = 0x16e;
        }
        uVar9 = 1;
LAB_00e86446:
        uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,uVar9,uVar10,iVar5,
                                unaff_EBP + -0x18,uVar4);
        *puVar2 = *puVar2 | uVar7;
        goto LAB_00e86562;
      }
LAB_00e86522:
      pcVar11 = " ";
    }
    else {
      if (cVar3 == 'p') {
        iVar5 = func_0x0048b2a0(unaff_EBP + 0xc,unaff_EBP + 0x14,0,":AM:am:PM:pm",0);
        if (iVar5 < 0) {
          *puVar2 = *puVar2 | 2;
        }
        else if (1 < iVar5) {
          piVar1 = (int *)(*(int *)(unaff_EBP + 0x24) + 8);
          *piVar1 = *piVar1 + 0xc;
        }
        goto LAB_00e86562;
      }
      if (cVar3 == 'r') {
        pcVar11 = "%I : %M : %S %p";
      }
      else {
        if (cVar3 == 't') goto LAB_00e86522;
        if (cVar3 == 'w') {
          iVar5 = *(int *)(unaff_EBP + 0x24) + 0x18;
          uVar10 = 6;
          goto LAB_00e8629b;
        }
        if (cVar3 != 'x') {
          if (cVar3 == 'y') {
            uVar6 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,0,99,unaff_EBP + -0x10,
                                    unaff_EBP + -0x18,uVar4);
            uVar7 = *puVar2;
            *puVar2 = uVar7 | uVar6;
            if (((uVar7 | uVar6) & 2) != 0) goto LAB_00e86562;
            iVar5 = *(int *)(unaff_EBP + -0x10);
            if (iVar5 < 0x45) {
              iVar5 = iVar5 + 100;
            }
            goto LAB_00e862df;
          }
LAB_00e864c6:
          *puVar2 = 2;
          goto LAB_00e86562;
        }
        pcVar11 = "%d / %m / %y";
      }
    }
LAB_00e86462:
    puVar8 = (undefined4 *)
             func_0x00e84643(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                             *(undefined4 *)(unaff_EBP + 0x18),iVar5,puVar2,
                             *(undefined4 *)(unaff_EBP + 0x24),pcVar11);
  }
LAB_00e86397:
  uVar4 = puVar8[1];
  *(undefined4 *)(unaff_EBP + 0xc) = *puVar8;
  *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
LAB_00e86562:
  cVar3 = func_0x0048bc90(unaff_EBP + 0x14);
  if (cVar3 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  puVar8 = *(undefined4 **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar8 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar8[1] = uVar4;
  func_0x00e88441();
  return;
}



void FUN_00e86590(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  undefined4 uVar8;
  int unaff_EBP;
  int *piVar9;
  
  func_0x00e88464(0x18);
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar4 = (int *)func_0x0046b3b0(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  iVar5 = FUN_00835310();
  if (iVar5 == 0) {
    iVar5 = 2;
  }
  *(int *)(unaff_EBP + -0x10) = iVar5;
  cVar3 = func_0x0048bc90(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 == '\0') {
    uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    if ((char)uVar8 == '\0') {
      func_0x0048c000();
      uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    }
    if (((uint)(int)*(short *)(piVar4[3] + (uint)*(byte *)(unaff_EBP + 0x11) * 2) >> 2 & 1) == 0) {
      puVar6 = (undefined4 *)
               func_0x00e838b5(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),uVar8,
                               *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                               *(undefined4 *)(unaff_EBP + 0x1c),puVar1,
                               *(undefined4 *)(unaff_EBP + 0x24));
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
LAB_00e866b2:
      uVar8 = *puVar6;
      *(undefined4 *)(unaff_EBP + 0x10) = puVar6[1];
      *(undefined4 *)(unaff_EBP + 0xc) = uVar8;
    }
    else if (iVar5 == 2) {
      piVar9 = (int *)(*(int *)(unaff_EBP + 0x24) + 0x10);
      uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,piVar9,unaff_EBP + -0x18,piVar4
                             );
      *puVar1 = *puVar1 | uVar7;
      *piVar9 = *piVar9 + -1;
    }
    else {
      if (iVar5 != 1) {
        puVar6 = (undefined4 *)
                 func_0x00e83925(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),uVar8,
                                 *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18)
                                 ,*(undefined4 *)(unaff_EBP + 0x1c),puVar1,
                                 *(undefined4 *)(unaff_EBP + 0x24));
        goto LAB_00e866b2;
      }
      uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0x1f,
                              *(int *)(unaff_EBP + 0x24) + 0xc,unaff_EBP + -0x18,piVar4);
      *puVar1 = *puVar1 | uVar7;
    }
  }
  while (cVar3 = func_0x0048bc90(unaff_EBP + 0x14), cVar3 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x0048c000();
    }
    if ((*(byte *)(piVar4[3] + (uint)*(byte *)(unaff_EBP + 0x11) * 2) & 0x48) == 0) break;
    func_0x0048c060();
  }
  cVar3 = func_0x0048bc90(unaff_EBP + 0x14);
  if (cVar3 != '\0') goto LAB_00e86756;
  if (*(char *)(unaff_EBP + 0x10) == '\0') {
    func_0x0048c000();
  }
  pcVar2 = *(code **)(*piVar4 + 0x28);
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x11),0);
  cVar3 = (*pcVar2)();
  if (((cVar3 != ':') && (cVar3 != ',')) && (cVar3 != '/')) goto LAB_00e86756;
  do {
    func_0x0048c060();
LAB_00e86756:
    cVar3 = func_0x0048bc90(unaff_EBP + 0x14);
    if (cVar3 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x0048c000();
    }
  } while ((*(byte *)(piVar4[3] + (uint)*(byte *)(unaff_EBP + 0x11) * 2) & 0x48) != 0);
  cVar3 = func_0x0048bc90(unaff_EBP + 0x14);
  if (cVar3 == '\0') {
    uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    if ((char)uVar8 == '\0') {
      func_0x0048c000();
      uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    }
    iVar5 = *(int *)(unaff_EBP + -0x10);
    if (((uint)(int)*(short *)(piVar4[3] + (uint)*(byte *)(unaff_EBP + 0x11) * 2) >> 2 & 1) == 0) {
      if (iVar5 == 2) {
        *puVar1 = *puVar1 | 2;
      }
      else {
        puVar6 = (undefined4 *)
                 func_0x00e838b5(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),uVar8,
                                 *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18)
                                 ,*(undefined4 *)(unaff_EBP + 0x1c),puVar1,
                                 *(undefined4 *)(unaff_EBP + 0x24));
        uVar8 = puVar6[1];
        *(undefined4 *)(unaff_EBP + 0xc) = *puVar6;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar8;
        if (iVar5 == 4) {
          *(undefined4 *)(unaff_EBP + -0x10) = 3;
        }
      }
    }
    else if ((iVar5 == 1) || (iVar5 == 3)) {
      piVar9 = (int *)(*(int *)(unaff_EBP + 0x24) + 0x10);
      uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,piVar9,unaff_EBP + -0x18,piVar4
                             );
      *puVar1 = *puVar1 | uVar7;
      *piVar9 = *piVar9 + -1;
    }
    else {
      uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0x1f,
                              *(int *)(unaff_EBP + 0x24) + 0xc,unaff_EBP + -0x18,piVar4);
      *puVar1 = *puVar1 | uVar7;
    }
  }
  while (cVar3 = func_0x0048bc90(unaff_EBP + 0x14), cVar3 == '\0') {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x0048c000();
    }
    if ((*(byte *)(piVar4[3] + (uint)*(byte *)(unaff_EBP + 0x11) * 2) & 0x48) == 0) break;
    func_0x0048c060();
  }
  cVar3 = func_0x0048bc90(unaff_EBP + 0x14);
  if (cVar3 != '\0') goto LAB_00e868d2;
  if (*(char *)(unaff_EBP + 0x10) == '\0') {
    func_0x0048c000();
  }
  pcVar2 = *(code **)(*piVar4 + 0x28);
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x11),0);
  cVar3 = (*pcVar2)();
  if (((cVar3 != ':') && (cVar3 != ',')) && (cVar3 != '/')) goto LAB_00e868d2;
  do {
    func_0x0048c060();
LAB_00e868d2:
    cVar3 = func_0x0048bc90(unaff_EBP + 0x14);
    if (cVar3 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x0048c000();
    }
  } while ((*(byte *)(piVar4[3] + (uint)*(byte *)(unaff_EBP + 0x11) * 2) & 0x48) != 0);
  cVar3 = func_0x0048bc90(unaff_EBP + 0x14);
  if (cVar3 == '\0') {
    uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    if ((char)uVar8 == '\0') {
      func_0x0048c000();
      uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    }
    if (((uint)(int)*(short *)(piVar4[3] + (uint)*(byte *)(unaff_EBP + 0x11) * 2) >> 2 & 1) == 0) {
      if (*(int *)(unaff_EBP + -0x10) != 4) goto LAB_00e868f2;
      puVar6 = (undefined4 *)
               func_0x00e838b5(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc),uVar8,
                               *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                               *(undefined4 *)(unaff_EBP + 0x1c),puVar1,
                               *(undefined4 *)(unaff_EBP + 0x24));
    }
    else {
      if (*(int *)(unaff_EBP + -0x10) == 4) {
        piVar9 = (int *)(*(int *)(unaff_EBP + 0x24) + 0x10);
        uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0xc,piVar9,unaff_EBP + -0x18,
                                piVar4);
        *puVar1 = *puVar1 | uVar7;
        *piVar9 = *piVar9 + -1;
        goto LAB_00e869c2;
      }
      if (*(int *)(unaff_EBP + -0x10) == 3) {
        uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,1,0x1f,
                                *(int *)(unaff_EBP + 0x24) + 0xc,unaff_EBP + -0x18,piVar4);
        *puVar1 = *puVar1 | uVar7;
        goto LAB_00e869c2;
      }
      puVar6 = (undefined4 *)
               func_0x00e83925(unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + 0xc),uVar8,
                               *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                               *(undefined4 *)(unaff_EBP + 0x1c),puVar1,
                               *(undefined4 *)(unaff_EBP + 0x24));
    }
    uVar8 = *puVar6;
    *(undefined4 *)(unaff_EBP + 0x10) = puVar6[1];
    *(undefined4 *)(unaff_EBP + 0xc) = uVar8;
  }
  else {
LAB_00e868f2:
    *puVar1 = *puVar1 | 2;
  }
LAB_00e869c2:
  cVar3 = func_0x0048bc90(unaff_EBP + 0x14);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  puVar6 = *(undefined4 **)(unaff_EBP + 8);
  uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar6 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar6[1] = uVar8;
  func_0x00e88441();
  return;
}



void __thiscall FUN_00e869f0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = func_0x0048b2a0(&param_3,&stack0x00000010,0,*(undefined4 *)(param_1 + 0xc),0);
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x10) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



void FUN_00e86a40(void)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  int unaff_EBP;
  
  func_0x00e88464(8);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar6 = (int *)func_0x0046b3b0(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,0,0x17,*(int *)(unaff_EBP + 0x24) + 8,
                          unaff_EBP + -0x10,piVar6);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *puVar1 = *puVar1 | uVar7;
  if (*puVar1 == 0) {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x0048c000();
    }
    pcVar2 = *(code **)(*piVar6 + 0x28);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x11),0);
    cVar5 = (*pcVar2)();
    if (cVar5 != ':') goto LAB_00e86af1;
    func_0x0048c060();
    uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,0,0x3b,*(int *)(unaff_EBP + 0x24) + 4,
                            unaff_EBP + -0x10,piVar6);
    *puVar1 = *puVar1 | uVar7;
  }
  else {
LAB_00e86af1:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      func_0x0048c000();
    }
    pcVar2 = *(code **)(*piVar6 + 0x28);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x11),0);
    cVar5 = (*pcVar2)();
    if (cVar5 == ':') {
      func_0x0048c060();
      uVar7 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,0,0x3c,
                              *(undefined4 *)(unaff_EBP + 0x24),unaff_EBP + -0x10,piVar6);
      *puVar1 = *puVar1 | uVar7;
      goto LAB_00e86b4c;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00e86b4c:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = uVar4;
  func_0x00e88441();
  return;
}



void __thiscall FUN_00e86b70(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = func_0x0048b2a0(&param_3,&stack0x00000010,0,*(undefined4 *)(param_1 + 8),0);
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x18) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



void FUN_00e86bc0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  func_0x00e88464(0xc);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 0x30));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = func_0x0046b3b0(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar3 = func_0x00e83b71(unaff_EBP + 0xc,unaff_EBP + 0x14,0,9999,unaff_EBP + -0x10,
                          unaff_EBP + -0x14,uVar2);
  **(uint **)(unaff_EBP + 0x20) = **(uint **)(unaff_EBP + 0x20) | uVar3;
  if ((uVar3 & 2) == 0) {
    iVar4 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x14) < 3) {
      if (iVar4 < 0x45) {
        iVar4 = iVar4 + 100;
      }
      else if (99 < iVar4) goto LAB_00e86c49;
    }
    else {
      iVar4 = iVar4 + -0x76c;
    }
    *(int *)(*(int *)(unaff_EBP + 0x24) + 0x14) = iVar4;
  }
LAB_00e86c49:
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = uVar2;
  func_0x00e88441();
  return;
}



undefined4 __thiscall FUN_00e86c60(int param_1,undefined4 param_2)

{
  func_0x00469d30(*(undefined4 *)(param_1 + 0x18),param_1);
  return param_2;
}



undefined4 __thiscall FUN_00e86c80(int param_1,undefined4 param_2)

{
  func_0x00469d30(*(undefined4 *)(param_1 + 0x14),param_1);
  return param_2;
}



void FUN_00e86ca0(void)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  char *pcVar7;
  int unaff_EBP;
  uint uVar8;
  
  func_0x00e88497(0x40);
  *(undefined4 *)(unaff_EBP + -0x4c) = extraout_ECX;
  pcVar7 = *(char **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + 0x18);
  func_0x00464280(*(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x30));
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar3 = (int *)func_0x0046b3b0(unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  func_0x004642b0();
  pcVar1 = *(code **)(*piVar3 + 0x1c);
  _guard_check_icall("0123456789-","0123456789-",unaff_EBP + -0x1c);
  (*pcVar1)();
  uVar2 = *(uint *)(pcVar7 + 0x10);
  uVar6 = 0;
  *(undefined1 *)(unaff_EBP + -0x3c) = 0;
  if (uVar2 != 0) {
    pcVar4 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar4 = *(char **)pcVar7;
    }
    if (*pcVar4 == *(char *)(unaff_EBP + -0x12)) {
      *(undefined1 *)(unaff_EBP + -0x3c) = 1;
      uVar6 = 1;
      *(undefined4 *)(unaff_EBP + -0x38) = 1;
    }
  }
  uVar8 = uVar6;
  if (uVar6 < uVar2) {
    do {
      pcVar4 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar4 = *(char **)pcVar7;
      }
      uVar5 = func_0x00e83b58(unaff_EBP + -0x1c,pcVar4[uVar6]);
      uVar8 = uVar6;
    } while ((uVar5 < 10) && (uVar6 = uVar6 + 1, uVar8 = uVar6, uVar6 < uVar2));
    uVar6 = *(uint *)(unaff_EBP + -0x38);
  }
  if (0xf < *(uint *)(pcVar7 + 0x14)) {
    pcVar7 = *(char **)pcVar7;
  }
  func_0x00469d70(pcVar7 + uVar6,uVar8 - uVar6);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    func_0x00469a20(*(undefined4 *)(unaff_EBP + -0x1c));
  }
  func_0x00469da0(unaff_EBP + -0x34);
  func_0x00e8594d(*(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + 0xc),
                  *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                  *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + 0x1c),
                  *(undefined4 *)(unaff_EBP + -0x3c));
  FUN_00469ba0();
  func_0x00e88455();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e86f45)
// WARNING: Removing unreachable block (ram,0x00e86f5f)
// WARNING: Removing unreachable block (ram,0x00e86f62)
// WARNING: Removing unreachable block (ram,0x00e86f64)
// WARNING: Removing unreachable block (ram,0x00e86f67)

void FUN_00e86dd0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  int unaff_EBP;
  double dVar8;
  
  func_0x00e88497(0x68);
  *(undefined4 *)(unaff_EBP + -0x74) = extraout_ECX;
  dVar8 = *(double *)(unaff_EBP + 0x20);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x58) = puVar1;
  *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 0x18);
  *(undefined1 *)(unaff_EBP + -0x54) = 0;
  if (dVar8 < 0.0) {
    dVar8 = -dVar8;
    *(undefined1 *)(unaff_EBP + -0x54) = 1;
  }
  uVar4 = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  if (1e+35 <= dVar8) {
    do {
      if (4999 < uVar4) break;
      dVar8 = dVar8 / 10000000000.0;
      uVar4 = uVar4 + 10;
    } while (1e+35 <= dVar8);
    *(uint *)(unaff_EBP + -0x60) = uVar4;
  }
  iVar5 = sprintf_s((char *)(unaff_EBP + -0x38),0x28,"%.0Lf",dVar8);
  *(int *)(unaff_EBP + -0x5c) = iVar5;
  if (iVar5 < 0) {
    uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
    *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
    puVar1[1] = uVar7;
  }
  else {
    func_0x00464280();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar6 = (int *)func_0x0046b3b0(unaff_EBP + -0x68);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(unaff_EBP + -0x6c) = piVar6;
    func_0x004642b0();
    pcVar2 = *(code **)(*piVar6 + 0x20);
    _guard_check_icall(0x30);
    uVar3 = (*pcVar2)();
    *(undefined1 *)(unaff_EBP + -100) = uVar3;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    func_0x0046bba0(0,*(undefined4 *)(unaff_EBP + -0x5c));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar5 = unaff_EBP + -0x50;
    if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
      iVar5 = *(int *)(unaff_EBP + -0x50);
    }
    pcVar2 = *(code **)(**(int **)(unaff_EBP + -0x6c) + 0x1c);
    _guard_check_icall(unaff_EBP + -0x38,*(int *)(unaff_EBP + -0x5c) + unaff_EBP + -0x38,iVar5);
    (*pcVar2)();
    func_0x0046a730(*(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -100));
    func_0x00469da0(unaff_EBP + -0x50);
    func_0x00e8594d(*(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + 0xc),
                    *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                    *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + 0x1c),
                    *(undefined4 *)(unaff_EBP + -0x54));
    if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
      uVar7 = *(undefined4 *)(unaff_EBP + -0x50);
      uVar4 = *(uint *)(unaff_EBP + -0x3c) + 1;
      *(uint *)(unaff_EBP + -0x58) = uVar4;
      *(undefined4 *)(unaff_EBP + -0x54) = uVar7;
      if (0xfff < uVar4) {
        func_0x00463540(unaff_EBP + -0x54,unaff_EBP + -0x58);
        uVar4 = *(uint *)(unaff_EBP + -0x58);
        uVar7 = *(undefined4 *)(unaff_EBP + -0x54);
      }
      func_0x008ab812(uVar7,uVar4);
    }
  }
  func_0x00e88455();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e870a3)
// WARNING: Removing unreachable block (ram,0x00e870bd)
// WARNING: Removing unreachable block (ram,0x00e870c0)
// WARNING: Removing unreachable block (ram,0x00e870c2)
// WARNING: Removing unreachable block (ram,0x00e870c5)
// WARNING: Removing unreachable block (ram,0x00e87145)
// WARNING: Removing unreachable block (ram,0x00e8715f)
// WARNING: Removing unreachable block (ram,0x00e87162)
// WARNING: Removing unreachable block (ram,0x00e87164)
// WARNING: Removing unreachable block (ram,0x00e87167)

void FUN_00e86fc0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  int unaff_EBP;
  
  func_0x00e88497(0x34);
  *(undefined4 *)(unaff_EBP + -0x38) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + 0x14);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x18) = 0x782521;
  *(undefined1 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x24) == '\0') {
    *(undefined1 *)(unaff_EBP + -0x16) = *(undefined1 *)(unaff_EBP + 0x20);
  }
  else {
    *(char *)(unaff_EBP + -0x16) = *(char *)(unaff_EBP + 0x24);
    *(undefined1 *)(unaff_EBP + -0x15) = *(undefined1 *)(unaff_EBP + 0x20);
  }
  piVar2 = (int *)func_0x008aaf8a();
  iVar4 = 0x10;
  *(int *)(unaff_EBP + -0x40) = *piVar2;
  while( true ) {
    func_0x0046a730(iVar4,0);
    iVar3 = unaff_EBP + -0x30;
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      iVar3 = *(int *)(unaff_EBP + -0x30);
    }
    iVar3 = func_0x00e87d10(iVar3,*(undefined4 *)(unaff_EBP + -0x20),unaff_EBP + -0x18,
                            *(undefined4 *)(unaff_EBP + -0x34),
                            *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 8));
    if (iVar3 != 0) break;
    if (*piVar2 == 0x16) {
      func_0x00464710(*(uint *)(*(int *)(unaff_EBP + -0x3c) + 0xc) | 4,0);
      uVar6 = *(uint *)(unaff_EBP + -0x1c);
      uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
      *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
      puVar1[1] = uVar7;
      if (0xf < uVar6) {
        uVar7 = *(undefined4 *)(unaff_EBP + -0x30);
        uVar6 = uVar6 + 1;
        *(uint *)(unaff_EBP + -0x34) = uVar6;
        *(undefined4 *)(unaff_EBP + -0x38) = uVar7;
        if (0xfff < uVar6) {
          func_0x00463540(unaff_EBP + -0x38,unaff_EBP + -0x34);
          uVar6 = *(uint *)(unaff_EBP + -0x34);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x38);
        }
LAB_00e8719e:
        func_0x008ab812(uVar7,uVar6);
      }
LAB_00e871a7:
      func_0x00e88455();
      return;
    }
    iVar4 = iVar4 * 2;
  }
  *piVar2 = *(int *)(unaff_EBP + -0x40);
  iVar4 = unaff_EBP + -0x30;
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    iVar4 = *(int *)(unaff_EBP + -0x30);
  }
  iVar5 = unaff_EBP + -0x30;
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    iVar5 = *(int *)(unaff_EBP + -0x30);
  }
  func_0x00e83e10(puVar1,iVar5 + 1,iVar3 + iVar4,*(undefined4 *)(unaff_EBP + 0xc),
                  *(undefined4 *)(unaff_EBP + 0x10));
  if (*(uint *)(unaff_EBP + -0x1c) < 0x10) goto LAB_00e871a7;
  uVar7 = *(undefined4 *)(unaff_EBP + -0x30);
  uVar6 = *(uint *)(unaff_EBP + -0x1c) + 1;
  *(uint *)(unaff_EBP + -0x38) = uVar6;
  *(undefined4 *)(unaff_EBP + -0x34) = uVar7;
  if (0xfff < uVar6) {
    func_0x00463540(unaff_EBP + -0x34,unaff_EBP + -0x38);
    uVar6 = *(uint *)(unaff_EBP + -0x38);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x34);
  }
  goto LAB_00e8719e;
}



undefined4 * __thiscall FUN_00e87660(undefined4 *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = &PTR_FUN_0111be44;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  piVar1 = *(int **)(param_2 + 8);
  param_1[2] = piVar1;
  param_1[3] = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00e87750(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_FUN_0111be44;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  if ((HLOCAL)param_1[3] != (HLOCAL)0x0) {
    LocalFree((HLOCAL)param_1[3]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00e877c0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)param_1[2];
  uStack_8 = 0;
  *param_1 = &PTR_FUN_0111be44;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  if ((HLOCAL)param_1[3] != (HLOCAL)0x0) {
    LocalFree((HLOCAL)param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00e87850(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_14 [16];
  
  func_0x00e876d0(param_1,param_2,0);
  func_0x00e87d2e(auStack_14,&DAT_01288340);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



double __cdecl ldexp(double _X,int _Y)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e879e0. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = ldexp(_X,_Y);
  return dVar1;
}



int __cdecl strcmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87a60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strcmp(_Str1,_Str2);
  return iVar1;
}



double __cdecl pow(double _X,double _Y)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b00. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = pow(_X,_Y);
  return dVar1;
}



double __cdecl log(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b10. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = log(_X);
  return dVar1;
}



double __cdecl log10(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b20. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = log10(_X);
  return dVar1;
}



double __cdecl exp(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b30. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = exp(_X);
  return dVar1;
}



double __cdecl sin(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b40. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = sin(_X);
  return dVar1;
}



double __cdecl cos(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b50. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = cos(_X);
  return dVar1;
}



double __cdecl tan(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b60. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = tan(_X);
  return dVar1;
}



double __cdecl asin(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b70. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = asin(_X);
  return dVar1;
}



double __cdecl acos(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b80. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = acos(_X);
  return dVar1;
}



double __cdecl atan(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87b90. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = atan(_X);
  return dVar1;
}



double __cdecl sinh(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87ba0. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = sinh(_X);
  return dVar1;
}



double __cdecl cosh(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87bb0. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = cosh(_X);
  return dVar1;
}



double __cdecl tanh(double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87bc0. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = tanh(_X);
  return dVar1;
}



double __cdecl atan2(double _Y,double _X)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87bd0. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = atan2(_Y,_X);
  return dVar1;
}



size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87c30. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



int __cdecl _stricmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87c80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _stricmp(_Str1,_Str2);
  return iVar1;
}



wchar_t * __cdecl _wcsdup(wchar_t *_Str)

{
  wchar_t *pwVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87c92. Too many branches
                    // WARNING: Treating indirect jump as call
  pwVar1 = _wcsdup(_Str);
  return pwVar1;
}



undefined * Catch_All_00e8816a(void)

{
  return &DAT_00e88170;
}



BOOL MoveFileExW(LPCWSTR lpExistingFileName,LPCWSTR lpNewFileName,DWORD dwFlags)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e884e0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = MoveFileExW(lpExistingFileName,lpNewFileName,dwFlags);
  return BVar1;
}



BOOL SetFileAttributesW(LPCWSTR lpFileName,DWORD dwFileAttributes)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e884f0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = SetFileAttributesW(lpFileName,dwFileAttributes);
  return BVar1;
}



void FUN_00e88f90(undefined4 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    free(param_2);
  }
  return;
}



int FUN_00e92960(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if (param_2 != 2) {
    return 0;
  }
  if (param_4 == 3) {
    uVar2 = func_0x00c3ffc0();
    iVar3 = func_0x00c018e0(uVar2);
    if (iVar3 == 0) {
      iVar3 = func_0x00c3ffa0();
    }
    iVar3 = func_0x00e92fd0(uVar1,iVar3,1);
    if (iVar3 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\by_dir.c",99,"dir_ctrl");
      func_0x00bc5160(0xb,0x67,0);
    }
    return iVar3;
  }
  iVar3 = func_0x00e92fd0(uVar1,param_3,param_4);
  return iVar3;
}



undefined4 FUN_00e929e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00bbc4f0(0xc,"crypto\\x509\\by_dir.c",0x6e);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = func_0x00c1eac0();
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    uVar4 = 0x80003;
    uVar3 = 0x74;
  }
  else {
    piVar1[1] = 0;
    iVar2 = func_0x00bbb390();
    piVar1[2] = iVar2;
    if (iVar2 != 0) {
      *(int **)(param_1 + 0xc) = piVar1;
      return 1;
    }
    func_0x00c1e8a0(*piVar1);
    uVar4 = 0x8000f;
    uVar3 = 0x7b;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\by_dir.c",uVar3,"new_dir");
  func_0x00bc5160(0xb,uVar4,0);
  FUN_00bbc580(piVar1,"crypto\\x509\\by_dir.c",0x82);
  return 0;
}



void FUN_00e92a80(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  func_0x00bd1860(puVar1[1],FUN_00e93220);
  func_0x00c1e8a0(*puVar1);
  func_0x00bbb370(puVar1[2]);
  FUN_00bbc580(puVar1,"crypto\\x509\\by_dir.c",0xa3);
  return;
}



void FUN_00e92ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00e92ae0(param_1,param_2,param_3,param_4,0,0);
  return;
}



void FUN_00e92ae0(undefined4 param_1,int param_2,undefined4 param_3,undefined1 *param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined4 *param_9,
                 int param_10,undefined1 *param_11,undefined4 param_12)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int in_stack_00000044;
  int in_stack_00000060;
  uint in_stack_00000148;
  int in_stack_00000150;
  int in_stack_00000154;
  int in_stack_00000158;
  undefined4 *in_stack_0000015c;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000164;
  undefined4 uVar12;
  
  func_0x00e87f70();
  iVar5 = in_stack_00000158;
  iVar9 = in_stack_00000154;
  iVar4 = in_stack_00000150;
  in_stack_00000148 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar11 = 0;
  param_9 = in_stack_0000015c;
  param_7 = in_stack_00000160;
  param_6 = in_stack_00000164;
  param_4 = &DAT_0112e1b4;
  if (in_stack_00000158 == 0) {
    FUN_008ab370();
    return;
  }
  param_10 = in_stack_00000154;
  if (in_stack_00000154 == 1) {
    in_stack_00000060 = in_stack_00000158;
LAB_00e92b82:
    param_11 = &stack0x00000038;
    iVar11 = func_0x00c1eac0();
    if (iVar11 != 0) {
      iVar3 = *(int *)(iVar4 + 0xc);
      param_3 = func_0x00bde960(iVar5,param_7,param_6,&param_2);
      if (param_2 != 0) {
        param_2 = 0;
        iVar5 = func_0x00bd1830(*(undefined4 *)(iVar3 + 4));
        if (param_2 < iVar5) {
          do {
            puVar6 = (undefined4 *)func_0x00bd1a80(*(undefined4 *)(iVar3 + 4),param_2);
            pcVar10 = (char *)*puVar6;
            pcVar1 = pcVar10 + 1;
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            iVar5 = func_0x00c1e8f0(iVar11,pcVar10 + (0x11 - (int)pcVar1));
            if (iVar5 == 0) {
              FUN_00bc4f50();
              uVar12 = 0x10f;
              goto LAB_00e92ba4;
            }
            if ((iVar9 == 2) && (puVar6[2] != 0)) {
              param_12 = param_3;
              iVar5 = func_0x00bbb3c0(*(undefined4 *)(iVar3 + 8));
              if (iVar5 == 0) break;
              iVar5 = func_0x00bd1570(puVar6[2],&param_12);
              if (iVar5 < 0) {
                param_5 = 0;
                iVar5 = 0;
              }
              else {
                param_5 = func_0x00bd1a80(puVar6[2],iVar5);
                iVar5 = *(int *)(param_5 + 4);
              }
              func_0x00bbb440(*(undefined4 *)(iVar3 + 8));
            }
            else {
              iVar5 = 0;
              param_5 = 0;
            }
            func_0x00bbc9d0(*(undefined4 *)(iVar11 + 4),*(undefined4 *)(iVar11 + 8),"%s%c%08lx.%s%d"
                            ,*puVar6,0x2f,param_3,param_4,iVar5);
            iVar7 = func_0x00e87aa8(*(undefined4 *)(iVar11 + 4),&stack0x00000118);
            while (-1 < iVar7) {
              if (iVar9 == 1) {
                iVar7 = func_0x00e935a0(iVar4,*(undefined4 *)(iVar11 + 4),puVar6[1],param_7,param_6)
                ;
LAB_00e92d19:
                if (iVar7 == 0) break;
              }
              else if (iVar9 == 2) {
                iVar7 = func_0x00e93810(iVar4,*(undefined4 *)(iVar11 + 4),puVar6[1]);
                goto LAB_00e92d19;
              }
              iVar5 = iVar5 + 1;
              func_0x00bbc9d0(*(undefined4 *)(iVar11 + 4),*(undefined4 *)(iVar11 + 8),
                              "%s%c%08lx.%s%d",*puVar6,0x2f,param_3,param_4,iVar5);
              iVar7 = func_0x00e87aa8(*(undefined4 *)(iVar11 + 4),&stack0x00000118);
            }
            if (iVar5 < 1) {
              param_8 = (undefined4 *)0x0;
            }
            else {
              iVar7 = func_0x00bd9650(*(undefined4 *)(iVar4 + 0x10));
              if (iVar7 == 0) break;
              uVar12 = func_0x00bd1570(*(undefined4 *)(*(int *)(iVar4 + 0x10) + 4),&param_10);
              param_8 = (undefined4 *)
                        func_0x00bd1a80(*(undefined4 *)(*(int *)(iVar4 + 0x10) + 4),uVar12);
              func_0x00bd9770(*(undefined4 *)(iVar4 + 0x10));
            }
            if ((iVar9 == 2) && (0 < iVar5)) {
              iVar7 = func_0x00bbb470(*(undefined4 *)(iVar3 + 8));
              if (iVar7 == 0) break;
              iVar7 = param_5;
              if (param_5 == 0) {
                param_12 = param_3;
                uVar12 = func_0x00bd1570(puVar6[2],&param_12);
                iVar7 = func_0x00bd1a80(puVar6[2],uVar12);
                if (iVar7 == 0) {
                  puVar8 = (undefined4 *)FUN_00bbc4f0(8,"crypto\\x509\\by_dir.c",0x17a);
                  if (puVar8 == (undefined4 *)0x0) {
                    func_0x00bbb440(*(undefined4 *)(iVar3 + 8));
                  }
                  else {
                    *puVar8 = param_3;
                    puVar8[1] = iVar5;
                    iVar9 = func_0x00bd18c0(puVar6[2],puVar8);
                    if (iVar9 != 0) {
                      func_0x00bd1a20(puVar6[2]);
                      iVar9 = in_stack_00000154;
                      func_0x00bbb440(*(undefined4 *)(iVar3 + 8));
                      goto LAB_00e92e7f;
                    }
                    func_0x00bbb440(*(undefined4 *)(iVar3 + 8));
                    FUN_00bbc580(puVar8,"crypto\\x509\\by_dir.c",0x184);
                    FUN_00bc4f50();
                    func_0x00bc5050("crypto\\x509\\by_dir.c",0x185,"get_cert_by_subject_ex");
                    func_0x00bc5160(0xb,0x8000f,0);
                  }
                  break;
                }
              }
              if (*(int *)(iVar7 + 4) < iVar5) {
                *(int *)(iVar7 + 4) = iVar5;
              }
              func_0x00bbb440(*(undefined4 *)(iVar3 + 8));
            }
LAB_00e92e7f:
            if (param_8 != (undefined4 *)0x0) {
              *param_9 = *param_8;
              param_9[1] = param_8[1];
              func_0x00ba6670();
              break;
            }
            param_2 = param_2 + 1;
            iVar5 = func_0x00bd1830(*(undefined4 *)(iVar3 + 4));
          } while (param_2 < iVar5);
        }
      }
      goto LAB_00e92f57;
    }
    FUN_00bc4f50();
    uVar12 = 0xff;
LAB_00e92ba4:
    func_0x00bc5050("crypto\\x509\\by_dir.c",uVar12,"get_cert_by_subject_ex");
    uVar12 = 0x80007;
  }
  else {
    if (in_stack_00000154 == 2) {
      in_stack_00000044 = in_stack_00000158;
      param_4 = &DAT_01198360;
      goto LAB_00e92b82;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\by_dir.c",0xfa,"get_cert_by_subject_ex");
    uVar12 = 0x70;
  }
  func_0x00bc5160(0xb,uVar12,0);
LAB_00e92f57:
  iVar9 = func_0x00bd9650(*(undefined4 *)(iVar4 + 0x10));
  if (iVar9 != 0) {
    iVar9 = func_0x00bd1740(*(undefined4 *)(*(int *)(iVar4 + 0x10) + 4));
    if (iVar9 == 0) {
      func_0x00bd1a20(*(undefined4 *)(*(int *)(iVar4 + 0x10) + 4));
    }
    func_0x00bd9770(*(undefined4 *)(iVar4 + 0x10));
  }
  func_0x00c1e8a0(iVar11);
  FUN_008ab370();
  return;
}



void FUN_00e93220(undefined4 *param_1)

{
  FUN_00bbc580(*param_1,"crypto\\x509\\by_dir.c",0x97);
  func_0x00bd1860(param_1[2],FUN_00e93280);
  FUN_00bbc580(param_1,"crypto\\x509\\by_dir.c",0x99);
  return;
}



int FUN_00e93260(undefined4 *param_1,undefined4 *param_2)

{
  if (*(uint *)*param_2 < *(uint *)*param_1) {
    return 1;
  }
  return -(uint)(*(uint *)*param_1 < *(uint *)*param_2);
}



void FUN_00e93280(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\x509\\by_dir.c",0x88);
  return;
}



bool FUN_00e932a0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 1) {
    return false;
  }
  if (param_4 == 3) {
    uVar1 = func_0x00c3fff0();
    iVar2 = func_0x00c018e0(uVar1);
    if (iVar2 == 0) {
      iVar2 = func_0x00c3ffd0(1,0,0);
    }
    iVar2 = func_0x00e93420(param_1,iVar2);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\by_file.c",0x43,"by_file_ctrl_ex");
      func_0x00bc5160(0xb,0x68,0);
    }
    return iVar2 != 0;
  }
  if (param_4 == 1) {
    iVar2 = func_0x00e93420(param_1,param_3,1);
    return iVar2 != 0;
  }
  iVar2 = func_0x00e935a0(param_1,param_3,param_4,0,0);
  return iVar2 != 0;
}



bool FUN_00e93350(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 1) {
    return false;
  }
  if (param_4 == 3) {
    uVar1 = func_0x00c3fff0();
    iVar2 = func_0x00c018e0(uVar1);
    if (iVar2 == 0) {
      iVar2 = func_0x00c3ffd0(1,param_6,param_7);
    }
    iVar2 = func_0x00e93420(param_1,iVar2);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\by_file.c",0x43,"by_file_ctrl_ex");
      func_0x00bc5160(0xb,0x68,0);
    }
    return iVar2 != 0;
  }
  if (param_4 == 1) {
    iVar2 = func_0x00e93420(param_1,param_3,1);
    return iVar2 != 0;
  }
  iVar2 = func_0x00e935a0(param_1,param_3,param_4,param_6,param_7);
  return iVar2 != 0;
}



void FUN_00e939d0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bb6310(param_1);
  func_0x00bd1860(uVar1,FUN_00e93e70);
  return;
}



uint FUN_00e939f0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 3) {
    if (param_2 != 4) {
      return 0;
    }
    uVar1 = func_0x00e93d60(param_1,param_3,0,0,param_6,param_7);
    return uVar1;
  }
  if (param_3 == 0) {
    return 1;
  }
  iVar2 = func_0x00bb6310(param_1);
  iVar3 = func_0x00bbbc70(param_3,"crypto\\x509\\by_store.c",0x74);
  if (iVar3 == 0) {
    return 0;
  }
  if (iVar2 == 0) {
    iVar2 = func_0x00bd1790();
    func_0x00bd8c50(param_1,iVar2);
  }
  iVar2 = func_0x00bd18c0(iVar2,iVar3);
  return (uint)(0 < iVar2);
}



uint FUN_00e93a90(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 3) {
    if (param_2 != 4) {
      return 0;
    }
    uVar1 = func_0x00e93d60(param_1,param_3,0,0,0,0);
    return uVar1;
  }
  if (param_3 == 0) {
    return 1;
  }
  iVar2 = func_0x00bb6310(param_1);
  iVar3 = func_0x00bbbc70(param_3,"crypto\\x509\\by_store.c",0x74);
  if (iVar3 == 0) {
    return 0;
  }
  if (iVar2 == 0) {
    iVar2 = func_0x00bd1790();
    func_0x00bd8c50(param_1,iVar2);
  }
  iVar2 = func_0x00bd18c0(iVar2,iVar3);
  return (uint)(0 < iVar2);
}



int FUN_00e93b20(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  func_0x00e87f70();
  uVar1 = func_0x00e94590(param_4);
  uVar2 = func_0x00bb6310(param_2);
  iVar5 = 0;
  iVar6 = 0;
  iVar3 = func_0x00bd1830(uVar2);
  if (0 < iVar3) {
    do {
      uVar4 = func_0x00bd1a80(uVar2,iVar6,uVar1,1,param_6,param_7);
      iVar5 = func_0x00e93d60(param_2,uVar4);
      if (iVar5 != 0) break;
      iVar6 = iVar6 + 1;
      iVar3 = func_0x00bd1830(uVar2);
    } while (iVar6 < iVar3);
  }
  uVar2 = func_0x00baf190(param_2);
  uVar2 = func_0x00bb6b70(uVar2);
  iVar3 = 0;
  func_0x00e945c0(uVar1);
  if (iVar5 != 0) {
    iVar3 = func_0x00bd8cb0(uVar2,param_3,param_4);
  }
  if (iVar3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    iVar5 = func_0x00bd8ce0(param_5,*(undefined4 *)(iVar3 + 4));
    if (iVar5 != 0) {
      FUN_00bde1d0(*(undefined4 *)(iVar3 + 4));
      return iVar5;
    }
  }
  else {
    if (param_3 != 2) {
      return 0;
    }
    iVar5 = func_0x00bd8d40(param_5,*(undefined4 *)(iVar3 + 4));
    if (iVar5 != 0) {
      FUN_00bdb8e0(*(undefined4 *)(iVar3 + 4));
      return iVar5;
    }
  }
  return iVar5;
}



int FUN_00e93c40(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  func_0x00e87f70();
  uVar1 = func_0x00e94590(param_4);
  uVar2 = func_0x00bb6310(param_2);
  iVar5 = 0;
  iVar6 = 0;
  iVar3 = func_0x00bd1830(uVar2);
  if (0 < iVar3) {
    do {
      uVar4 = func_0x00bd1a80(uVar2,iVar6,uVar1,1,0,0);
      iVar5 = func_0x00e93d60(param_2,uVar4);
      if (iVar5 != 0) break;
      iVar6 = iVar6 + 1;
      iVar3 = func_0x00bd1830(uVar2);
    } while (iVar6 < iVar3);
  }
  uVar2 = func_0x00baf190(param_2);
  uVar2 = func_0x00bb6b70(uVar2);
  iVar3 = 0;
  func_0x00e945c0(uVar1);
  if (iVar5 != 0) {
    iVar3 = func_0x00bd8cb0(uVar2,param_3,param_4);
  }
  if (iVar3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    iVar5 = func_0x00bd8ce0(param_5,*(undefined4 *)(iVar3 + 4));
    if (iVar5 != 0) {
      FUN_00bde1d0(*(undefined4 *)(iVar3 + 4));
      return iVar5;
    }
  }
  else {
    if (param_3 != 2) {
      return 0;
    }
    iVar5 = func_0x00bd8d40(param_5,*(undefined4 *)(iVar3 + 4));
    if (iVar5 != 0) {
      FUN_00bdb8e0(*(undefined4 *)(iVar3 + 4));
      return iVar5;
    }
  }
  return iVar5;
}



void FUN_00e93e70(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\x509\\by_store.c",99);
  return;
}



void FUN_00e94240(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    switch(*param_1) {
    case 1:
      FUN_00bbc580(param_1[1],"crypto\\store\\store_lib.c",0x33c);
      FUN_00bbc580(param_1[2],"crypto\\store\\store_lib.c",0x33d);
      break;
    case 2:
    case 3:
    case 4:
      func_0x00bd5d50(param_1[1]);
      break;
    case 5:
      FUN_00bde1d0(param_1[1]);
      break;
    case 6:
      FUN_00bdb8e0(param_1[1]);
    }
    FUN_00bbc580(param_1,"crypto\\store\\store_lib.c",0x34f);
  }
  return;
}



undefined4 * FUN_00e94420(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0xc,"crypto\\store\\store_lib.c",0x261);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\store\\store_lib.c",0x28a,"OSSL_STORE_INFO_new_PARAMS");
    func_0x00bc5160(0x2c,0x8002c,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 2;
  puVar1[1] = param_1;
  return puVar1;
}



undefined4 * FUN_00e94480(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0xc,"crypto\\store\\store_lib.c",0x261);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\store\\store_lib.c",0x29c,"OSSL_STORE_INFO_new_PKEY");
    func_0x00bc5160(0x2c,0x8002c,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 4;
  puVar1[1] = param_1;
  return puVar1;
}



undefined4 * FUN_00e944e0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0xc,"crypto\\store\\store_lib.c",0x261);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\store\\store_lib.c",0x293,"OSSL_STORE_INFO_new_PUBKEY");
    func_0x00bc5160(0x2c,0x8002c,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 3;
  puVar1[1] = param_1;
  return puVar1;
}



int FUN_00e95030(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (param_3 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x4ed,"dgram_pair_write");
    func_0x00bc5160(0x20,0x7d,0);
    return -1;
  }
  iVar2 = func_0x00bbb470(*(undefined4 *)(iVar1 + 0x24));
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x4f2,"dgram_pair_write");
    func_0x00bc5160(0x20,0xc0110,0);
    return -1;
  }
  iVar2 = func_0x00e96340(param_1,param_2,param_3,0,0,0);
  if (iVar2 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x4f8,"dgram_pair_write");
    func_0x00bc5160(0x20,-iVar2,0);
    iVar2 = -1;
  }
  func_0x00bbb440(*(undefined4 *)(iVar1 + 0x24));
  return iVar2;
}



int FUN_00e95110(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_3 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x3e6,"dgram_pair_read");
    func_0x00bc5160(0x20,0x7d,0);
    return -1;
  }
  if (*piVar1 != 0) {
    piVar2 = *(int **)(*piVar1 + 0x28);
    uVar5 = (uint)piVar2[10] >> 2 & 1;
    piVar6 = piVar2;
    piVar3 = piVar1;
    if (uVar5 != 0) {
      piVar6 = piVar1;
      piVar3 = piVar2;
    }
    if ((((uVar5 != ((uint)piVar1[10] >> 2 & 1)) && (piVar2 != piVar1)) && (piVar3 != piVar6)) &&
       (iVar4 = func_0x00bbb470(piVar3[9]), iVar4 != 0)) {
      iVar4 = func_0x00bbb470(piVar6[9]);
      if (iVar4 != 0) {
        iVar4 = func_0x00e96060(param_1,param_2,param_3,0,0,0);
        if (iVar4 < 0) {
          if (iVar4 != -0x70) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x3fe,"dgram_pair_read");
            func_0x00bc5160(0x20,-iVar4,0);
          }
          iVar4 = -1;
        }
        func_0x00bbb440(piVar2[9]);
        func_0x00bbb440(piVar1[9]);
        return iVar4;
      }
      func_0x00bbb440(piVar3[9]);
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x3f7,"dgram_pair_read");
    func_0x00bc5160(0x20,0xc0110,0);
    return -1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x3eb,"dgram_pair_read");
  func_0x00bc5160(0x20,0x7c,0);
  return -1;
}



int FUN_00e95280(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (param_3 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x44c,"dgram_mem_read");
    func_0x00bc5160(0x20,0x7d,0);
    return -1;
  }
  iVar2 = func_0x00bbb470(*(undefined4 *)(iVar1 + 0x24));
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x451,"dgram_mem_read");
    func_0x00bc5160(0x20,0xc0110,0);
    return -1;
  }
  iVar2 = func_0x00e96060(param_1,param_2,param_3,0,0,0);
  if (iVar2 < 0) {
    if (iVar2 != -0x70) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x458,"dgram_mem_read");
      func_0x00bc5160(0x20,-iVar2,0);
    }
    iVar2 = -1;
  }
  func_0x00bbb440(*(undefined4 *)(iVar1 + 0x24));
  return iVar2;
}



int FUN_00e95360(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int in_stack_00000044;
  undefined4 in_stack_00000048;
  uint in_stack_0000004c;
  uint *in_stack_00000050;
  
  if (param_2 == 0x55) {
    iVar2 = **(int **)(param_1 + 0x28);
    if (iVar2 == 0) {
      return iVar2;
    }
    return *(int *)(*(int *)(iVar2 + 0x28) + 0x20);
  }
  if (param_2 == 0x8a) {
    iVar2 = func_0x00e95e40(param_1,param_4);
    return iVar2;
  }
  if (param_2 == 0x8b) {
    func_0x00e95d70(param_1);
    return 1;
  }
  func_0x00e87f70();
  piVar5 = *(int **)(in_stack_00000044 + 0x28);
  if (piVar5 == (int *)0x0) {
    iVar2 = FUN_008ab370();
    return iVar2;
  }
  switch(in_stack_00000048) {
  case 1:
    piVar5[3] = 0;
    piVar5[5] = 0;
    piVar5[4] = 0;
    iVar2 = FUN_008ab370();
    return iVar2;
  case 2:
    if (*(int *)(in_stack_00000044 + 0x14) == 0) goto LAB_00e95447;
    if (*piVar5 != 0) {
      iVar2 = FUN_008ab370();
      return iVar2;
    }
    break;
  case 10:
    if (*(int *)(in_stack_00000044 + 0x14) != 0) {
      if (*piVar5 != 0) {
        piVar5 = *(int **)(*piVar5 + 0x28);
      }
      iVar2 = func_0x00bbb470(piVar5[9]);
      if (iVar2 != 0) {
        iVar2 = piVar5[5];
        iVar1 = piVar5[3];
        iVar3 = func_0x00e96290(piVar5,&stack0x00000000,0x3c);
        piVar5[5] = iVar2;
        piVar5[3] = iVar1;
        func_0x00bbb440(piVar5[9]);
        if ((iVar3 != 0) && (iVar3 != 0x3c)) {
          iVar2 = FUN_008ab370();
          return iVar2;
        }
        iVar2 = FUN_008ab370();
        return iVar2;
      }
    }
    break;
  case 0xb:
    goto LAB_00e95447;
  case 0x29:
    iVar2 = FUN_008ab370();
    return iVar2;
  case 0x2a:
    piVar5[7] = in_stack_0000004c;
    if (*piVar5 != 0) {
      *(uint *)(*(int *)(*piVar5 + 0x28) + 0x1c) = in_stack_0000004c;
      iVar2 = FUN_008ab370();
      return iVar2;
    }
    goto LAB_00e95447;
  case 0x52:
    func_0x00e95e10(in_stack_00000044);
    iVar2 = FUN_008ab370();
    return iVar2;
  case 0x53:
    *in_stack_00000050 = (uint)piVar5[10] >> 1 & 1;
    iVar2 = FUN_008ab370();
    return iVar2;
  case 0x54:
    if (*(int *)(in_stack_00000044 + 0x14) != 0) {
      piVar4 = piVar5;
      if (*piVar5 != 0) {
        piVar4 = *(int **)(*piVar5 + 0x28);
      }
      if ((~piVar4[8] & 9U) == 0) {
        piVar5[10] = -(uint)(in_stack_0000004c != 0) & 2 | piVar5[10] & 0xfffffffdU;
        iVar2 = FUN_008ab370();
        return iVar2;
      }
    }
    break;
  case 0x55:
  case 0x56:
    iVar2 = FUN_008ab370();
    return iVar2;
  case 0x57:
    piVar5[8] = in_stack_0000004c;
    iVar2 = FUN_008ab370();
    return iVar2;
  case 0x58:
    iVar2 = FUN_008ab370();
    return iVar2;
  case 0x59:
    piVar5[10] = (uint)(0 < (int)in_stack_0000004c) | piVar5[10] & 0xfffffffeU;
    iVar2 = FUN_008ab370();
    return iVar2;
  case 0x88:
    if (*piVar5 == 0) {
      uVar6 = 0x400;
      if (0x3ff < in_stack_0000004c) {
        uVar6 = in_stack_0000004c;
      }
      if ((piVar5[1] == 0) || (iVar2 = func_0x00e96760(piVar5 + 1,uVar6), iVar2 != 0)) {
        piVar5[10] = piVar5[10] & 0xfffffff7;
        piVar5[6] = uVar6;
        iVar2 = FUN_008ab370();
        return iVar2;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x1cd,"dgram_pair_ctrl_set_write_buf_size");
      func_0x00bc5160(0x20,0x7b,0);
    }
    break;
  case 0x89:
    iVar2 = FUN_008ab370();
    return iVar2;
  case 0x8c:
    iVar2 = func_0x00bbb3c0(piVar5[9]);
    if (iVar2 != 0) {
      func_0x00bbb440(piVar5[9]);
      iVar2 = FUN_008ab370();
      return iVar2;
    }
  }
LAB_00e95447:
  iVar2 = FUN_008ab370();
  return iVar2;
}



void FUN_00e953c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int in_stack_00000044;
  undefined4 in_stack_00000048;
  uint in_stack_0000004c;
  uint *in_stack_00000050;
  
  func_0x00e87f70();
  piVar5 = *(int **)(in_stack_00000044 + 0x28);
  if (piVar5 == (int *)0x0) {
    FUN_008ab370();
    return;
  }
  switch(in_stack_00000048) {
  case 1:
    piVar5[3] = 0;
    piVar5[5] = 0;
    piVar5[4] = 0;
    FUN_008ab370();
    return;
  case 2:
    if (*(int *)(in_stack_00000044 + 0x14) == 0) goto LAB_00e95447;
    if (*piVar5 != 0) {
      FUN_008ab370();
      return;
    }
    break;
  case 10:
    if (*(int *)(in_stack_00000044 + 0x14) != 0) {
      if (*piVar5 != 0) {
        piVar5 = *(int **)(*piVar5 + 0x28);
      }
      iVar2 = func_0x00bbb470(piVar5[9]);
      if (iVar2 != 0) {
        iVar2 = piVar5[5];
        iVar1 = piVar5[3];
        iVar3 = func_0x00e96290(piVar5,&stack0x00000000,0x3c);
        piVar5[5] = iVar2;
        piVar5[3] = iVar1;
        func_0x00bbb440(piVar5[9]);
        if ((iVar3 != 0) && (iVar3 != 0x3c)) {
          FUN_008ab370();
          return;
        }
        FUN_008ab370();
        return;
      }
    }
    break;
  case 0xb:
    goto LAB_00e95447;
  case 0x29:
    FUN_008ab370();
    return;
  case 0x2a:
    piVar5[7] = in_stack_0000004c;
    if (*piVar5 != 0) {
      *(uint *)(*(int *)(*piVar5 + 0x28) + 0x1c) = in_stack_0000004c;
      FUN_008ab370();
      return;
    }
    goto LAB_00e95447;
  case 0x52:
    func_0x00e95e10(in_stack_00000044);
    FUN_008ab370();
    return;
  case 0x53:
    *in_stack_00000050 = (uint)piVar5[10] >> 1 & 1;
    FUN_008ab370();
    return;
  case 0x54:
    if (*(int *)(in_stack_00000044 + 0x14) != 0) {
      piVar4 = piVar5;
      if (*piVar5 != 0) {
        piVar4 = *(int **)(*piVar5 + 0x28);
      }
      if ((~piVar4[8] & 9U) == 0) {
        piVar5[10] = -(uint)(in_stack_0000004c != 0) & 2 | piVar5[10] & 0xfffffffdU;
        FUN_008ab370();
        return;
      }
    }
    break;
  case 0x55:
  case 0x56:
    FUN_008ab370();
    return;
  case 0x57:
    piVar5[8] = in_stack_0000004c;
    FUN_008ab370();
    return;
  case 0x58:
    FUN_008ab370();
    return;
  case 0x59:
    piVar5[10] = (uint)(0 < (int)in_stack_0000004c) | piVar5[10] & 0xfffffffeU;
    FUN_008ab370();
    return;
  case 0x88:
    if (*piVar5 == 0) {
      uVar6 = 0x400;
      if (0x3ff < in_stack_0000004c) {
        uVar6 = in_stack_0000004c;
      }
      if ((piVar5[1] == 0) || (iVar2 = func_0x00e96760(piVar5 + 1,uVar6), iVar2 != 0)) {
        piVar5[10] = piVar5[10] & 0xfffffff7;
        piVar5[6] = uVar6;
        FUN_008ab370();
        return;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x1cd,"dgram_pair_ctrl_set_write_buf_size");
      func_0x00bc5160(0x20,0x7b,0);
    }
    break;
  case 0x89:
    FUN_008ab370();
    return;
  case 0x8c:
    iVar2 = func_0x00bbb3c0(piVar5[9]);
    if (iVar2 != 0) {
      func_0x00bbb440(piVar5[9]);
      FUN_008ab370();
      return;
    }
  }
LAB_00e95447:
  FUN_008ab370();
  return;
}



undefined4 FUN_00e95800(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00bbc830(0x2c,"crypto\\bio\\bss_dgram_pair.c",0x115);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x5c0;
    *(undefined4 *)(iVar1 + 0x18) = 0x35dc;
    iVar2 = func_0x00bbb390();
    *(int *)(iVar1 + 0x24) = iVar2;
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x28) = iVar1;
      return 1;
    }
    FUN_00bbc580(iVar1,"crypto\\bio\\bss_dgram_pair.c",0x120);
  }
  return 0;
}



undefined4 FUN_00e95860(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00bbc830(0x2c,"crypto\\bio\\bss_dgram_pair.c",0x115);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x5c0;
    *(undefined4 *)(iVar2 + 0x18) = 0x35dc;
    iVar3 = func_0x00bbb390();
    *(int *)(iVar2 + 0x24) = iVar3;
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x28) = iVar2;
      uVar1 = *(undefined4 *)(iVar2 + 0x18);
      iVar3 = FUN_00bbc4f0(uVar1,"crypto\\bio\\bss_dgram_pair.c",0x25);
      *(int *)(iVar2 + 4) = iVar3;
      if (iVar3 != 0) {
        *(undefined4 *)(iVar2 + 8) = uVar1;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 8;
        *(undefined4 *)(param_1 + 0x14) = 1;
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x132,"dgram_mem_init");
      func_0x00bc5160(0x20,0x80020,0);
      return 0;
    }
    FUN_00bbc580(iVar2,"crypto\\bio\\bss_dgram_pair.c",0x120);
  }
  return 0;
}



undefined4 FUN_00e95930(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x28), iVar1 != 0)) {
    func_0x00e95d70(param_1);
    func_0x00bbb370(*(undefined4 *)(iVar1 + 0x24));
    FUN_00bbc580(iVar1,"crypto\\bio\\bss_dgram_pair.c",0x14b);
    return 1;
  }
  return 0;
}



void FUN_00e95970(void)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  int in_stack_0000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  uint in_stack_00000058;
  int in_stack_00000060;
  int in_stack_00000064;
  int in_stack_00000068;
  uint in_stack_0000006c;
  uint *in_stack_00000078;
  
  func_0x00e87f70();
  puVar10 = in_stack_00000078;
  uVar9 = in_stack_0000006c;
  iVar8 = in_stack_00000068;
  iVar16 = in_stack_00000064;
  iVar7 = in_stack_00000060;
  in_stack_00000058 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar1 = *(int *)(in_stack_00000060 + 0x28);
  if (in_stack_0000006c == 0) {
    *in_stack_00000078 = 0;
    FUN_008ab370();
    return;
  }
  iVar11 = func_0x00bbb470(*(undefined4 *)(iVar1 + 0x24));
  if (iVar11 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x512,"dgram_pair_sendmmsg");
    func_0x00bc5160(0x20,0xc0110,0);
    *puVar10 = 0;
    FUN_008ab370();
    return;
  }
  uVar18 = 0;
  if (uVar9 != 0) {
    puVar17 = (undefined4 *)(iVar16 + 0xc);
    do {
      iVar16 = puVar17[-3];
      puVar2 = (undefined8 *)*puVar17;
      iVar11 = puVar17[-2];
      piVar3 = *(int **)(iVar7 + 0x28);
      puVar4 = (undefined4 *)puVar17[-1];
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
      in_stack_00000048 = 0;
      in_stack_0000004c = 0;
      in_stack_00000050 = 0;
      in_stack_00000054 = 0;
      if (*(int *)(iVar7 + 0x14) == 0) {
        iVar11 = -0x78;
LAB_00e95ba3:
        *puVar10 = uVar18;
        if (uVar18 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x520,"dgram_pair_sendmmsg");
          func_0x00bc5160(0x20,-iVar11,0);
        }
        goto LAB_00e95be3;
      }
      if ((piVar3 == (int *)0x0) || (piVar3[1] == 0)) {
        iVar11 = -0x68;
        goto LAB_00e95ba3;
      }
      if ((iVar11 != 0) && (iVar16 == 0)) {
        iVar11 = -0x7d;
        goto LAB_00e95ba3;
      }
      if ((puVar2 != (undefined8 *)0x0) && ((*(byte *)(piVar3 + 10) & 2) == 0)) {
        iVar11 = -0x6f;
        goto LAB_00e95ba3;
      }
      piVar12 = piVar3;
      if (*piVar3 != 0) {
        piVar12 = *(int **)(*piVar3 + 0x28);
      }
      if ((puVar4 != (undefined4 *)0x0) && ((*(byte *)(piVar12 + 8) & 2) == 0)) {
        iVar11 = -0x97;
        goto LAB_00e95ba3;
      }
      puVar13 = (undefined4 *)&DAT_0111cb28;
      if (puVar4 != (undefined4 *)0x0) {
        puVar13 = puVar4;
      }
      in_stack_00000040 = *(undefined8 *)(puVar13 + 1);
      in_stack_00000048 = puVar13[3];
      in_stack_00000054 = puVar13[6];
      puVar14 = (undefined8 *)&DAT_0111cb28;
      if (puVar2 != (undefined8 *)0x0) {
        puVar14 = puVar2;
      }
      in_stack_0000004c = (undefined4)*(undefined8 *)(puVar13 + 4);
      in_stack_00000050 = (undefined4)((ulonglong)*(undefined8 *)(puVar13 + 4) >> 0x20);
      in_stack_00000020 = *puVar14;
      in_stack_00000028 = puVar14[1];
      in_stack_00000030 = puVar14[2];
      in_stack_00000038 = CONCAT44(*puVar13,*(undefined4 *)(puVar14 + 3));
      iVar5 = piVar3[4];
      iVar6 = piVar3[3];
      in_stack_0000001c = iVar11;
      iVar15 = func_0x00e96550(piVar3,&stack0x0000001c,0x3c);
      if ((iVar15 != 0x3c) || (iVar16 = func_0x00e96550(piVar3,iVar16,iVar11), iVar16 != iVar11)) {
        iVar11 = -0x70;
        piVar3[4] = iVar5;
        piVar3[3] = iVar6;
        goto LAB_00e95ba3;
      }
      if (iVar11 < 0) goto LAB_00e95ba3;
      puVar17[1] = 0;
      uVar18 = uVar18 + 1;
      puVar17[2] = 0;
      puVar17 = (undefined4 *)((int)puVar17 + iVar8);
    } while (uVar18 < in_stack_0000006c);
  }
  *puVar10 = uVar18;
LAB_00e95be3:
  func_0x00bbb440(*(undefined4 *)(iVar1 + 0x24));
  FUN_008ab370();
  return;
}



undefined4
FUN_00e95c10(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
            undefined4 param_7,uint *param_8)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  piVar1 = *(int **)(param_2 + 0x28);
  if (param_5 == 0) {
    *param_8 = 0;
    return 1;
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x41a,"dgram_pair_recvmmsg");
    uVar5 = 0x7c;
  }
  else {
    if (*piVar1 != 0) {
      piVar1 = *(int **)(*piVar1 + 0x28);
    }
    iVar2 = func_0x00bbb470(piVar1[9]);
    if (iVar2 != 0) {
      uVar4 = 0;
      if (param_5 != 0) {
        piVar3 = (int *)(param_3 + 4);
        do {
          iVar2 = func_0x00e96060(param_2,piVar3[-1],*piVar3,piVar3[2],piVar3[1],1);
          if (iVar2 < 0) {
            *param_8 = uVar4;
            if (uVar4 != 0) goto LAB_00e95d05;
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x433,"dgram_pair_recvmmsg");
            func_0x00bc5160(0x20,-iVar2,0);
            uVar5 = 0;
            goto LAB_00e95d0a;
          }
          *piVar3 = iVar2;
          uVar4 = uVar4 + 1;
          piVar3[3] = 0;
          piVar3[4] = 0;
          piVar3 = (int *)((int)piVar3 + param_4);
        } while (uVar4 < param_5);
      }
      *param_8 = uVar4;
LAB_00e95d05:
      uVar5 = 1;
LAB_00e95d0a:
      func_0x00bbb440(piVar1[9]);
      return uVar5;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram_pair.c",0x425,"dgram_pair_recvmmsg");
    uVar5 = 0xc0110;
  }
  func_0x00bc5160(0x20,uVar5,0);
  *param_8 = 0;
  return 0;
}



void FUN_00e97310(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_00bde1d0(*param_1);
    FUN_00bdb8e0(param_1[1]);
    func_0x00e98690(param_1[2]);
    FUN_00bbc580(param_1[9],"crypto\\asn1\\x_info.c",0x23);
    FUN_00bbc580(param_1,"crypto\\asn1\\x_info.c",0x24);
  }
  return;
}



bool FUN_00e97950(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                 int *param_9)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  func_0x00e87f70();
  piVar2 = param_9;
  iVar8 = param_9[1];
  uVar3 = func_0x00c044f0(*(undefined4 *)(iVar8 + 4));
  uVar4 = func_0x00bc7fa0(uVar3);
  uVar1 = param_8;
  param_9 = *(int **)(iVar8 + 0x18);
  param_3 = 0;
  param_4 = 0;
  param_5 = 0;
  param_6 = 0;
  param_2 = 0;
  iVar5 = func_0x00bc09d0(param_8,&DAT_0113c5f4);
  if ((iVar5 != 0) && (iVar5 = func_0x00bbfcd0(iVar5,&param_2), iVar5 == 0)) {
    return false;
  }
  iVar5 = func_0x00bc09d0(uVar1,"data-type");
  if ((iVar5 != 0) && (iVar5 = func_0x00bc08d0(iVar5,&param_3), iVar5 == 0)) {
    return false;
  }
  iVar5 = func_0x00bc09d0(uVar1,&DAT_0113c58c);
  if (((iVar5 != 0) && (iVar6 = func_0x00bc01f0(iVar5,(int)&param_4 + 4,&param_5), iVar6 == 0)) &&
     (iVar5 = func_0x00bc08d0(iVar5,&param_4), iVar5 == 0)) {
    return false;
  }
  iVar5 = func_0x00bc09d0(uVar1,"data-structure");
  if ((iVar5 != 0) && (iVar5 = func_0x00bc08d0(iVar5,(int)&param_3 + 4), iVar5 == 0)) {
    return false;
  }
  iVar5 = func_0x00bc09d0(uVar1,"reference");
  if ((iVar5 != 0) && (iVar5 = func_0x00bc01f0(iVar5,(int)&param_5 + 4,&param_6), iVar5 == 0)) {
    return false;
  }
  iVar5 = func_0x00bc09d0(uVar1,&DAT_0111cfbc);
  if ((iVar5 != 0) && (iVar5 = func_0x00bc08d0(iVar5,(int)&param_6 + 4), iVar5 == 0)) {
    return false;
  }
  FUN_00bcaeb0();
  if ((*piVar2 == 0) && (param_2 == 1)) {
    iVar5 = 0;
    if ((int)param_4 == 0) goto LAB_00e97cfa;
    iVar6 = func_0x00bbbc70((int)param_4,"crypto\\store\\store_result.c",0xa6);
    if ((iVar6 == 0) ||
       ((param_6._4_4_ != 0 &&
        (iVar5 = func_0x00bbbc70(param_6._4_4_,"crypto\\store\\store_result.c",0xa8), iVar5 == 0))))
    {
LAB_00e97c89:
      FUN_00bbc580(iVar6,"crypto\\store\\store_result.c",0xaa);
      FUN_00bbc580(iVar5,"crypto\\store\\store_result.c",0xab);
      FUN_00bcacf0();
      return false;
    }
    iVar7 = func_0x00e943c0(iVar6);
    *piVar2 = iVar7;
    if (iVar7 == 0) goto LAB_00e97c89;
    func_0x00e94540(iVar7,iVar5);
  }
  func_0x00bcad80();
  FUN_00bcaeb0();
  iVar5 = (int)param_9;
  if ((*piVar2 == 0) &&
     (iVar6 = func_0x00e97d50(&param_2,piVar2,iVar8,uVar3,uVar4,param_9), iVar6 == 0))
  goto LAB_00e97cfa;
  func_0x00bcad80();
  FUN_00bcaeb0();
  if ((*piVar2 != 0) || ((param_2 != 0 && (param_2 != 3)))) goto LAB_00e97c28;
  bVar9 = true;
  param_9 = (int *)func_0x00bde240(uVar4,iVar5);
  if (param_9 == (int *)0x0) goto LAB_00e97cfa;
  if ((int)param_3 != 0) {
    iVar6 = func_0x00bbbfe0((int)param_3,"TRUSTED CERTIFICATE");
    bVar9 = iVar6 != 0;
  }
  iVar6 = FUN_00bde300(&param_9,(int)&param_4 + 4,(undefined4)param_5);
  if (iVar6 == 0) {
    if (bVar9) {
      iVar6 = FUN_00bde2e0(&param_9,(int)&param_4 + 4,(undefined4)param_5);
      if (iVar6 != 0) goto LAB_00e97bfd;
    }
LAB_00e97c1c:
    FUN_00bde1d0(param_9);
  }
  else {
LAB_00e97bfd:
    if (param_9 != (int *)0x0) {
      param_2 = 3;
      iVar6 = func_0x00e94300(param_9);
      *piVar2 = iVar6;
      if (iVar6 == 0) goto LAB_00e97c1c;
    }
  }
LAB_00e97c28:
  func_0x00bcad80();
  FUN_00bcaeb0();
  if ((*piVar2 == 0) && ((param_2 == 0 || (param_2 == 4)))) {
    iVar6 = FUN_00bdbb30(0,(int)&param_4 + 4,(undefined4)param_5);
    if (iVar6 != 0) {
      param_2 = 4;
      iVar7 = func_0x00bdbb50(iVar6,uVar4,iVar5);
      if (iVar7 == 0) {
        FUN_00bdb8e0();
        iVar6 = 0;
      }
      else {
        iVar7 = func_0x00e94360(iVar6);
        *piVar2 = iVar7;
      }
    }
    if (*piVar2 == 0) {
      FUN_00bdb8e0(iVar6);
    }
  }
  func_0x00bcad80();
  FUN_00bcaeb0();
  if ((*piVar2 != 0) || (iVar8 = func_0x00e981f0(&param_2,piVar2,iVar8,uVar4,iVar5), iVar8 != 0)) {
    func_0x00bcad80();
    if (*piVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\store\\store_result.c",0x97,"ossl_store_handle_load_result");
      func_0x00bc5160(0x2c,0x8010c,0);
    }
    return *piVar2 != 0;
  }
LAB_00e97cfa:
  FUN_00bcacf0();
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00e985c0(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  func_0x00bbc9d0(&DAT_0145c7d0,0x80,"CPUINFO: OPENSSL_ia32cap=0x%llx:0x%llx",DAT_01466b70,
                  DAT_01466b74,DAT_01466b78,DAT_01466b7c);
  iVar2 = func_0x00e87a9c("OPENSSL_ia32cap");
  if (iVar2 != 0) {
    pcVar1 = &DAT_0145c7d0;
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    func_0x00bbc9d0(pcVar3,0x80 - (int)(pcVar3 + -0x145c7d0)," env:%s",iVar2);
  }
  if (DAT_0145c860 != '\0') {
    func_0x00bbc050(&DAT_0145c860,&DAT_0113c2f0,0x200);
  }
  func_0x00bbc050(&DAT_0145c860,"os-specific",0x200);
  DAT_0145c850 = &DAT_0145c860;
  _DAT_0145c858 = 1;
  return;
}



int FUN_00e9cb90(undefined4 *param_1,undefined4 *param_2)

{
  return (uint)(*(uint *)*param_2 < *(uint *)*param_1) -
         (uint)(*(uint *)*param_1 < *(uint *)*param_2);
}



undefined4 FUN_00e9d700(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iStack_10;
  
  if (0 < param_1[2]) {
    iStack_10 = 0;
    iVar13 = 0;
    if (0 < param_4) {
LAB_00e9d725:
      do {
        iVar10 = param_1[10];
        iVar3 = func_0x00eaa760(param_3,param_1[9]);
        if (iVar3 < 0) {
          iVar3 = param_1[2];
          uVar11 = 0;
LAB_00e9d776:
          uVar4 = func_0x00eaa760(param_3,iVar10);
          while ((int)uVar4 < 0) {
            if (iVar10 < 2) {
              return 0xffffffff;
            }
            iVar10 = iVar10 + -1;
            uVar4 = func_0x00eaa760(param_3,iVar10);
          }
          uVar2 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
          uVar9 = iVar3 - uVar11;
          uVar4 = (uVar2 & 0xff0f0f0f | uVar4 << 0x18) << 4 |
                  (uVar2 | uVar4 << 0x18) >> 4 & 0xf0f0f0f;
          uVar4 = (uVar4 & 0xf3333333) << 2 | uVar4 >> 2 & 0x33333333;
          uVar4 = uVar4 >> 1 & 0x55555555 | (uVar4 & 0xd5555555) * 2;
          if (1 < (int)uVar9) {
            do {
              uVar9 = uVar9 >> 1;
              uVar2 = *(uint *)(param_1[5] + (uVar9 + uVar11) * 4);
              uVar5 = uVar9;
              if (uVar4 < uVar2) {
                uVar5 = 0;
              }
              uVar11 = uVar11 + uVar5;
              iVar3 = iVar3 - (-(uint)(uVar4 < uVar2) & uVar9);
              uVar9 = iVar3 - uVar11;
              iVar13 = iStack_10;
            } while (1 < (int)uVar9);
          }
          iVar6 = (int)*(char *)(param_1[7] + uVar11);
          iVar3 = iVar13;
          if (iVar10 < iVar6) {
            func_0x00eaa6e0(param_3,iVar10);
            return 0xffffffff;
          }
        }
        else {
          uVar4 = *(uint *)(param_1[8] + iVar3 * 4);
          if ((int)uVar4 < 0) {
            uVar11 = (int)uVar4 >> 0xf & 0x7fff;
            iVar3 = param_1[2] - (uVar4 & 0x7fff);
            goto LAB_00e9d776;
          }
          uVar11 = uVar4 - 1;
          iVar6 = (int)*(char *)(param_1[7] + -1 + uVar4);
          iVar3 = iVar13;
        }
        func_0x00eaa6e0(param_3,iVar6);
        if (uVar11 == 0xffffffff) {
          return 0xffffffff;
        }
        iVar10 = param_1[4] + *param_1 * uVar11 * 4;
        iVar6 = 0;
        if (3 < param_4 - iVar3) {
          iVar12 = iVar3 + 3;
          pfVar7 = (float *)(param_2 + 8 + iVar3 * 4);
          do {
            iVar13 = iVar3;
            if (*param_1 <= iVar6) {
LAB_00e9d94d:
              if (param_4 <= iVar13) {
                return 0;
              }
              goto LAB_00e9d725;
            }
            pfVar7[-2] = *(float *)(iVar10 + iVar6 * 4) + pfVar7[-2];
            if (*param_1 <= iVar6 + 1) {
              iVar13 = iVar3 + 1;
              iStack_10 = iVar3 + 1;
              goto LAB_00e9d94d;
            }
            pfVar7[-1] = *(float *)(iVar10 + (iVar6 + 1) * 4) + pfVar7[-1];
            if (*param_1 <= iVar6 + 2) {
              iVar13 = iVar12 + -1;
              iStack_10 = iVar12 + -1;
              goto LAB_00e9d94d;
            }
            iVar8 = iVar6 + 3;
            *pfVar7 = *(float *)(iVar10 + (iVar6 + 2) * 4) + *pfVar7;
            iVar13 = iVar12;
            iStack_10 = iVar12;
            if (*param_1 <= iVar8) goto LAB_00e9d94d;
            iVar3 = iVar3 + 4;
            iVar6 = iVar6 + 4;
            iVar12 = iVar12 + 4;
            pfVar7[1] = *(float *)(iVar10 + iVar8 * 4) + pfVar7[1];
            pfVar7 = pfVar7 + 4;
            iStack_10 = iVar3;
          } while (iVar3 < param_4 + -3);
        }
        if (param_4 <= iVar3) {
          return 0;
        }
        pfVar7 = (float *)(iVar10 + iVar6 * 4);
        while (iVar13 = iVar3, iVar6 < *param_1) {
          iVar6 = iVar6 + 1;
          fVar1 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          *(float *)(param_2 + iVar3 * 4) = *(float *)(param_2 + iVar3 * 4) + fVar1;
          iVar3 = iVar3 + 1;
          iStack_10 = iVar3;
          if (param_4 <= iVar3) {
            return 0;
          }
        }
      } while( true );
    }
  }
  return 0;
}



void FUN_00e9dbf0(int *param_1,float *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  int iStack_24;
  uint *puStack_c;
  
  if (0 < param_1[2]) {
    iVar4 = param_4 / *param_1;
    func_0x00e88230();
    puStack_c = (uint *)&stack0xffffffc8;
    func_0x00e88230();
    iStack_24 = 0;
    if (0 < iVar4) {
      do {
        iVar11 = param_1[10];
        iVar5 = func_0x00eaa760(param_3,param_1[9]);
        if (iVar5 < 0) {
          iVar5 = param_1[2];
          uVar12 = 0;
LAB_00e9dca0:
          uVar6 = func_0x00eaa760(param_3,iVar11);
          while ((int)uVar6 < 0) {
            if (iVar11 < 2) goto LAB_00e9ddbc;
            iVar11 = iVar11 + -1;
            uVar6 = func_0x00eaa760(param_3,iVar11);
          }
          uVar3 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8;
          uVar9 = iVar5 - uVar12;
          uVar6 = (uVar3 & 0xff0f0f0f | uVar6 << 0x18) << 4 |
                  (uVar3 | uVar6 << 0x18) >> 4 & 0xf0f0f0f;
          uVar6 = (uVar6 & 0xf3333333) << 2 | uVar6 >> 2 & 0x33333333;
          uVar6 = uVar6 >> 1 & 0x55555555 | (uVar6 & 0xd5555555) * 2;
          if (1 < (int)uVar9) {
            do {
              uVar9 = uVar9 >> 1;
              uVar3 = *(uint *)(param_1[5] + (uVar9 + uVar12) * 4);
              uVar7 = uVar9;
              if (uVar6 < uVar3) {
                uVar7 = 0;
              }
              uVar12 = uVar12 + uVar7;
              iVar5 = iVar5 - (-(uint)(uVar6 < uVar3) & uVar9);
              uVar9 = iVar5 - uVar12;
            } while (1 < (int)uVar9);
          }
          iVar5 = (int)*(char *)(param_1[7] + uVar12);
          if (iVar11 < iVar5) {
            func_0x00eaa6e0(param_3,iVar11);
LAB_00e9ddbc:
            *puStack_c = 0xffffffff;
            goto LAB_00e9ddc9;
          }
        }
        else {
          uVar6 = *(uint *)(param_1[8] + iVar5 * 4);
          if ((int)uVar6 < 0) {
            uVar12 = (int)uVar6 >> 0xf & 0x7fff;
            iVar5 = param_1[2] - (uVar6 & 0x7fff);
            goto LAB_00e9dca0;
          }
          uVar12 = uVar6 - 1;
          iVar5 = (int)*(char *)(param_1[7] + -1 + uVar6);
        }
        func_0x00eaa6e0(param_3,iVar5);
        *puStack_c = uVar12;
        if (uVar12 == 0xffffffff) {
LAB_00e9ddc9:
          FUN_008ab370();
          return;
        }
        iStack_24 = iStack_24 + 1;
        *puStack_c = param_1[4] + *param_1 * uVar12 * 4;
        puStack_c = puStack_c + 1;
      } while (iStack_24 < iVar4);
    }
    iVar11 = 0;
    iVar5 = 0;
    if (0 < *param_1) {
      do {
        iVar8 = 0;
        pfVar10 = param_2;
        iVar2 = iVar11;
        while ((iVar2 < param_4 && (iVar8 < iVar4))) {
          iVar1 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          iVar2 = iVar8 + iVar11;
          *pfVar10 = *(float *)(*(int *)(&stack0xffffffc8 + iVar1) + iVar5 * 4) + *pfVar10;
          pfVar10 = pfVar10 + 1;
        }
        iVar5 = iVar5 + 1;
        param_2 = param_2 + iVar4;
        iVar11 = iVar11 + iVar4;
      } while (iVar5 < *param_1);
    }
  }
  FUN_008ab370();
  return;
}



int FUN_00ea0220(undefined4 *param_1,undefined4 *param_2)

{
  return (uint)(*(float *)*param_1 < *(float *)*param_2) -
         (uint)(*(float *)*param_2 < *(float *)*param_1);
}



void FUN_00ea4f80(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x60);
    free(param_1);
  }
  return;
}



void FUN_00ea4fa0(undefined4 *param_1)

{
  void *_Memory;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      _Memory = *(void **)param_1[2];
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
      if (*(void **)(param_1[2] + 4) != (void *)0x0) {
        free(*(void **)(param_1[2] + 4));
      }
      free((void *)param_1[2]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    free(param_1);
  }
  return;
}



int * FUN_00ea5000(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *_Dst;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  _Dst = (int *)func_0x008aafe4(0x60);
  iVar3 = func_0x00eaa820(param_2,8);
  *_Dst = iVar3;
  iVar3 = func_0x00eaa820(param_2,0x10);
  _Dst[1] = iVar3;
  iVar3 = func_0x00eaa820(param_2,0x10);
  _Dst[2] = iVar3;
  iVar3 = func_0x00eaa820(param_2,6);
  _Dst[3] = iVar3;
  iVar3 = func_0x00eaa820(param_2,8);
  _Dst[4] = iVar3;
  iVar3 = func_0x00eaa820(param_2,4);
  _Dst[5] = iVar3 + 1;
  if ((((0 < *_Dst) && (0 < _Dst[1])) && (0 < _Dst[2])) && (0 < iVar3 + 1)) {
    iVar3 = 0;
    piVar5 = _Dst + 6;
    while( true ) {
      iVar4 = func_0x00eaa820(param_2,8);
      *piVar5 = iVar4;
      if (((iVar4 < 0) || (*(int *)(iVar1 + 0x18) <= iVar4)) ||
         ((piVar2 = *(int **)(iVar1 + 0x720 + iVar4 * 4), piVar2[3] == 0 || (*piVar2 < 1)))) break;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
      if (_Dst[5] <= iVar3) {
        return _Dst;
      }
    }
  }
  memset(_Dst,0,0x60);
  free(_Dst);
  return (int *)0x0;
}



undefined4 * FUN_00ea50e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)func_0x008aaf6c(1,0x20);
  puVar1[1] = *param_2;
  *puVar1 = param_2[2];
  puVar1[5] = param_2;
  uVar2 = func_0x008aaf6c(2,4);
  puVar1[2] = uVar2;
  return puVar1;
}



int FUN_00ea5110(float param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = (int)param_1;
  iVar7 = *(int *)(param_2 + 0x14);
  iVar4 = func_0x00eaa820((int)param_1 + 4,*(undefined4 *)(iVar7 + 0xc));
  if (0 < iVar4) {
    uVar2 = *(undefined4 *)(iVar7 + 0xc);
    iVar3 = *(int *)(iVar7 + 0x10);
    uVar5 = func_0x00e9cb70(*(undefined4 *)(iVar7 + 0x14));
    iVar6 = func_0x00eaa820((int)param_1 + 4,uVar5);
    if ((iVar6 != -1) && (iVar6 < *(int *)(iVar7 + 0x14))) {
      param_1 = 0.0;
      piVar1 = (int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x40) + 4) + 0x1c) + 0xb20) +
                      *(int *)(iVar7 + 0x18 + iVar6 * 4) * 0x38);
      iVar7 = func_0x00e9b5f0(iVar8,(*(int *)(param_2 + 4) + *piVar1) * 4 + 4);
      iVar8 = func_0x00e9d980(piVar1,iVar7,iVar8 + 4,*(undefined4 *)(param_2 + 4));
      if (iVar8 != -1) {
        iVar8 = *(int *)(param_2 + 4);
        iVar6 = 0;
        if (0 < iVar8) {
          do {
            iVar9 = 0;
            if (iVar6 < iVar8) {
              do {
                if (*piVar1 <= iVar9) break;
                iVar9 = iVar9 + 1;
                *(float *)(iVar7 + iVar6 * 4) = param_1 + *(float *)(iVar7 + iVar6 * 4);
                iVar6 = iVar6 + 1;
                iVar8 = *(int *)(param_2 + 4);
              } while (iVar6 < iVar8);
            }
            param_1 = *(float *)(iVar7 + -4 + iVar6 * 4);
          } while (iVar6 < iVar8);
        }
        *(float *)(iVar7 + iVar8 * 4) =
             ((float)iVar4 / (float)((1 << ((byte)uVar2 & 0x1f)) + -1)) * (float)iVar3;
        return iVar7;
      }
    }
  }
  return 0;
}



undefined4 FUN_00ea5250(int param_1,int *param_2,int param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = param_2[5];
  iVar1 = iVar2 * 4;
  if (*(int *)(iVar1 + param_2[2]) == 0) {
    fVar14 = (float)*(int *)(iVar3 + 4) * 0.5;
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) + iVar1) / 2;
    dVar10 = (double)(fVar14 * fVar14 * 1.85e-08);
    func_0x00e87a34();
    dVar11 = (double)(fVar14 * 0.00074);
    func_0x00e87a34();
    iVar8 = param_2[2];
    iVar4 = *param_2;
    uVar6 = func_0x008aafe4();
    *(undefined4 *)(iVar8 + iVar1) = uVar6;
    iVar8 = 0;
    if (0 < iVar5) {
      do {
        fVar15 = (((float)*(int *)(iVar3 + 4) * 0.5) / (float)iVar5) * (float)iVar8;
        dVar12 = (double)(fVar15 * fVar15 * 1.85e-08);
        func_0x00e87a34();
        dVar13 = (double)(fVar15 * 0.00074);
        func_0x00e87a34();
        fVar9 = (float10)func_0x00e879cb((dVar12 * 2.240000009536743 + dVar13 * 13.100000381469727 +
                                         (double)(fVar15 * 0.0001)) *
                                         (double)(float)((double)iVar4 /
                                                        (dVar10 * 2.240000009536743 +
                                                         dVar11 * 13.100000381469727 +
                                                        (double)(fVar14 * 0.0001))));
        iVar7 = *param_2 + -1;
        if ((int)fVar9 < *param_2) {
          iVar7 = (int)fVar9;
        }
        *(int *)(*(int *)(param_2[2] + iVar1) + iVar8 * 4) = iVar7;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar5);
    }
    *(undefined4 *)(*(int *)(param_2[2] + iVar1) + iVar8 * 4) = 0xffffffff;
    param_2[iVar2 + 3] = iVar5;
  }
  if (param_3 == 0) {
    memset(param_4,0,param_2[*(int *)(param_1 + 0x1c) + 3] << 2);
    return 0;
  }
  func_0x00eaa500(param_4,*(undefined4 *)(param_2[2] + *(int *)(param_1 + 0x1c) * 4),
                  param_2[*(int *)(param_1 + 0x1c) + 3],*param_2,param_3,param_2[1],
                  *(undefined4 *)(param_3 + param_2[1] * 4),(float)*(int *)(iVar3 + 0x10));
  return 1;
}



void FUN_00ea54d0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x460);
    free(param_1);
  }
  return;
}



void FUN_00ea5500(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x520);
    free(param_1);
  }
  return;
}



void FUN_00ea5530(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piStack_14;
  int iStack_10;
  int iStack_c;
  
  iStack_10 = 0;
  iVar3 = param_1[0xd2];
  func_0x00eaa940(param_2,*param_1,5);
  iStack_c = 0;
  piVar5 = param_1 + 1;
  if (0 < *param_1) {
    iVar4 = -1;
    do {
      func_0x00eaa940(param_2,*piVar5,4);
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
      if (iVar1 <= iVar4) {
        iVar1 = iVar4;
      }
      iStack_c = iStack_c + 1;
      iVar4 = iVar1;
    } while (iStack_c < *param_1);
    iStack_c = iVar1 + 1;
    if (0 < iStack_c) {
      piStack_14 = param_1 + 0x50;
      piVar5 = param_1 + 0x30;
      do {
        func_0x00eaa940(param_2,piVar5[-0x10] + -1,3);
        func_0x00eaa940(param_2,*piVar5,2);
        if (*piVar5 != 0) {
          func_0x00eaa940(param_2,piVar5[0x10],8);
        }
        iVar4 = 0;
        piVar6 = piStack_14;
        if (0 < 1 << ((byte)*piVar5 & 0x1f)) {
          do {
            func_0x00eaa940(param_2,*piVar6 + 1,8);
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar4 < 1 << ((byte)*piVar5 & 0x1f));
        }
        piStack_14 = piStack_14 + 8;
        piVar5 = piVar5 + 1;
        iStack_c = iStack_c + -1;
      } while (iStack_c != 0);
    }
  }
  piStack_14 = param_1 + 1;
  func_0x00eaa940(param_2,param_1[0xd0] + -1,2);
  uVar2 = func_0x00e9cb70(iVar3 + -1,4);
  func_0x00eaa940(param_2,uVar2);
  uVar2 = func_0x00e9cb70(iVar3 + -1);
  iStack_c = 0;
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      iStack_10 = iStack_10 + param_1[*piStack_14 + 0x20];
      if (iVar3 < iStack_10) {
        piVar5 = param_1 + iVar3 + 0xd3;
        iVar4 = iStack_10 - iVar3;
        do {
          func_0x00eaa940(param_2,*piVar5,uVar2);
          piVar5 = piVar5 + 1;
          iVar4 = iVar4 + -1;
          iVar3 = iStack_10;
        } while (iVar4 != 0);
      }
      iStack_c = iStack_c + 1;
      piStack_14 = piStack_14 + 1;
    } while (iStack_c < *param_1);
  }
  return;
}



// WARNING: Type propagation algorithm not settling

void FUN_00ea5700(int param_1,undefined4 param_2)

{
  int *_Dst;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_154 [8];
  int *piStack_14c;
  int *piStack_148;
  int iStack_144;
  int *piStack_140;
  int *piStack_13c;
  int iStack_138;
  int iStack_134;
  int *piStack_130;
  int *piStack_12c;
  int *piStack_128;
  int *apiStack_124 [68];
  uint uStack_14;
  
  uStack_14 = DAT_0128fd40 ^ (uint)auStack_154;
  iStack_144 = *(int *)(param_1 + 0x1c);
  iStack_134 = 0;
  piStack_148 = (int *)0xffffffff;
  _Dst = (int *)func_0x008aaf6c(1,0x460);
  piStack_14c = _Dst;
  piStack_130 = _Dst;
  piStack_12c = _Dst;
  piStack_128 = _Dst;
  apiStack_124[0] = _Dst;
  iVar1 = func_0x00eaa820(param_2,5);
  *_Dst = iVar1;
  piStack_140 = (int *)0x0;
  piStack_13c = _Dst;
  if (iVar1 < 1) {
    piVar3 = (int *)0xffffffff;
  }
  else {
    do {
      piStack_13c = piStack_13c + 1;
      piVar2 = (int *)func_0x00eaa820(param_2,4);
      *piStack_13c = (int)piVar2;
      if ((int)piVar2 < 0) goto LAB_00ea5aea;
      piVar3 = piStack_148;
      if ((int)piStack_148 < (int)piVar2) {
        piVar3 = piVar2;
      }
      piStack_140 = (int *)((int)piStack_140 + 1);
      piStack_148 = piVar3;
    } while ((int)piStack_140 < *_Dst);
  }
  iStack_138 = (int)piVar3 + 1;
  piStack_13c = (int *)0x0;
  if (0 < iStack_138) {
    piStack_148 = _Dst + 0x50;
    piVar3 = _Dst + 0x30;
    do {
      piStack_140 = piVar3;
      iVar1 = func_0x00eaa820(param_2,3);
      piVar3[-0x10] = iVar1 + 1;
      iVar1 = func_0x00eaa820(param_2,2);
      *piVar3 = iVar1;
      _Dst = piStack_14c;
      if (iVar1 < 0) goto LAB_00ea5aea;
      if (iVar1 != 0) {
        iVar1 = func_0x00eaa820(param_2,8);
        piVar3[0x10] = iVar1;
      }
      _Dst = piStack_14c;
      if ((piVar3[0x10] < 0) || (*(int *)(iStack_144 + 0x18) <= piVar3[0x10])) goto LAB_00ea5aea;
      iVar1 = 0;
      piVar2 = piStack_148;
      if (0 < 1 << ((byte)*piVar3 & 0x1f)) {
        do {
          iVar4 = func_0x00eaa820(param_2,8);
          iVar4 = iVar4 + -1;
          *piVar2 = iVar4;
          _Dst = piStack_14c;
          if ((iVar4 < -1) || (*(int *)(iStack_144 + 0x18) <= iVar4)) goto LAB_00ea5aea;
          iVar1 = iVar1 + 1;
          piVar3 = piStack_140;
          piVar2 = piVar2 + 1;
        } while (iVar1 < 1 << ((byte)*piStack_140 & 0x1f));
      }
      piVar3 = piVar3 + 1;
      piStack_148 = piStack_148 + 8;
      piStack_13c = (int *)((int)piStack_13c + 1);
      _Dst = piStack_14c;
      piStack_140 = piVar3;
    } while ((int)piStack_13c < iStack_138);
  }
  iVar1 = func_0x00eaa820(param_2,2);
  _Dst[0xd0] = iVar1 + 1;
  iVar1 = func_0x00eaa820(param_2,4);
  _Dst = piStack_14c;
  iStack_138 = iVar1;
  if (iVar1 < 0) {
LAB_00ea5aea:
    memset(_Dst,0,0x460);
    free(piStack_14c);
    FUN_008ab370();
    return;
  }
  iVar7 = 0;
  iStack_144 = 0;
  iVar4 = 0;
  if (0 < *piStack_14c) {
    piStack_148 = piStack_14c + 1;
    iStack_134 = 0;
    do {
      iStack_134 = iStack_134 + _Dst[*piStack_148 + 0x20];
      if (0x3f < iStack_134) goto LAB_00ea5aea;
      if (iVar7 < iStack_134) {
        piVar3 = _Dst + iVar7 + 0xd3;
        do {
          iVar1 = func_0x00eaa820(param_2,iVar1);
          *piVar3 = iVar1;
          _Dst = piStack_14c;
          if ((iVar1 < 0) || (1 << ((byte)iStack_138 & 0x1f) <= iVar1)) goto LAB_00ea5aea;
          iVar7 = iVar7 + 1;
          piVar3 = piVar3 + 1;
          iVar1 = iStack_138;
        } while (iVar7 < iStack_134);
      }
      piStack_148 = piStack_148 + 1;
      iStack_144 = iStack_144 + 1;
      iVar4 = iStack_134;
    } while (iStack_144 < *_Dst);
  }
  _Dst[0xd1] = 0;
  uVar6 = iVar4 + 2;
  iVar7 = 0;
  _Dst[0xd2] = 1 << ((byte)iVar1 & 0x1f);
  if (0 < (int)uVar6) {
    if (0xf < uVar6) {
      uVar5 = uVar6 & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      iStack_138 = uVar6 - uVar5;
      iStack_144 = 0;
      iVar1 = 0xe0;
      do {
        *(int **)((int)apiStack_124 + iStack_144 + 4U) = piStack_130 + iVar7 + 0xd1;
        *(int **)((int)apiStack_124 + iStack_144 + 8U) = piStack_12c + iVar7 + 0xd2;
        *(int **)((int)apiStack_124 + iStack_144 + 0xcU) = piStack_128 + iVar7 + 0xd3;
        *(int **)((int)apiStack_124 + iStack_144 + 0x10U) = apiStack_124[0] + iVar7 + 0xd4;
        apiStack_124[iVar7 + 5] = piStack_130 + iVar1 + -0xb;
        apiStack_124[iVar7 + 6] = piStack_12c + iVar1 + -10;
        apiStack_124[iVar7 + 7] = piStack_128 + iVar1 + -9;
        apiStack_124[iVar7 + 8] = apiStack_124[0] + iVar1 + -8;
        apiStack_124[iVar7 + 9] = piStack_130 + iVar1 + -7;
        apiStack_124[iVar7 + 10] = piStack_12c + iVar1 + -6;
        apiStack_124[iVar7 + 0xb] = piStack_128 + iVar1 + -5;
        apiStack_124[iVar7 + 0xc] = apiStack_124[0] + iVar1 + -4;
        apiStack_124[iVar7 + 0xd] = piStack_130 + iVar1 + -3;
        apiStack_124[iVar7 + 0xe] = piStack_12c + iVar1 + -2;
        apiStack_124[iVar7 + 0xf] = piStack_128 + iVar1 + -1;
        apiStack_124[iVar7 + 0x10] = apiStack_124[0] + iVar1;
        iVar7 = iVar7 + 0x10;
        iStack_144 = iStack_144 + 0x40;
        iVar1 = iVar1 + 0x10;
      } while (iVar7 < iStack_138);
      uVar6 = iStack_134 + 2;
      _Dst = piStack_14c;
      iVar4 = iStack_134;
      if ((int)uVar6 <= iVar7) goto LAB_00ea5a92;
    }
    do {
      apiStack_124[iVar7 + 1] = _Dst + iVar7 + 0xd1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar6);
  }
LAB_00ea5a92:
  func_0x00e87a72(apiStack_124 + 1,iVar4 + 2,4,FUN_00c04410);
  iVar1 = 1;
  if (1 < iVar4 + 2) {
    do {
      _Dst = piStack_14c;
      if (*apiStack_124[iVar1] == *apiStack_124[iVar1 + 1]) goto LAB_00ea5aea;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar4 + 2);
  }
  FUN_008ab370();
  return;
}



void FUN_00ea5b20(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_154 [4];
  int iStack_150;
  int *piStack_14c;
  int iStack_148;
  int *piStack_144;
  int iStack_140;
  int *piStack_13c;
  int iStack_138;
  int iStack_134;
  int *piStack_130;
  int *piStack_12c;
  int *piStack_128;
  int *piStack_124;
  int aiStack_120 [67];
  uint uStack_14;
  
  uStack_14 = DAT_0128fd40 ^ (uint)auStack_154;
  iVar6 = 0;
  piStack_13c = param_2;
  iStack_150 = 0;
  piStack_130 = param_2;
  piStack_12c = param_2;
  piStack_128 = param_2;
  piStack_124 = param_2;
  iStack_148 = func_0x008aaf6c(1,0x520);
  iVar5 = 0;
  piVar3 = (int *)0x0;
  *(int **)(iStack_148 + 0x510) = param_2;
  *(int *)(iStack_148 + 0x508) = param_2[0xd2];
  iVar7 = *param_2;
  if (1 < iVar7) {
    iVar7 = (*param_2 - 2U >> 1) + 1;
    iVar6 = 0;
    piVar3 = (int *)(iVar7 * 2);
    piVar8 = param_2;
    do {
      iVar6 = iVar6 + param_2[piVar8[1] + 0x20];
      iVar5 = iVar5 + param_2[piVar8[2] + 0x20];
      iVar7 = iVar7 + -1;
      piVar8 = piVar8 + 2;
    } while (iVar7 != 0);
    iVar7 = *param_2;
    iStack_150 = iVar5;
    piStack_14c = piVar3;
  }
  iStack_140 = 0;
  if ((int)piVar3 < iVar7) {
    iStack_140 = param_2[param_2[(int)piVar3 + 1] + 0x20];
  }
  iVar7 = 0;
  iStack_140 = iStack_140 + iStack_150 + iVar6;
  piVar3 = (int *)(iStack_140 + 2);
  *(int **)(iStack_148 + 0x504) = piVar3;
  if (0 < (int)piVar3) {
    if (&DAT_0000000f < piVar3) {
      uVar4 = (uint)piVar3 & 0x8000000f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
      }
      piStack_14c = (int *)((int)piVar3 - uVar4);
      iStack_150 = 0;
      iVar6 = 0xe0;
      do {
        *(int **)((int)aiStack_120 + iStack_150) = piStack_130 + iVar7 + 0xd1;
        *(int **)((int)aiStack_120 + iStack_150 + 4) = piStack_12c + iVar7 + 0xd2;
        *(int **)((int)aiStack_120 + iStack_150 + 8) = piStack_128 + iVar7 + 0xd3;
        *(int **)((int)aiStack_120 + iStack_150 + 0xc) = piStack_124 + iVar7 + 0xd4;
        aiStack_120[iVar7 + 4] = (int)(piStack_130 + iVar6 + -0xb);
        aiStack_120[iVar7 + 5] = (int)(piStack_12c + iVar6 + -10);
        aiStack_120[iVar7 + 6] = (int)(piStack_128 + iVar6 + -9);
        aiStack_120[iVar7 + 7] = (int)(piStack_124 + iVar6 + -8);
        aiStack_120[iVar7 + 8] = (int)(piStack_130 + iVar6 + -7);
        aiStack_120[iVar7 + 9] = (int)(piStack_12c + iVar6 + -6);
        aiStack_120[iVar7 + 10] = (int)(piStack_128 + iVar6 + -5);
        aiStack_120[iVar7 + 0xb] = (int)(piStack_124 + iVar6 + -4);
        aiStack_120[iVar7 + 0xc] = (int)(piStack_130 + iVar6 + -3);
        aiStack_120[iVar7 + 0xd] = (int)(piStack_12c + iVar6 + -2);
        aiStack_120[iVar7 + 0xe] = (int)(piStack_128 + iVar6 + -1);
        aiStack_120[iVar7 + 0xf] = (int)(piStack_124 + iVar6);
        iVar7 = iVar7 + 0x10;
        iStack_150 = iStack_150 + 0x40;
        iVar6 = iVar6 + 0x10;
        param_2 = piStack_13c;
      } while (iVar7 < (int)piStack_14c);
    }
    for (; iVar7 < (int)piVar3; iVar7 = iVar7 + 1) {
      aiStack_120[iVar7] = (int)(param_2 + iVar7 + 0xd1);
    }
  }
  piStack_144 = piVar3;
  func_0x00e87a72(aiStack_120,piVar3,4,FUN_00c04410);
  iVar7 = 0;
  if (0 < (int)piVar3) {
    piVar8 = (int *)(iStack_148 + 0x104);
    do {
      piVar1 = aiStack_120 + iVar7;
      iVar7 = iVar7 + 1;
      *piVar8 = (*piVar1 - (int)param_2) + -0x344 >> 2;
      piVar8 = piVar8 + 1;
    } while (iVar7 < (int)piVar3);
  }
  iVar7 = 0;
  if (0 < (int)piVar3) {
    piVar8 = (int *)(iStack_148 + 0x104);
    do {
      iVar6 = *piVar8;
      piVar8 = piVar8 + 1;
      *(int *)(iStack_148 + 0x208 + iVar6 * 4) = iVar7;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)piVar3);
  }
  iVar7 = 0;
  if (0 < (int)piVar3) {
    do {
      *(int *)(iStack_148 + iVar7 * 4) = param_2[*(int *)(iStack_148 + 0x104 + iVar7 * 4) + 0xd1];
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)piVar3);
  }
  switch(param_2[0xd0]) {
  case 1:
    *(undefined4 *)(iStack_148 + 0x50c) = 0x100;
    break;
  case 2:
    *(undefined4 *)(iStack_148 + 0x50c) = 0x80;
    break;
  case 3:
    *(undefined4 *)(iStack_148 + 0x50c) = 0x56;
    break;
  case 4:
    *(undefined4 *)(iStack_148 + 0x50c) = 0x40;
  }
  if (0 < iStack_140) {
    piStack_14c = (int *)(iStack_148 + 0x30c);
    piStack_144 = param_2 + 0xd3;
    iStack_150 = 2;
    do {
      iVar6 = 0;
      iVar7 = *(int *)(iStack_148 + 0x508);
      iVar5 = 0;
      iStack_138 = 0;
      iStack_134 = 1;
      if (0 < iStack_150) {
        piVar3 = piStack_13c + 0xd1;
        do {
          iVar2 = *piVar3;
          if ((iVar6 < iVar2) && (iVar2 < *piStack_144)) {
            iVar6 = iVar2;
            iStack_138 = iVar5;
          }
          if ((iVar2 < iVar7) && (*piStack_144 < iVar2)) {
            iVar7 = iVar2;
            iStack_134 = iVar5;
          }
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar5 < iStack_150);
      }
      iVar7 = iStack_150 + 1;
      iVar6 = iStack_150 + -1;
      piStack_14c[0x3f] = iStack_138;
      *piStack_14c = iStack_134;
      piStack_14c = piStack_14c + 1;
      piStack_144 = piStack_144 + 1;
      iStack_150 = iVar7;
    } while (iVar6 < iStack_140);
  }
  FUN_008ab370();
  return;
}



undefined4 * FUN_00ea5ee0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int *piStack_28;
  int iStack_18;
