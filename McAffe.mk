##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=McAffe
ConfigurationName      :=Release
WorkspacePath          :=/root/Documentos/antivirus
ProjectPath            :=/root/Documentos/antivirus/McAffe
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=root
Date                   :=11/05/19
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
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="McAffe.txt"
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
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/McAffe.cpp$(ObjectSuffix) $(IntermediateDirectory)/Assinante.cpp$(ObjectSuffix) $(IntermediateDirectory)/Virus.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



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
	@test -d ./Release || $(MakeDirCommand) ./Release


$(IntermediateDirectory)/.d:
	@test -d ./Release || $(MakeDirCommand) ./Release

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/McAffe.cpp$(ObjectSuffix): McAffe.cpp $(IntermediateDirectory)/McAffe.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/root/Documentos/antivirus/McAffe/McAffe.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/McAffe.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/McAffe.cpp$(DependSuffix): McAffe.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/McAffe.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/McAffe.cpp$(DependSuffix) -MM McAffe.cpp

$(IntermediateDirectory)/McAffe.cpp$(PreprocessSuffix): McAffe.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/McAffe.cpp$(PreprocessSuffix) McAffe.cpp

$(IntermediateDirectory)/Assinante.cpp$(ObjectSuffix): Assinante.cpp $(IntermediateDirectory)/Assinante.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/root/Documentos/antivirus/McAffe/Assinante.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Assinante.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Assinante.cpp$(DependSuffix): Assinante.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Assinante.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Assinante.cpp$(DependSuffix) -MM Assinante.cpp

$(IntermediateDirectory)/Assinante.cpp$(PreprocessSuffix): Assinante.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Assinante.cpp$(PreprocessSuffix) Assinante.cpp

$(IntermediateDirectory)/Virus.cpp$(ObjectSuffix): Virus.cpp $(IntermediateDirectory)/Virus.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/root/Documentos/antivirus/McAffe/Virus.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Virus.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Virus.cpp$(DependSuffix): Virus.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Virus.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Virus.cpp$(DependSuffix) -MM Virus.cpp

$(IntermediateDirectory)/Virus.cpp$(PreprocessSuffix): Virus.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Virus.cpp$(PreprocessSuffix) Virus.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/root/Documentos/antivirus/McAffe/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


