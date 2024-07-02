// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGateNavLinkComponent.h"
#include "Starbreeze/Public/SBZGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGateNavLinkComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavLinkComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavLinkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockableNavlinkInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityTrajectoryInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
// End Cross Module References
	void USBZGateNavLinkComponent::StaticRegisterNativesUSBZGateNavLinkComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZGateNavLinkComponent_NoRegister()
	{
		return USBZGateNavLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZGateNavLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBlocked_MetaData[];
#endif
		static void NewProp_bIsBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsing_MetaData[];
#endif
		static void NewProp_bIsUsing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgilityComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBlockingCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllowedBlockingCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBlockingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllowedBlockingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OriginalAreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGateNavLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZGateNavLinkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_LeftRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateNavLinkComponent" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_LeftRoom = { "LeftRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGateNavLinkComponent, LeftRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_LeftRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_LeftRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_RightRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateNavLinkComponent" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_RightRoom = { "RightRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGateNavLinkComponent, RightRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_RightRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_RightRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_NavigationLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateNavLinkComponent" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_NavigationLink = { "NavigationLink", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGateNavLinkComponent, NavigationLink), Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_NavigationLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_NavigationLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsBlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateNavLinkComponent" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsBlocked_SetBit(void* Obj)
	{
		((USBZGateNavLinkComponent*)Obj)->bIsBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsBlocked = { "bIsBlocked", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZGateNavLinkComponent), &Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsBlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsUsing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateNavLinkComponent" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsUsing_SetBit(void* Obj)
	{
		((USBZGateNavLinkComponent*)Obj)->bIsUsing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsUsing = { "bIsUsing", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZGateNavLinkComponent), &Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsUsing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsUsing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsUsing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AgilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateNavLinkComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AgilityComponent = { "AgilityComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGateNavLinkComponent, AgilityComponent), Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AgilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AgilityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateNavLinkComponent" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingCharacter = { "AllowedBlockingCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGateNavLinkComponent, AllowedBlockingCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateNavLinkComponent" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingController = { "AllowedBlockingController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGateNavLinkComponent, AllowedBlockingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_OriginalAreaClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateNavLinkComponent" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_OriginalAreaClass = { "OriginalAreaClass", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGateNavLinkComponent, OriginalAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_OriginalAreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_OriginalAreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGateNavLinkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_LeftRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_RightRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_NavigationLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_bIsUsing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AgilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_AllowedBlockingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGateNavLinkComponent_Statics::NewProp_OriginalAreaClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavLinkCustomInterface_NoRegister, (int32)VTABLE_OFFSET(USBZGateNavLinkComponent, INavLinkCustomInterface), false },
			{ Z_Construct_UClass_USBZBlockableNavlinkInterface_NoRegister, (int32)VTABLE_OFFSET(USBZGateNavLinkComponent, ISBZBlockableNavlinkInterface), false },
			{ Z_Construct_UClass_USBZAgilityTrajectoryInterface_NoRegister, (int32)VTABLE_OFFSET(USBZGateNavLinkComponent, ISBZAgilityTrajectoryInterface), false },
			{ Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister, (int32)VTABLE_OFFSET(USBZGateNavLinkComponent, ISBZRoomConnectorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGateNavLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGateNavLinkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGateNavLinkComponent_Statics::ClassParams = {
		&USBZGateNavLinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGateNavLinkComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x04A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGateNavLinkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGateNavLinkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGateNavLinkComponent, 1533218112);
	template<> STARBREEZE_API UClass* StaticClass<USBZGateNavLinkComponent>()
	{
		return USBZGateNavLinkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGateNavLinkComponent(Z_Construct_UClass_USBZGateNavLinkComponent, &USBZGateNavLinkComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGateNavLinkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGateNavLinkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
