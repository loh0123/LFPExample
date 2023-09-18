// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/LFPItemMutatorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULFPInventoryComponent;
struct FLFPItemMutatorQueueData;
#ifdef LOHFUNCTIONPLUGINITEM_LFPItemMutatorComponent_generated_h
#error "LFPItemMutatorComponent.generated.h already included, missing '#pragma once' in LFPItemMutatorComponent.h"
#endif
#define LOHFUNCTIONPLUGINITEM_LFPItemMutatorComponent_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics; \
	LOHFUNCTIONPLUGINITEM_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGINITEM_API UScriptStruct* StaticStruct<struct FLFPItemMutatorQueueData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_37_DELEGATE \
LOHFUNCTIONPLUGINITEM_API void FOnMutatorItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMutatorItemEvent, const int32 QueueIndex, const FLFPItemMutatorQueueData QueueData);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_38_DELEGATE \
LOHFUNCTIONPLUGINITEM_API void FOnMutatorFunctionEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMutatorFunctionEvent);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_39_DELEGATE \
LOHFUNCTIONPLUGINITEM_API void FOnProcessMutatorItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnProcessMutatorItemEvent, FLFPItemMutatorQueueData const& ItemData, bool bReturnConsume);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemRecipe); \
	DECLARE_FUNCTION(execGetQueueItem); \
	DECLARE_FUNCTION(execIsQueueIndexValid); \
	DECLARE_FUNCTION(execOnMutatorQueueRep); \
	DECLARE_FUNCTION(execConsumeItemFromInventory); \
	DECLARE_FUNCTION(execCanDeleteItemFromQueue); \
	DECLARE_FUNCTION(execCanResumeItemCountdown); \
	DECLARE_FUNCTION(execCanPauseItemCountdown); \
	DECLARE_FUNCTION(execCanRemoveItemFromQueue); \
	DECLARE_FUNCTION(execCanAddItemToQueue); \
	DECLARE_FUNCTION(execProcessItem); \
	DECLARE_FUNCTION(execProcessItemQueue); \
	DECLARE_FUNCTION(execClearItemQueue); \
	DECLARE_FUNCTION(execDeleteItemFromQueue); \
	DECLARE_FUNCTION(execResumeItemCountdown); \
	DECLARE_FUNCTION(execPauseItemCountdown); \
	DECLARE_FUNCTION(execRemoveItemFromQueue); \
	DECLARE_FUNCTION(execAddItemToQueue); \
	DECLARE_FUNCTION(execSetInventoryComponent);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_CALLBACK_WRAPPERS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPItemMutatorComponent(); \
	friend struct Z_Construct_UClass_ULFPItemMutatorComponent_Statics; \
public: \
	DECLARE_CLASS(ULFPItemMutatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPluginItem"), NO_API) \
	DECLARE_SERIALIZER(ULFPItemMutatorComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MutatorQueue=NETFIELD_REP_START, \
		NETFIELD_REP_END=MutatorQueue	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPItemMutatorComponent(ULFPItemMutatorComponent&&); \
	NO_API ULFPItemMutatorComponent(const ULFPItemMutatorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPItemMutatorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPItemMutatorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPItemMutatorComponent) \
	NO_API virtual ~ULFPItemMutatorComponent();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_48_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_CALLBACK_WRAPPERS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGINITEM_API UClass* StaticClass<class ULFPItemMutatorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
