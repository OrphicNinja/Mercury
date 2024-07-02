// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAccelByteUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAccelByteUser() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteUser_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteUser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUserActivity();
// End Cross Module References
	void USBZAccelByteUser::StaticRegisterNativesUSBZAccelByteUser()
	{
	}
	UClass* Z_Construct_UClass_USBZAccelByteUser_NoRegister()
	{
		return USBZAccelByteUser::StaticClass();
	}
	struct Z_Construct_UClass_USBZAccelByteUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Country;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_City_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_City;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserActivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserActivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAccelByteUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAccelByteUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelByteUser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_Country_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteUser" },
		{ "ModuleRelativePath", "Public/SBZAccelByteUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteUser, Country), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_Country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_City_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteUser" },
		{ "ModuleRelativePath", "Public/SBZAccelByteUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_City = { "City", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteUser, City), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_City_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_City_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_UserActivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteUser" },
		{ "ModuleRelativePath", "Public/SBZAccelByteUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_UserActivity = { "UserActivity", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteUser, UserActivity), Z_Construct_UScriptStruct_FSBZUserActivity, METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_UserActivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_UserActivity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAccelByteUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_Country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_City,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteUser_Statics::NewProp_UserActivity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAccelByteUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAccelByteUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAccelByteUser_Statics::ClassParams = {
		&USBZAccelByteUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAccelByteUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteUser_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAccelByteUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAccelByteUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAccelByteUser, 1634683791);
	template<> STARBREEZE_API UClass* StaticClass<USBZAccelByteUser>()
	{
		return USBZAccelByteUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAccelByteUser(Z_Construct_UClass_USBZAccelByteUser, &USBZAccelByteUser::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAccelByteUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAccelByteUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
