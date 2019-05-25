##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=McAfee
ConfigurationName      :=Debug
WorkspacePath          :=/root/Documentos/ANTIVIRUS
ProjectPath            :=/root/Documentos/ANTIVIRUS/McAfee
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=root
Date                   :=24/05/19
CodeLitePath           :=/root/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="McAfee.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/McAfee.cpp$(ObjectSuffix) $(IntermediateDirectory)/Virus.cpp$(ObjectSuffix) $(IntermediateDirectory)/Assinante.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/root/Documentos/ANTIVIRUS/McAfee/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/McAfee.cpp$(ObjectSuffix): McAfee.cpp $(IntermediateDirectory)/McAfee.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/root/Documentos/ANTIVIRUS/McAfee/McAfee.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/McAfee.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/McAfee.cpp$(DependSuffix): McAfee.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/McAfee.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/McAfee.cpp$(DependSuffix) -MM McAfee.cpp

$(IntermediateDirectory)/McAfee.cpp$(PreprocessSuffix): McAfee.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/McAfee.cpp$(PreprocessSuffix) McAfee.cpp

$(IntermediateDirectory)/Virus.cpp$(ObjectSuffix): Virus.cpp $(IntermediateDirectory)/Virus.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/root/Documentos/ANTIVIRUS/McAfee/Virus.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Virus.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Virus.cpp$(DependSuffix): Virus.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Virus.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Virus.cpp$(DependSuffix) -MM Virus.cpp

$(IntermediateDirectory)/Virus.cpp$(PreprocessSuffix): Virus.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Virus.cpp$(PreprocessSuffix) Virus.cpp

$(IntermediateDirectory)/Assinante.cpp$(ObjectSuffix): Assinante.cpp $(IntermediateDirectory)/Assinante.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/root/Documentos/ANTIVIRUS/McAfee/Assinante.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Assinante.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Assinante.cpp$(DependSuffix): Assinante.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Assinante.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Assinante.cpp$(DependSuffix) -MM Assinante.cpp

$(IntermediateDirectory)/Assinante.cpp$(PreprocessSuffix): Assinante.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Assinante.cpp$(PreprocessSuffix) Assinante.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


