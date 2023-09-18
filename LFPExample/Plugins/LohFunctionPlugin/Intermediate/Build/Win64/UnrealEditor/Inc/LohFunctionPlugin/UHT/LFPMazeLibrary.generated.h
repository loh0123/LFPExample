// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Math/LFPMazeLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMazeCellType : uint8;
struct FLFPMazeTable;
struct FRandomStream;
#ifdef LOHFUNCTIONPLUGIN_LFPMazeLibrary_generated_h
#error "LFPMazeLibrary.generated.h already included, missing '#pragma once' in LFPMazeLibrary.h"
#endif
#define LOHFUNCTIONPLUGIN_LFPMazeLibrary_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPMazeData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPMazeData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPMazeStartData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPMazeStartData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPMazeTable_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPMazeTable>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMazeCellNeighbourByType); \
	DECLARE_FUNCTION(execSetMazeCellID); \
	DECLARE_FUNCTION(execSetMazeCellType); \
	DECLARE_FUNCTION(execGenerateMazeArea); \
	DECLARE_FUNCTION(execRemoveMazeDeadEnd); \
	DECLARE_FUNCTION(execGenerateMazeData); \
	DECLARE_FUNCTION(execCreateMazeStartData);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPMazeLibrary(); \
	friend struct Z_Construct_UClass_ULFPMazeLibrary_Statics; \
public: \
	DECLARE_CLASS(ULFPMazeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULFPMazeLibrary)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFPMazeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPMazeLibrary(ULFPMazeLibrary&&); \
	NO_API ULFPMazeLibrary(const ULFPMazeLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPMazeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPMazeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFPMazeLibrary) \
	NO_API virtual ~ULFPMazeLibrary();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_83_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<class ULFPMazeLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPMazeLibrary_h


#define FOREACH_ENUM_EMAZECELLTYPE(op) \
	op(EMazeCellType::Maze_Open) \
	op(EMazeCellType::Maze_Close) \
	op(EMazeCellType::Maze_Room) 

enum class EMazeCellType : uint8;
template<> struct TIsUEnumClass<EMazeCellType> { enum { Value = true }; };
template<> LOHFUNCTIONPLUGIN_API UEnum* StaticEnum<EMazeCellType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
