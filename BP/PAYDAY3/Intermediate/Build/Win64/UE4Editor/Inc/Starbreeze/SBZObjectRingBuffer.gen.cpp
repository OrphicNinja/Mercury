// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZObjectRingBuffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZObjectRingBuffer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectRingBuffer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectRingBuffer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_DropElementDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectContainer_NoRegister();
// End Cross Module References
	void USBZObjectRingBuffer::StaticRegisterNativesUSBZObjectRingBuffer()
	{
	}
	UClass* Z_Construct_UClass_USBZObjectRingBuffer_NoRegister()
	{
		return USBZObjectRingBuffer::StaticClass();
	}
	struct Z_Construct_UClass_USBZObjectRingBuffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeadIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ElementDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedElementContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroppedElementContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZObjectRingBuffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZObjectContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectRingBuffer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZObjectRingBuffer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectRingBuffer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_HeadIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectRingBuffer" },
		{ "ModuleRelativePath", "Public/SBZObjectRingBuffer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_HeadIndex = { "HeadIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectRingBuffer, HeadIndex), METADATA_PARAMS(Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_HeadIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_HeadIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_ElementDropped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectRingBuffer" },
		{ "ModuleRelativePath", "Public/SBZObjectRingBuffer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_ElementDropped = { "ElementDropped", nullptr, (EPropertyFlags)0x0010000000280005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectRingBuffer, ElementDropped), Z_Construct_UDelegateFunction_Starbreeze_DropElementDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_ElementDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_ElementDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_DroppedElementContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectRingBuffer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectRingBuffer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_DroppedElementContainer = { "DroppedElementContainer", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectRingBuffer, DroppedElementContainer), Z_Construct_UClass_USBZObjectContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_DroppedElementContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_DroppedElementContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZObjectRingBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_HeadIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_ElementDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectRingBuffer_Statics::NewProp_DroppedElementContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZObjectRingBuffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZObjectRingBuffer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZObjectRingBuffer_Statics::ClassParams = {
		&USBZObjectRingBuffer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZObjectRingBuffer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectRingBuffer_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZObjectRingBuffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectRingBuffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZObjectRingBuffer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZObjectRingBuffer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZObjectRingBuffer, 1746536192);
	template<> STARBREEZE_API UClass* StaticClass<USBZObjectRingBuffer>()
	{
		return USBZObjectRingBuffer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZObjectRingBuffer(Z_Construct_UClass_USBZObjectRingBuffer, &USBZObjectRingBuffer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZObjectRingBuffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZObjectRingBuffer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
