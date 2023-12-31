// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Voxel/LFPVoxelNetworkProxyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULFPGridContainerComponent;
class ULFPTCPSocketComponent;
struct FLFPGridUpdateAction;
struct FLFPTCPSocketSetting;
#ifdef LOHFUNCTIONPLUGINVOXEL_LFPVoxelNetworkProxyComponent_generated_h
#error "LFPVoxelNetworkProxyComponent.generated.h already included, missing '#pragma once' in LFPVoxelNetworkProxyComponent.h"
#endif
#define LOHFUNCTIONPLUGINVOXEL_LFPVoxelNetworkProxyComponent_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics; \
	LOHFUNCTIONPLUGINVOXEL_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<struct FLFPVoxelNetworkProxySendInfo>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics; \
	LOHFUNCTIONPLUGINVOXEL_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<struct FLFPVoxelNetworkProxyReceiveInfo>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNetworkMessage); \
	DECLARE_FUNCTION(execOnChuckUpdate); \
	DECLARE_FUNCTION(execRequestChuckData); \
	DECLARE_FUNCTION(execSetupProxy); \
	DECLARE_FUNCTION(execGetDataCompleteness);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPVoxelNetworkProxyComponent(); \
	friend struct Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics; \
public: \
	DECLARE_CLASS(ULFPVoxelNetworkProxyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPluginVoxel"), NO_API) \
	DECLARE_SERIALIZER(ULFPVoxelNetworkProxyComponent)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPVoxelNetworkProxyComponent(ULFPVoxelNetworkProxyComponent&&); \
	NO_API ULFPVoxelNetworkProxyComponent(const ULFPVoxelNetworkProxyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPVoxelNetworkProxyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPVoxelNetworkProxyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPVoxelNetworkProxyComponent) \
	NO_API virtual ~ULFPVoxelNetworkProxyComponent();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_55_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGINVOXEL_API UClass* StaticClass<class ULFPVoxelNetworkProxyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
