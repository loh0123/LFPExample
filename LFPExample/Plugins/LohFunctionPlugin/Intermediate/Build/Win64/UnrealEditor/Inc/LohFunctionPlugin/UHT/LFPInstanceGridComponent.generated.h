// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LFPInstanceGridComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInstancedStaticMeshComponent;
class ULFPWorldGrid;
struct FLFPInstanceGridInstanceInfo;
#ifdef LOHFUNCTIONPLUGIN_LFPInstanceGridComponent_generated_h
#error "LFPInstanceGridComponent.generated.h already included, missing '#pragma once' in LFPInstanceGridComponent.h"
#endif
#define LOHFUNCTIONPLUGIN_LFPInstanceGridComponent_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPInstanceGridInstanceInfo>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPInstanceGridMeshData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomDatas); \
	DECLARE_FUNCTION(execSetCustomData); \
	DECLARE_FUNCTION(execSetInstances); \
	DECLARE_FUNCTION(execSetInstance); \
	DECLARE_FUNCTION(execRegisterInstanceStaticMeshComponentList); \
	DECLARE_FUNCTION(execRegisterInstanceStaticMeshComponent); \
	DECLARE_FUNCTION(execSetupGrid); \
	DECLARE_FUNCTION(execIsMeshIndexValid);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPInstanceGridComponent(); \
	friend struct Z_Construct_UClass_ULFPInstanceGridComponent_Statics; \
public: \
	DECLARE_CLASS(ULFPInstanceGridComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULFPInstanceGridComponent)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPInstanceGridComponent(ULFPInstanceGridComponent&&); \
	NO_API ULFPInstanceGridComponent(const ULFPInstanceGridComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPInstanceGridComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPInstanceGridComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPInstanceGridComponent) \
	NO_API virtual ~ULFPInstanceGridComponent();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_97_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<class ULFPInstanceGridComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
