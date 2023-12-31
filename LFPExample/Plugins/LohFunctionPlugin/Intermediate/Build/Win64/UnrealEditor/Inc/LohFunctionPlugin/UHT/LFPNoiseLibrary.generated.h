// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Math/LFPNoiseLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLFPNearbyVectorData;
struct FLFPNoiseMixTable;
struct FLFPNoiseTable;
struct FRandomStream;
#ifdef LOHFUNCTIONPLUGIN_LFPNoiseLibrary_generated_h
#error "LFPNoiseLibrary.generated.h already included, missing '#pragma once' in LFPNoiseLibrary.h"
#endif
#define LOHFUNCTIONPLUGIN_LFPNoiseLibrary_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPNoiseMixTable>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPNoiseTable_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPNoiseTable>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPNearbyVectorData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNearbyVectorNoise); \
	DECLARE_FUNCTION(execGetNearbySingleVectorNoise); \
	DECLARE_FUNCTION(execMixLerpDirection); \
	DECLARE_FUNCTION(execMixLerpVector); \
	DECLARE_FUNCTION(execMixLerpNoise); \
	DECLARE_FUNCTION(execGetLerpDirectionNoise); \
	DECLARE_FUNCTION(execGetLerpVectorNoise); \
	DECLARE_FUNCTION(execGetLerpNoise); \
	DECLARE_FUNCTION(execGetDirectionNoise); \
	DECLARE_FUNCTION(execGetVectorNoise); \
	DECLARE_FUNCTION(execGetFloatNoise); \
	DECLARE_FUNCTION(execCreateNoiseTable);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPNoiseLibrary(); \
	friend struct Z_Construct_UClass_ULFPNoiseLibrary_Statics; \
public: \
	DECLARE_CLASS(ULFPNoiseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULFPNoiseLibrary)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFPNoiseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPNoiseLibrary(ULFPNoiseLibrary&&); \
	NO_API ULFPNoiseLibrary(const ULFPNoiseLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPNoiseLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPNoiseLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFPNoiseLibrary) \
	NO_API virtual ~ULFPNoiseLibrary();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_62_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<class ULFPNoiseLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
