/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCPERSON_H
#define IFC2X3_IFCPERSON_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class IfcAddress;
    class IfcPerson;

    /**
     */
    class Inverted_IfcPerson_Addresses_type : public List_IfcAddress_1_n {
    public:
        /**
         */
        typedef List_IfcAddress_1_n::iterator iterator;

        /**
         */
        IfcPerson *mOwner;
        /**
         */
        Inverted_IfcPerson_Addresses_type();
        /**
         * @param owner
         */
        void setOwner(IfcPerson *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcAddress > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcAddress > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcPerson : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Id'.
         * 
         */
        virtual IfcIdentifier getId();
        /**
         * (const) Returns the value of the explicit attribute 'Id'.
         * 
         * @return the value of the explicit attribute 'Id'
         */
        virtual const IfcIdentifier getId() const;
        /**
         * Sets the value of the explicit attribute 'Id'.
         * 
         * @param value
         */
        virtual void setId(const IfcIdentifier &value);
        /**
         * Gets the value of the explicit attribute 'FamilyName'.
         * 
         */
        virtual IfcLabel getFamilyName();
        /**
         * (const) Returns the value of the explicit attribute 'FamilyName'.
         * 
         * @return the value of the explicit attribute 'FamilyName'
         */
        virtual const IfcLabel getFamilyName() const;
        /**
         * Sets the value of the explicit attribute 'FamilyName'.
         * 
         * @param value
         */
        virtual void setFamilyName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'GivenName'.
         * 
         */
        virtual IfcLabel getGivenName();
        /**
         * (const) Returns the value of the explicit attribute 'GivenName'.
         * 
         * @return the value of the explicit attribute 'GivenName'
         */
        virtual const IfcLabel getGivenName() const;
        /**
         * Sets the value of the explicit attribute 'GivenName'.
         * 
         * @param value
         */
        virtual void setGivenName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'MiddleNames'.
         * 
         */
        virtual List_IfcLabel_1_n &getMiddleNames();
        /**
         * (const) Returns the value of the explicit attribute 'MiddleNames'.
         * 
         * @return the value of the explicit attribute 'MiddleNames'
         */
        virtual const List_IfcLabel_1_n &getMiddleNames() const;
        /**
         * Sets the value of the explicit attribute 'MiddleNames'.
         * 
         * @param value
         */
        virtual void setMiddleNames(const List_IfcLabel_1_n &value);
        /**
         * Gets the value of the explicit attribute 'PrefixTitles'.
         * 
         */
        virtual List_IfcLabel_1_n &getPrefixTitles();
        /**
         * (const) Returns the value of the explicit attribute 'PrefixTitles'.
         * 
         * @return the value of the explicit attribute 'PrefixTitles'
         */
        virtual const List_IfcLabel_1_n &getPrefixTitles() const;
        /**
         * Sets the value of the explicit attribute 'PrefixTitles'.
         * 
         * @param value
         */
        virtual void setPrefixTitles(const List_IfcLabel_1_n &value);
        /**
         * Gets the value of the explicit attribute 'SuffixTitles'.
         * 
         */
        virtual List_IfcLabel_1_n &getSuffixTitles();
        /**
         * (const) Returns the value of the explicit attribute 'SuffixTitles'.
         * 
         * @return the value of the explicit attribute 'SuffixTitles'
         */
        virtual const List_IfcLabel_1_n &getSuffixTitles() const;
        /**
         * Sets the value of the explicit attribute 'SuffixTitles'.
         * 
         * @param value
         */
        virtual void setSuffixTitles(const List_IfcLabel_1_n &value);
        /**
         * Gets the value of the explicit attribute 'Roles'.
         * 
         */
        virtual List_IfcActorRole_1_n &getRoles();
        /**
         * (const) Returns the value of the explicit attribute 'Roles'.
         * 
         * @return the value of the explicit attribute 'Roles'
         */
        virtual const List_IfcActorRole_1_n &getRoles() const;
        /**
         * Sets the value of the explicit attribute 'Roles'.
         * 
         * @param value
         */
        virtual void setRoles(const List_IfcActorRole_1_n &value);
        /**
         * Gets the value of the explicit attribute 'Addresses'.
         * 
         */
        virtual List_IfcAddress_1_n &getAddresses();
        /**
         * (const) Returns the value of the explicit attribute 'Addresses'.
         * 
         * @return the value of the explicit attribute 'Addresses'
         */
        virtual const List_IfcAddress_1_n &getAddresses() const;
        /**
         * Gets the value of the inverse attribute 'EngagedIn'.
         * 
         */
        Inverse_Set_IfcPersonAndOrganization_0_n &getEngagedIn();
        /**
         * (const) Returns the value of the explicit attribute 'EngagedIn'.
         * 
         * @return the value of the explicit attribute 'EngagedIn'
         */
        virtual const Inverse_Set_IfcPersonAndOrganization_0_n &getEngagedIn() const;
        friend class ExpressDataSet;
        friend class IfcPersonAndOrganization;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPerson(Step::Id id, Step::SPFData *args);
        virtual ~IfcPerson();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPerson &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_id;
        /**
         */
        Step::String m_familyName;
        /**
         */
        Step::String m_givenName;
        /**
         */
        List_IfcLabel_1_n m_middleNames;
        /**
         */
        List_IfcLabel_1_n m_prefixTitles;
        /**
         */
        List_IfcLabel_1_n m_suffixTitles;
        /**
         */
        List_IfcActorRole_1_n m_roles;
        /**
         */
        Inverted_IfcPerson_Addresses_type m_addresses;
        /**
         */
        Inverse_Set_IfcPersonAndOrganization_0_n m_engagedIn;

    };

}

#endif // IFC2X3_IFCPERSON_H
