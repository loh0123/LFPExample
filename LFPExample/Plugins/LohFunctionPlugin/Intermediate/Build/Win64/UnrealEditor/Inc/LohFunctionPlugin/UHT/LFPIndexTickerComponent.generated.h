// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LFPIndexTickerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FLFPIndexTickGroupData;
class ULFPTickerObject;
struct FLFPIndexTickData;
struct FLFPIndexTickGroupData;
#ifdef LOHFUNCTIONPLUGIN_LFPIndexTickerComponent_generated_h
#error "LFPIndexTickerComponent.generated.h already included, missing '#pragma once' in LFPIndexTickerComponent.h"
#endif
#define LOHFUNCTIONPLUGIN_LFPIndexTickerComponent_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPIndexTickData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPIndexTickData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_52_DELEGATE \
LOHFUNCTIONPLUGIN_API void FLFPOnIndex_DelegateWrapper(const FMulticastScriptDelegate& LFPOnIndex, const int32 TickIndex, const FIntPoint GroupIndex);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPIndexTickGroupData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomTicker); \
	DECLARE_FUNCTION(execGetCacheRandomTickIndex); \
	DECLARE_FUNCTION(execSaveGroupList); \
	DECLARE_FUNCTION(execLoadGroupList); \
	DECLARE_FUNCTION(execScheduledTickIndex); \
	DECLARE_FUNCTION(execAddTickGroup); \
	DECLARE_FUNCTION(execCallTick);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPIndexTickerComponent(); \
	friend struct Z_Construct_UClass_ULFPIndexTickerComponent_Statics; \
public: \
	DECLARE_CLASS(ULFPIndexTickerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULFPIndexTickerComponent)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPIndexTickerComponent(ULFPIndexTickerComponent&&); \
	NO_API ULFPIndexTickerComponent(const ULFPIndexTickerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPIndexTickerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPIndexTickerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPIndexTickerComponent) \
	NO_API virtual ~ULFPIndexTickerComponent();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_72_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<class ULFPIndexTickerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
