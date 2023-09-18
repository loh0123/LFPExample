// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LFPGridContainerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FLFPGridPaletteData;
class UActorComponent;
struct FLFPGridChuckData;
struct FLFPGridChuckDelegate;
struct FLFPGridPaletteData;
struct FLFPGridUpdateAction;
#ifdef LOHFUNCTIONPLUGIN_LFPGridContainerComponent_generated_h
#error "LFPGridContainerComponent.generated.h already included, missing '#pragma once' in LFPGridContainerComponent.h"
#endif
#define LOHFUNCTIONPLUGIN_LFPGridContainerComponent_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPGridPaletteContainerSetting>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPGridPaletteData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPGridTagDataTable>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPGridChuckData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPGridChuckData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_411_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPGridRegionData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPGridRegionData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_441_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPGridNameUpdateData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_481_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPChuckUpdateAction>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_508_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPGridChuckDelegate>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_554_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPGridChangeTagData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_565_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPGridUpdateAction>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_586_DELEGATE \
LOHFUNCTIONPLUGIN_API void FOnGridContainerChuckUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnGridContainerChuckUpdate, const int32 RegionIndex, const int32 ChuckIndex, FLFPGridUpdateAction const& GridUpdateAction);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_587_DELEGATE \
LOHFUNCTIONPLUGIN_API void FOnGridContainerChuckInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnGridContainerChuckInitialized, const int32 RegionIndex, const int32 ChuckIndex);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_588_DELEGATE \
LOHFUNCTIONPLUGIN_API void FOnGridContainerRegionInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnGridContainerRegionInitialized, const int32 RegionIndex);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveRenderChuck); \
	DECLARE_FUNCTION(execAddRenderChuck); \
	DECLARE_FUNCTION(execInitializeChuck); \
	DECLARE_FUNCTION(execInitializeRegion); \
	DECLARE_FUNCTION(execAddGridGlobalIndexOffset); \
	DECLARE_FUNCTION(execAddGridGlobalPositionOffset); \
	DECLARE_FUNCTION(execToGridGlobalIndex); \
	DECLARE_FUNCTION(execToGridGlobalPosition); \
	DECLARE_FUNCTION(execGetGridPaletteIndex); \
	DECLARE_FUNCTION(execGetGridPaletteList); \
	DECLARE_FUNCTION(execGetGridPalette); \
	DECLARE_FUNCTION(execGetGridTagData); \
	DECLARE_FUNCTION(execGetGridChuckData); \
	DECLARE_FUNCTION(execGetRenderChuckAmount); \
	DECLARE_FUNCTION(execInitializeGridChuck); \
	DECLARE_FUNCTION(execSetGridChuckData); \
	DECLARE_FUNCTION(execSetGridPalettes); \
	DECLARE_FUNCTION(execSetGridPalette); \
	DECLARE_FUNCTION(execSetTagData); \
	DECLARE_FUNCTION(execRemovePaletteTag); \
	DECLARE_FUNCTION(execAddPaletteTag); \
	DECLARE_FUNCTION(execIsGridPositionValid); \
	DECLARE_FUNCTION(execIsChuckPositionValid); \
	DECLARE_FUNCTION(execIsRegionPositionValid); \
	DECLARE_FUNCTION(execIsChuckInitialized); \
	DECLARE_FUNCTION(execIsRegionInitialized); \
	DECLARE_FUNCTION(execTest);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPGridContainerComponent(); \
	friend struct Z_Construct_UClass_ULFPGridContainerComponent_Statics; \
public: \
	DECLARE_CLASS(ULFPGridContainerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULFPGridContainerComponent)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPGridContainerComponent(ULFPGridContainerComponent&&); \
	NO_API ULFPGridContainerComponent(const ULFPGridContainerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPGridContainerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPGridContainerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPGridContainerComponent) \
	NO_API virtual ~ULFPGridContainerComponent();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_591_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_594_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<class ULFPGridContainerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
