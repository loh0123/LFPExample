// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Voxel/LFPVoxelRendererComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULFPGridContainerComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
struct FLFPChuckUpdateAction;
#ifdef LOHFUNCTIONPLUGINVOXEL_LFPVoxelRendererComponent_generated_h
#error "LFPVoxelRendererComponent.generated.h already included, missing '#pragma once' in LFPVoxelRendererComponent.h"
#endif
#define LOHFUNCTIONPLUGINVOXEL_LFPVoxelRendererComponent_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_416_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics; \
	LOHFUNCTIONPLUGINVOXEL_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<struct FLFPVoxelRendererSetting>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_480_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics; \
	LOHFUNCTIONPLUGINVOXEL_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<struct FLFPVoxelRendererStatus>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_631_DELEGATE \
LOHFUNCTIONPLUGINVOXEL_API void FOnVoxelRendererUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnVoxelRendererUpdate);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterialList); \
	DECLARE_FUNCTION(execCanUpdateAttribute); \
	DECLARE_FUNCTION(execCanUpdateMesh); \
	DECLARE_FUNCTION(execOnChuckUpdate); \
	DECLARE_FUNCTION(execToWorldLocation); \
	DECLARE_FUNCTION(execToGridIndex); \
	DECLARE_FUNCTION(execSetDisableFaceCulling); \
	DECLARE_FUNCTION(execUpdateAttribute); \
	DECLARE_FUNCTION(execUpdateMesh); \
	DECLARE_FUNCTION(execReleaseRenderer); \
	DECLARE_FUNCTION(execInitializeRenderer);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPVoxelRendererComponent(); \
	friend struct Z_Construct_UClass_ULFPVoxelRendererComponent_Statics; \
public: \
	DECLARE_CLASS(ULFPVoxelRendererComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPluginVoxel"), NO_API) \
	DECLARE_SERIALIZER(ULFPVoxelRendererComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULFPVoxelRendererComponent*>(this); }


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPVoxelRendererComponent(ULFPVoxelRendererComponent&&); \
	NO_API ULFPVoxelRendererComponent(const ULFPVoxelRendererComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPVoxelRendererComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPVoxelRendererComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPVoxelRendererComponent) \
	NO_API virtual ~ULFPVoxelRendererComponent();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_636_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_639_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGINVOXEL_API UClass* StaticClass<class ULFPVoxelRendererComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h


#define FOREACH_ENUM_ELFPVOXELRENDERERMODE(op) \
	op(ELFPVoxelRendererMode::LFP_Dynamic) \
	op(ELFPVoxelRendererMode::LFP_Static) \
	op(ELFPVoxelRendererMode::LFP_Render) \
	op(ELFPVoxelRendererMode::LFP_None) 

enum class ELFPVoxelRendererMode : uint8;
template<> struct TIsUEnumClass<ELFPVoxelRendererMode> { enum { Value = true }; };
template<> LOHFUNCTIONPLUGINVOXEL_API UEnum* StaticEnum<ELFPVoxelRendererMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
