# Microsoft Developer Studio Project File - Name="Splint" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=Splint - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "Splint.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "Splint.mak" CFG="Splint - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "Splint - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "Splint - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "Splint - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /I "\\Apollo\evans\LCLintDev\src\Headers" /D "NDEBUG" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "HAVE_CONFIG_H" /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib setargv.obj /nologo /subsystem:console /machine:I386 /out:"C:/splint-3.0.1/bin/splint.exe"

!ELSEIF  "$(CFG)" == "Splint - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I "Headers" /I "\\Apollo\evans]LCLintDev\src\Headers" /D "_DEBUG" /D "HAVE_CONFIG_H" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 setargv.obj kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "Splint - Win32 Release"
# Name "Splint - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\..\src\abstract.c
# End Source File
# Begin Source File

SOURCE=..\..\src\aliasTable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\annotationInfo.c
# End Source File
# Begin Source File

SOURCE=..\..\src\annotationTable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cgrammar.c
# End Source File
# Begin Source File

SOURCE=..\..\src\checking.c
# End Source File
# Begin Source File

SOURCE=..\..\src\clabstract.c
# End Source File
# Begin Source File

SOURCE=..\..\src\clause.c
# End Source File
# Begin Source File

SOURCE=..\..\src\clauseStack.c
# End Source File
# Begin Source File

SOURCE=..\..\src\constraint.c
# End Source File
# Begin Source File

SOURCE=..\..\src\constraintExpr.c
# End Source File
# Begin Source File

SOURCE=..\..\src\constraintExprData.c
# End Source File
# Begin Source File

SOURCE=..\..\src\constraintGeneration.c
# End Source File
# Begin Source File

SOURCE=..\..\src\constraintList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\constraintOutput.c
# End Source File
# Begin Source File

SOURCE=..\..\src\constraintResolve.c
# End Source File
# Begin Source File

SOURCE=..\..\src\constraintTerm.c
# End Source File
# Begin Source File

SOURCE=..\..\src\context.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cpperror.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cppexp.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cpphash.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cpplib.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cppmain.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cprim.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cscanner.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cstring.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cstringList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cstringSList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cstringTable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\ctype.c
# End Source File
# Begin Source File

SOURCE=..\..\src\ctypeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cvar.c
# End Source File
# Begin Source File

SOURCE=..\..\src\declaratorInvNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\declaratorNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\ekind.c
# End Source File
# Begin Source File

SOURCE=..\..\src\enumNameList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\enumNameSList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\exprChecks.c
# End Source File
# Begin Source File

SOURCE=..\..\src\exprData.c
# End Source File
# Begin Source File

SOURCE=..\..\src\exprNode.c
# End Source File
# Begin Source File

SOURCE=..\..\src\exprNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\exprNodeSList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\fcnNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\fileIdList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\fileLib.c
# End Source File
# Begin Source File

SOURCE=..\..\src\fileloc.c
# End Source File
# Begin Source File

SOURCE=..\..\src\filelocList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\filelocStack.c
# End Source File
# Begin Source File

SOURCE=..\..\src\fileTable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\flagMarker.c
# End Source File
# Begin Source File

SOURCE=..\..\src\flagMarkerList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\flags.c
# End Source File
# Begin Source File

SOURCE=..\..\src\flagSpec.c
# End Source File
# Begin Source File

SOURCE=..\..\src\functionClause.c
# End Source File
# Begin Source File

SOURCE=..\..\src\functionClauseList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\functionConstraint.c
# End Source File
# Begin Source File

SOURCE=..\..\src\general.c
# End Source File
# Begin Source File

SOURCE=..\..\src\genericTable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\globals.c
# End Source File
# Begin Source File

SOURCE=..\..\src\globalsClause.c
# End Source File
# Begin Source File

SOURCE=..\..\src\globSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\guardSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\idDecl.c
# End Source File
# Begin Source File

SOURCE=..\..\src\idDeclList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\importNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\imports.c
# End Source File
# Begin Source File

SOURCE=..\..\src\initDeclNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\inputStream.c
# End Source File
# Begin Source File

SOURCE=..\..\src\interfaceNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\intSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lclctypes.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lclinit.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lcllib.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lclscan.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lclscanline.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lclsyntable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lcltokentable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\letDeclNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lh.c
# End Source File
# Begin Source File

SOURCE=..\..\src\llerror.c
# End Source File
# Begin Source File

SOURCE=..\..\src\llgrammar.c
# End Source File
# Begin Source File

SOURCE=..\..\src\llmain.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lltok.c
# End Source File
# Begin Source File

SOURCE=..\..\src\loopHeuristics.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lslinit.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lslOpList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lslOpSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lslparse.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lsymbol.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lsymbolList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\lsymbolSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\ltoken.c
# End Source File
# Begin Source File

SOURCE=..\..\src\ltokenList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\macrocache.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mapping.c
# End Source File
# Begin Source File

SOURCE=..\..\src\message.c
# End Source File
# Begin Source File

SOURCE=..\..\src\messageLog.c
# End Source File
# Begin Source File

SOURCE=..\..\src\metaStateConstraint.c
# End Source File
# Begin Source File

SOURCE=..\..\src\metaStateConstraintList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\metaStateExpression.c
# End Source File
# Begin Source File

SOURCE=..\..\src\metaStateInfo.c
# End Source File
# Begin Source File

SOURCE=..\..\src\metaStateSpecifier.c
# End Source File
# Begin Source File

SOURCE=..\..\src\metaStateTable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\modifiesClause.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtAnnotationDecl.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtAnnotationList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtAnnotationsNode.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtContextNode.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtDeclarationNode.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtDeclarationPiece.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtDeclarationPieces.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtDefaultsDecl.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtDefaultsDeclList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtDefaultsNode.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtgrammar.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtLoseReference.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtLoseReferenceList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtMergeClause.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtMergeClauseList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtMergeItem.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtMergeNode.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtreader.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtscanner.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mttok.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtTransferAction.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtTransferClause.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtTransferClauseList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\mtValuesNode.c
# End Source File
# Begin Source File

SOURCE=..\..\src\multiVal.c
# End Source File
# Begin Source File

SOURCE=..\..\src\nameChecks.c
# End Source File
# Begin Source File

SOURCE=..\..\src\osd.c
# End Source File
# Begin Source File

SOURCE=..\..\src\pairNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\paramNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\programNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\qtype.c
# End Source File
# Begin Source File

SOURCE=..\..\src\qual.c
# End Source File
# Begin Source File

SOURCE=..\..\src\qualList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\quantifierNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\randomNumbers.c
# End Source File
# Begin Source File

SOURCE=..\..\src\reader.c
# End Source File
# Begin Source File

SOURCE=..\..\src\replaceNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\scan.c
# End Source File
# Begin Source File

SOURCE=..\..\src\scanline.c
# End Source File
# Begin Source File

SOURCE=..\..\src\shift.c
# End Source File
# Begin Source File

SOURCE=..\..\src\signature.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sigNodeSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sort.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sortList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sortSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sortSetList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sRef.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sRefList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sRefSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sRefSetList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\sRefTable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\stateClause.c
# End Source File
# Begin Source File

SOURCE=..\..\src\stateClauseList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\stateCombinationTable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\stateInfo.c
# End Source File
# Begin Source File

SOURCE=..\..\src\stateValue.c
# End Source File
# Begin Source File

SOURCE=..\..\src\stDeclNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\storeRefNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\structNames.c
# End Source File
# Begin Source File

SOURCE=..\..\src\symtable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\syntable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\termNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\tokentable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\traitRefNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\transferChecks.c
# End Source File
# Begin Source File

SOURCE=..\..\src\typeIdSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\typeNameNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\uentry.c
# End Source File
# Begin Source File

SOURCE=..\..\src\uentryList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\usymIdSet.c
# End Source File
# Begin Source File

SOURCE=..\..\src\usymtab.c
# End Source File
# Begin Source File

SOURCE=..\..\src\usymtab_interface.c
# End Source File
# Begin Source File

SOURCE=..\..\src\valueTable.c
# End Source File
# Begin Source File

SOURCE=..\..\src\varDeclarationNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\varKinds.c
# End Source File
# Begin Source File

SOURCE=..\..\src\varNodeList.c
# End Source File
# Begin Source File

SOURCE=..\..\src\warnClause.c
# End Source File
# Begin Source File

SOURCE=..\..\src\ynm.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
