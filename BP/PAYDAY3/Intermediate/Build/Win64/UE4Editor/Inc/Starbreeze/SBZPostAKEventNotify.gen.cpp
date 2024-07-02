// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPostAKEventNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPostAKEventNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPostAKEventNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPostAKEventNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	void USBZPostAKEventNotify::StaticRegisterNativesUSBZPostAKEventNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZPostAKEventNotify_NoRegister()
	{
		return USBZPostAKEventNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZPostAKEventNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Event;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[];
#endif
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDistanceCulled_MetaData[];
#endif
		static void NewProp_bDistanceCulled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDistanceCulled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCullingDistance_MetaData[];
#endif
		static void NewProp_bOverrideCullingDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCullingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullingDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPostAKEventNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostAKEventNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZPostAKEventNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPostAKEventNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_AttachName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPostAKEventNotify" },
		{ "ModuleRelativePath", "Public/SBZPostAKEventNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_AttachName = { "AttachName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPostAKEventNotify, AttachName), METADATA_PARAMS(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_AttachName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_AttachName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_Event_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPostAKEventNotify" },
		{ "ModuleRelativePath", "Public/SBZPostAKEventNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPostAKEventNotify, Event), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_Event_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_EventName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPostAKEventNotify" },
		{ "ModuleRelativePath", "Public/SBZPostAKEventNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPostAKEventNotify, EventName), METADATA_PARAMS(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bFollow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPostAKEventNotify" },
		{ "ModuleRelativePath", "Public/SBZPostAKEventNotify.h" },
	};
#endif
	void Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((USBZPostAKEventNotify*)Obj)->bFollow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPostAKEventNotify), &Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bFollow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bDistanceCulled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPostAKEventNotify" },
		{ "ModuleRelativePath", "Public/SBZPostAKEventNotify.h" },
	};
#endif
	void Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bDistanceCulled_SetBit(void* Obj)
	{
		((USBZPostAKEventNotify*)Obj)->bDistanceCulled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bDistanceCulled = { "bDistanceCulled", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPostAKEventNotify), &Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bDistanceCulled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bDistanceCulled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bDistanceCulled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bOverrideCullingDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPostAKEventNotify" },
		{ "ModuleRelativePath", "Public/SBZPostAKEventNotify.h" },
	};
#endif
	void Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bOverrideCullingDistance_SetBit(void* Obj)
	{
		((USBZPostAKEventNotify*)Obj)->bOverrideCullingDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bOverrideCullingDistance = { "bOverrideCullingDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPostAKEventNotify), &Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bOverrideCullingDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bOverrideCullingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bOverrideCullingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_CullingDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPostAKEventNotify" },
		{ "ModuleRelativePath", "Public/SBZPostAKEventNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_CullingDistance = { "CullingDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPostAKEventNotify, CullingDistance), METADATA_PARAMS(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_CullingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_CullingDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPostAKEventNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_AttachName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bFollow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bDistanceCulled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_bOverrideCullingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPostAKEventNotify_Statics::NewProp_CullingDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPostAKEventNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPostAKEventNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPostAKEventNotify_Statics::ClassParams = {
		&USBZPostAKEventNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPostAKEventNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostAKEventNotify_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPostAKEventNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostAKEventNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPostAKEventNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPostAKEventNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPostAKEventNotify, 4053118763);
	template<> STARBREEZE_API UClass* StaticClass<USBZPostAKEventNotify>()
	{
		return USBZPostAKEventNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPostAKEventNotify(Z_Construct_UClass_USBZPostAKEventNotify, &USBZPostAKEventNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPostAKEventNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPostAKEventNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
