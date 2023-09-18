// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/LFPInventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULFPInventoryComponent;
struct FGameplayTag;
struct FLFPInventoryItemData;
#ifdef LOHFUNCTIONPLUGINITEM_LFPInventoryComponent_generated_h
#error "LFPInventoryComponent.generated.h already included, missing '#pragma once' in LFPInventoryComponent.h"
#endif
#define LOHFUNCTIONPLUGINITEM_LFPInventoryComponent_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics; \
	LOHFUNCTIONPLUGINITEM_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGINITEM_API UScriptStruct* StaticStruct<struct FLFPInventoryItemData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_96_DELEGATE \
LOHFUNCTIONPLUGINITEM_API void FOnItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnItemEvent, FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_97_DELEGATE \
LOHFUNCTIONPLUGINITEM_API void FOnUpdateItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateItemEvent, FLFPInventoryItemData const& OldItemData, FLFPInventoryItemData const& NewItemData, const int32 SlotIndex, const FString& EventInfo);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_98_DELEGATE \
LOHFUNCTIONPLUGINITEM_API void FOnSwapItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSwapItemEvent, FLFPInventoryItemData const& FromItemData, const int32 FromSlot, FLFPInventoryItemData const& ToItemData, const int32 ToSlot, const FString& EventInfo);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_99_DELEGATE \
LOHFUNCTIONPLUGINITEM_API void FOnItemFunctionEvent_DelegateWrapper(const FMulticastScriptDelegate& OnItemFunctionEvent);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventorySlotList); \
	DECLARE_FUNCTION(execGetInventorySlot); \
	DECLARE_FUNCTION(execFindItemListWithItemName); \
	DECLARE_FUNCTION(execFindItemListWithTag); \
	DECLARE_FUNCTION(execFindInventorySlotWithName); \
	DECLARE_FUNCTION(execFindInventorySlotOffsetWithName); \
	DECLARE_FUNCTION(execFindAvailableInventorySlot); \
	DECLARE_FUNCTION(execHaveItemsAtSlotName); \
	DECLARE_FUNCTION(execIsInventorySlotHasName); \
	DECLARE_FUNCTION(execHasInventorySlotName); \
	DECLARE_FUNCTION(execIsInventorySlotItemSame); \
	DECLARE_FUNCTION(execIsInventorySlotItemValid); \
	DECLARE_FUNCTION(execIsInventorySlotIndexValid); \
	DECLARE_FUNCTION(execOnInventorySlotItemListRep); \
	DECLARE_FUNCTION(execIsInventorySlotHasTag); \
	DECLARE_FUNCTION(execIsInventorySlotAvailable); \
	DECLARE_FUNCTION(execIsItemSortPriorityHigher); \
	DECLARE_FUNCTION(execProcessSwapItem); \
	DECLARE_FUNCTION(execProcessRemoveItem); \
	DECLARE_FUNCTION(execProcessAddItem); \
	DECLARE_FUNCTION(execCanSwapItem); \
	DECLARE_FUNCTION(execCanRemoveItem); \
	DECLARE_FUNCTION(execCanAddItem); \
	DECLARE_FUNCTION(execTrimInventorySlotList); \
	DECLARE_FUNCTION(execSortInventory); \
	DECLARE_FUNCTION(execTransferItem); \
	DECLARE_FUNCTION(execSwapItem); \
	DECLARE_FUNCTION(execClearInventory); \
	DECLARE_FUNCTION(execRemoveItemList); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItemList); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execBroadcastItemEvent);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_CALLBACK_WRAPPERS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULFPInventoryComponent, NO_API)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPInventoryComponent(); \
	friend struct Z_Construct_UClass_ULFPInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(ULFPInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPluginItem"), NO_API) \
	DECLARE_SERIALIZER(ULFPInventoryComponent) \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_ARCHIVESERIALIZER \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventorySlotItemList=NETFIELD_REP_START, \
		NETFIELD_REP_END=InventorySlotItemList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPInventoryComponent(ULFPInventoryComponent&&); \
	NO_API ULFPInventoryComponent(const ULFPInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPInventoryComponent) \
	NO_API virtual ~ULFPInventoryComponent();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_102_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_CALLBACK_WRAPPERS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGINITEM_API UClass* StaticClass<class ULFPInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
