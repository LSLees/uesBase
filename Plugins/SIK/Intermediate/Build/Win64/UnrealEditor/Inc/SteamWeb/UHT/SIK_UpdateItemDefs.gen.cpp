// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameInventory/SIK_UpdateItemDefs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UpdateItemDefs() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateItemDefs();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateItemDefs_NoRegister();
STEAMWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_WebItemDef();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSIK_WebItemDef ***************************************************
struct Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_WebItemDef); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_WebItemDef); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefId_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tradable_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Marketable_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Commodity_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_WebItemDef constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDefId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BackgroundColor;
	static void NewProp_Tradable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Tradable;
	static void NewProp_Marketable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Marketable;
	static void NewProp_Commodity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Commodity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_WebItemDef constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_WebItemDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_WebItemDef;
class UScriptStruct* FSIK_WebItemDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_WebItemDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_WebItemDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_WebItemDef, (UObject*)Z_Construct_UPackage__Script_SteamWeb(), TEXT("SIK_WebItemDef"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_WebItemDef.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_WebItemDef Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_WebItemDef, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_ItemDefId = { "ItemDefId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_WebItemDef, ItemDefId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefId_MetaData), NewProp_ItemDefId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_WebItemDef, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_WebItemDef, DisplayType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayType_MetaData), NewProp_DisplayType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_WebItemDef, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_WebItemDef, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_WebItemDef, BackgroundColor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
void Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Tradable_SetBit(void* Obj)
{
	((FSIK_WebItemDef*)Obj)->Tradable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Tradable = { "Tradable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_WebItemDef), &Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Tradable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tradable_MetaData), NewProp_Tradable_MetaData) };
void Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Marketable_SetBit(void* Obj)
{
	((FSIK_WebItemDef*)Obj)->Marketable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Marketable = { "Marketable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_WebItemDef), &Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Marketable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Marketable_MetaData), NewProp_Marketable_MetaData) };
void Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Commodity_SetBit(void* Obj)
{
	((FSIK_WebItemDef*)Obj)->Commodity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Commodity = { "Commodity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_WebItemDef), &Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Commodity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Commodity_MetaData), NewProp_Commodity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_WebItemDef, Tags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_ItemDefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Tradable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Marketable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Commodity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_WebItemDef Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
	nullptr,
	&NewStructOps,
	"SIK_WebItemDef",
	Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::PropPointers),
	sizeof(FSIK_WebItemDef),
	alignof(FSIK_WebItemDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_WebItemDef()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_WebItemDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_WebItemDef.InnerSingleton, Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_WebItemDef.InnerSingleton);
}
// ********** End ScriptStruct FSIK_WebItemDef *****************************************************

// ********** Begin Class USIK_UpdateItemDefs Function UpdateItemDefs ******************************
struct Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics
{
	struct SIK_UpdateItemDefs_eventUpdateItemDefs_Parms
	{
		FString Key;
		int32 AppId;
		TArray<FSIK_WebItemDef> ItemDefs;
		USIK_UpdateItemDefs* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateItemDefs constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateItemDefs constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateItemDefs Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateItemDefs_eventUpdateItemDefs_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateItemDefs_eventUpdateItemDefs_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_WebItemDef, METADATA_PARAMS(0, nullptr) }; // 2981951424
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateItemDefs_eventUpdateItemDefs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefs_MetaData), NewProp_ItemDefs_MetaData) }; // 2981951424
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateItemDefs_eventUpdateItemDefs_Parms, ReturnValue), Z_Construct_UClass_USIK_UpdateItemDefs_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::PropPointers) < 2048);
// ********** End Function UpdateItemDefs Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UpdateItemDefs, nullptr, "UpdateItemDefs", 	Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::SIK_UpdateItemDefs_eventUpdateItemDefs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::SIK_UpdateItemDefs_eventUpdateItemDefs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UpdateItemDefs::execUpdateItemDefs)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_TARRAY(FSIK_WebItemDef,Z_Param_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UpdateItemDefs**)Z_Param__Result=USIK_UpdateItemDefs::UpdateItemDefs(Z_Param_Key,Z_Param_Out_AppId,Z_Param_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class USIK_UpdateItemDefs Function UpdateItemDefs ********************************

// ********** Begin Class USIK_UpdateItemDefs ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UpdateItemDefs;
UClass* USIK_UpdateItemDefs::GetPrivateStaticClass()
{
	using TClass = USIK_UpdateItemDefs;
	if (!Z_Registration_Info_UClass_USIK_UpdateItemDefs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UpdateItemDefs"),
			Z_Registration_Info_UClass_USIK_UpdateItemDefs.InnerSingleton,
			StaticRegisterNativesUSIK_UpdateItemDefs,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USIK_UpdateItemDefs.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UpdateItemDefs_NoRegister()
{
	return USIK_UpdateItemDefs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UpdateItemDefs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_UpdateItemDefs.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UpdateItemDefs constinit property declarations **********************
// ********** End Class USIK_UpdateItemDefs constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdateItemDefs"), .Pointer = &USIK_UpdateItemDefs::execUpdateItemDefs },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UpdateItemDefs_UpdateItemDefs, "UpdateItemDefs" }, // 2348144737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UpdateItemDefs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UpdateItemDefs_Statics
UObject* (*const Z_Construct_UClass_USIK_UpdateItemDefs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateItemDefs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UpdateItemDefs_Statics::ClassParams = {
	&USIK_UpdateItemDefs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateItemDefs_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UpdateItemDefs_Statics::Class_MetaDataParams)
};
void USIK_UpdateItemDefs::StaticRegisterNativesUSIK_UpdateItemDefs()
{
	UClass* Class = USIK_UpdateItemDefs::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UpdateItemDefs_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UpdateItemDefs()
{
	if (!Z_Registration_Info_UClass_USIK_UpdateItemDefs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UpdateItemDefs.OuterSingleton, Z_Construct_UClass_USIK_UpdateItemDefs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UpdateItemDefs.OuterSingleton;
}
USIK_UpdateItemDefs::USIK_UpdateItemDefs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UpdateItemDefs);
USIK_UpdateItemDefs::~USIK_UpdateItemDefs() {}
// ********** End Class USIK_UpdateItemDefs ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h__Script_SteamWeb_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_WebItemDef::StaticStruct, Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics::NewStructOps, TEXT("SIK_WebItemDef"),&Z_Registration_Info_UScriptStruct_FSIK_WebItemDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_WebItemDef), 2981951424U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UpdateItemDefs, USIK_UpdateItemDefs::StaticClass, TEXT("USIK_UpdateItemDefs"), &Z_Registration_Info_UClass_USIK_UpdateItemDefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UpdateItemDefs), 612256036U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h__Script_SteamWeb_1334353578{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h__Script_SteamWeb_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h__Script_SteamWeb_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h__Script_SteamWeb_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
